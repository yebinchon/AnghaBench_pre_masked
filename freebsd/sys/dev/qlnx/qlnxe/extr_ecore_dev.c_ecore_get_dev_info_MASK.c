
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rel_pf_id; struct ecore_dev* p_dev; } ;
struct ecore_dev {int vendor_id; int device_id; int chip_num; int num_hwfns; int b_is_emul_full; struct ecore_hwfn* hwfns; void* chip_metal; void* chip_bond_id; void* chip_rev; int type; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 int FUNC_1 (struct ecore_hwfn*,char*,char*,void*,int,int,void*,void*,void*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ecore_dev*) ;
 scalar_t__ FUNC_4 (struct ecore_dev*) ;
 scalar_t__ FUNC_5 (struct ecore_dev*) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct ecore_dev*,int ,int*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_19,
            struct ecore_ptt *VAR_20)
{
 struct ecore_dev *VAR_21 = VAR_19->p_dev;
 u16 VAR_22;
 u32 VAR_23;


 FUNC_7(VAR_21, VAR_18,
      &VAR_21->vendor_id);
 FUNC_7(VAR_21, VAR_17,
      &VAR_21->device_id);


 VAR_22 = VAR_21->device_id & VAR_5;
 switch (VAR_22) {
 case 129:
  VAR_21->type = VAR_7;
  break;
 case 130:
  VAR_21->type = VAR_6;
  break;
 case 128:
  VAR_21->type = VAR_8;
  break;
 default:
  FUNC_2(VAR_19, 1, "Unknown device id 0x%x\n",
     VAR_21->device_id);
  return VAR_4;
 }

 VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_11);
 VAR_21->chip_num = (u16)FUNC_6(VAR_23, VAR_2);
 VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_12);
 VAR_21->chip_rev = (u8)FUNC_6(VAR_23, VAR_3);


 VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_14);

 if (VAR_23 & (1 << VAR_19->rel_pf_id)) {
  FUNC_2(VAR_21->hwfns, 0, "device in CMT mode\n");
  VAR_21->num_hwfns = 2;
 } else {
  VAR_21->num_hwfns = 1;
 }


 if (FUNC_0(VAR_21)) {



  FUNC_2(VAR_21->hwfns, 0, "device on emul - assume no CMT\n");
  VAR_21->num_hwfns = 1;
 }


 VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_13);
 VAR_21->chip_bond_id = (u8)FUNC_6(VAR_23, VAR_0);
 VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_10);
 VAR_21->chip_metal = (u8)FUNC_6(VAR_23, VAR_1);

 FUNC_1(VAR_21->hwfns,
  "Chip details - %s %c%d, Num: %04x Rev: %02x Bond id: %02x Metal: %02x\n",
  FUNC_4(VAR_21) ? "BB" : "AH",
  'A' + VAR_21->chip_rev, (int)VAR_21->chip_metal,
  VAR_21->chip_num, VAR_21->chip_rev, VAR_21->chip_bond_id,
  VAR_21->chip_metal);

 if (FUNC_5(VAR_21)) {
  FUNC_2(VAR_21->hwfns, 0,
     "The chip type/rev (BB A0) is not supported!\n");
  return VAR_4;
 }


 if (FUNC_0(VAR_21) && FUNC_3(VAR_21))
  FUNC_9(VAR_19, VAR_20, VAR_16, 0x1);

 if (FUNC_0(VAR_21)) {
  VAR_23 = FUNC_8(VAR_19, VAR_20, VAR_15);
  if (VAR_23 & (1 << 29)) {
   FUNC_2(VAR_19, 0, "Emulation: Running on a FULL build\n");
   VAR_21->b_is_emul_full = 1;
  } else {
   FUNC_2(VAR_19, 0, "Emulation: Running on a REDUCED build\n");
  }
 }


 return VAR_9;
}
