
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_lldp_agent { ____Placeholder_ecore_lldp_agent } ecore_lldp_agent ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_8,
          struct ecore_ptt *VAR_9,
          enum ecore_lldp_agent VAR_10,
          u8 VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 enum _ecore_status_t VAR_16 = VAR_4;

 switch (VAR_10) {
 case 130:
  VAR_15 = VAR_5;
  break;
 case 128:
  VAR_15 = VAR_7;
  break;
 case 129:
  VAR_15 = VAR_6;
  break;
 default:
  FUNC_0(VAR_8, "Invalid agent type %d\n", VAR_10);
  return VAR_3;
 }

 FUNC_2(VAR_12, VAR_0, VAR_15);
 FUNC_2(VAR_12, VAR_1, VAR_11);

 VAR_16 = FUNC_3(VAR_8, VAR_9, VAR_2,
      VAR_12, &VAR_13, &VAR_14);
 if (VAR_16 != VAR_4)
  FUNC_1(VAR_8, 0, "Failed to register TLV\n");

 return VAR_16;
}
