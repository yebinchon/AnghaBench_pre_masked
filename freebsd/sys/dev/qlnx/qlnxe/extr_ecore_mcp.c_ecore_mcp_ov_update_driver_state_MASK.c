
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_ov_driver_state { ____Placeholder_ecore_ov_driver_state } ecore_ov_driver_state ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_6,
     struct ecore_ptt *VAR_7,
     enum ecore_ov_driver_state VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11;
 enum _ecore_status_t VAR_12;

 switch (VAR_8) {
 case 128:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_2;
  break;
 case 130:
  VAR_11 = VAR_1;
  break;
 default:
  FUNC_1(VAR_6, 1,
     "Invalid driver state %d\n", VAR_8);
  return VAR_4;
 }

 VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_0,
      VAR_11, &VAR_9, &VAR_10);
 if (VAR_12 != VAR_5)
  FUNC_0(VAR_6, "Failed to send driver state\n");

 return VAR_12;
}
