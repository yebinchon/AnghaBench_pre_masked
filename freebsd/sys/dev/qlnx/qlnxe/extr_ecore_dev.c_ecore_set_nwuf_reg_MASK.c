
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,char*,int,int,int,int,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ecore_dev*) ;
 struct ecore_hwfn* FUNC_3 (struct ecore_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 struct ecore_ptt* FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_8(struct ecore_dev *VAR_35, u32 VAR_36,
     u32 VAR_37, u32 VAR_38)
{
 struct ecore_hwfn *VAR_39 = FUNC_3(VAR_35);
 enum _ecore_status_t VAR_40 = VAR_1;
 struct ecore_ptt *VAR_41;
 u32 VAR_42 = 0;
 u32 VAR_43 = 0;

 VAR_41 = FUNC_6(VAR_39);
 if (!VAR_41)
  return VAR_0;


 switch (VAR_36)
 {
 case 0:
  VAR_42 = FUNC_2(VAR_35) ? VAR_4 :
    VAR_20;
  VAR_43 = FUNC_2(VAR_35) ? VAR_3 :
    VAR_19;
  break;
 case 1:
  VAR_42 = FUNC_2(VAR_35) ? VAR_6 :
    VAR_22;
  VAR_43 = FUNC_2(VAR_35) ? VAR_5 :
    VAR_21;
  break;
 case 2:
  VAR_42 = FUNC_2(VAR_35) ? VAR_8 :
    VAR_24;
  VAR_43 = FUNC_2(VAR_35) ? VAR_7 :
    VAR_23;
  break;
 case 3:
  VAR_42 = FUNC_2(VAR_35) ? VAR_10 :
    VAR_26;
  VAR_43 = FUNC_2(VAR_35) ? VAR_9 :
    VAR_25;
  break;
 case 4:
  VAR_42 = FUNC_2(VAR_35) ? VAR_12 :
    VAR_28;
  VAR_43 = FUNC_2(VAR_35) ? VAR_11 :
    VAR_27;
  break;
 case 5:
  VAR_42 = FUNC_2(VAR_35) ? VAR_14 :
    VAR_30;
  VAR_43 = FUNC_2(VAR_35) ? VAR_13 :
    VAR_29;
  break;
 case 6:
  VAR_42 = FUNC_2(VAR_35) ? VAR_16 :
    VAR_32;
  VAR_43 = FUNC_2(VAR_35) ? VAR_15 :
    VAR_31;
  break;
 case 7:
  VAR_42 = FUNC_2(VAR_35) ? VAR_18 :
    VAR_34;
  VAR_43 = FUNC_2(VAR_35) ? VAR_17 :
    VAR_33;
  break;
 default:
  VAR_40 = VAR_2;
  goto out;
 }


 while (VAR_37 % 4)
  VAR_37++;


 if (FUNC_2(VAR_35)) {
  VAR_40 = FUNC_4(VAR_39, VAR_41, VAR_42, VAR_37);
  if (VAR_40 != VAR_1) {
   FUNC_1(VAR_39, 0,
      "Failed to update the ACPI pattern length\n");
   return VAR_40;
  }

  VAR_40 = FUNC_4(VAR_39, VAR_41, VAR_43, VAR_38);
  if (VAR_40 != VAR_1) {
   FUNC_1(VAR_39, 0,
      "Failed to update the ACPI pattern crc value\n");
   return VAR_40;
  }
 } else {
  FUNC_5(VAR_39, VAR_41, VAR_42, VAR_37);
  FUNC_5(VAR_39, VAR_41, VAR_43, VAR_38);
 }

 FUNC_0(VAR_35,
  "ecore_set_nwuf_reg: idx[%d] reg_crc[0x%x=0x%08x] "
  "reg_len[0x%x=0x%x]\n",
  VAR_36, VAR_43, VAR_38, VAR_42, VAR_37);
out:
  FUNC_7(VAR_39, VAR_41);

 return VAR_40;
}
