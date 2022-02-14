
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_5,
      struct ecore_ptt *VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0;
 enum _ecore_status_t VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_0, 0, &VAR_7,
      &VAR_8);
 if (VAR_9 != VAR_2) {
  FUNC_0(VAR_5, 0,
     "Failed to send a LOAD_DONE command, rc = %d\n", VAR_9);
  return VAR_9;
 }

 if (VAR_7 == VAR_4) {
  FUNC_0(VAR_5, 0,
     "Received a LOAD_REFUSED_REJECT response from the mfw\n");
  return VAR_1;
 }


 if (VAR_8 & VAR_3)
  FUNC_0(VAR_5, 0,
     "warning: device configuration is not supported on this board type. The device may not function as expected.\n");

 return VAR_2;
}
