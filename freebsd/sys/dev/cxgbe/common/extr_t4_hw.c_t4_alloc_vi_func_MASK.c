
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
typedef int u16 ;
struct fw_vi_cmd {unsigned int nmac; void* alloc_to_len16; int norss_rsssize; int nmac0; int nmac1; int nmac2; int nmac3; int mac; int type_to_viid; int portid_pkd; void* op_to_vfn; } ;
struct TYPE_2__ {scalar_t__ viid_smt_extn_support; } ;
struct adapter {TYPE_1__ params; } ;
typedef int c ;


 int FUNC_0 (struct fw_vi_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (struct fw_vi_cmd*,int ,int) ;
 int FUNC_19 (struct adapter*,unsigned int,struct fw_vi_cmd*,int,struct fw_vi_cmd*) ;

int FUNC_20(struct adapter *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10,
       unsigned int VAR_11, u8 *VAR_12, u16 *VAR_13,
       uint8_t *VAR_14, uint16_t *VAR_15,
       unsigned int VAR_16, unsigned int VAR_17)
{
 int VAR_18;
 struct fw_vi_cmd VAR_19;

 FUNC_18(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.op_to_vfn = FUNC_16(FUNC_7(VAR_0) | VAR_2 |
      VAR_3 | VAR_1 |
      FUNC_9(VAR_9) | FUNC_12(VAR_10));
 VAR_19.alloc_to_len16 = FUNC_16(VAR_4 | FUNC_0(VAR_19));
 VAR_19.type_to_viid = FUNC_15(FUNC_11(VAR_17) |
         FUNC_8(VAR_16));
 VAR_19.portid_pkd = FUNC_10(VAR_8);
 VAR_19.nmac = VAR_11 - 1;
 if(!VAR_13)
  VAR_19.norss_rsssize = VAR_5;

 VAR_18 = FUNC_19(VAR_6, VAR_7, &VAR_19, sizeof(VAR_19), &VAR_19);
 if (VAR_18)
  return VAR_18;
 VAR_18 = FUNC_5(FUNC_13(VAR_19.type_to_viid));

 if (VAR_12) {
  FUNC_17(VAR_12, VAR_19.mac, sizeof(VAR_19.mac));
  switch (VAR_11) {
  case 5:
   FUNC_17(VAR_12 + 24, VAR_19.nmac3, sizeof(VAR_19.nmac3));
  case 4:
   FUNC_17(VAR_12 + 18, VAR_19.nmac2, sizeof(VAR_19.nmac2));
  case 3:
   FUNC_17(VAR_12 + 12, VAR_19.nmac1, sizeof(VAR_19.nmac1));
  case 2:
   FUNC_17(VAR_12 + 6, VAR_19.nmac0, sizeof(VAR_19.nmac0));
  }
 }
 if (VAR_13)
  *VAR_13 = FUNC_3(FUNC_13(VAR_19.norss_rsssize));
 if (VAR_14) {
  *VAR_14 = VAR_6->params.viid_smt_extn_support ?
      FUNC_4(FUNC_14(VAR_19.alloc_to_len16)) :
      FUNC_2(VAR_18);
 }
 if (VAR_15) {
  *VAR_15 = VAR_6->params.viid_smt_extn_support ?
      FUNC_6(FUNC_14(VAR_19.alloc_to_len16)) :
      FUNC_1(VAR_18);
 }

 return VAR_18;
}
