
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          u32 VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0;
 enum _ecore_status_t VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_0,
      VAR_6, &VAR_7, &VAR_8);

 if (VAR_9 != VAR_2) {
  FUNC_0(VAR_4, "MCP response failure for mask parities, aborting\n");
 } else if (VAR_7 != VAR_3) {
  FUNC_0(VAR_4, "MCP did not acknowledge mask parity request. Old MFW?\n");
  VAR_9 = VAR_1;
 }

 return VAR_9;
}
