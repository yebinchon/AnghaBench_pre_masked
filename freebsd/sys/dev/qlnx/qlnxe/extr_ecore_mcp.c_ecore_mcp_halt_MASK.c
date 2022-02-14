
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_8,
        struct ecore_ptt *VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13 = 0;
 enum _ecore_status_t VAR_14;

 VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_0, 0, &VAR_10,
      &VAR_11);
 if (VAR_14 != VAR_4) {
  FUNC_0(VAR_8, "MCP response failure, aborting\n");
  return VAR_14;
 }

 do {
  FUNC_2(VAR_3);
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_6);
  if (VAR_12 & VAR_7)
   break;
 } while (++VAR_13 < VAR_2);

 if (VAR_13 == VAR_2) {
  FUNC_1(VAR_8, 0,
     "Failed to halt the MCP [CPU_MODE = 0x%08x, CPU_STATE = 0x%08x]\n",
     FUNC_5(VAR_8, VAR_9, VAR_5), VAR_12);
  return VAR_1;
 }

 FUNC_4(VAR_8, 1);

 return VAR_4;
}
