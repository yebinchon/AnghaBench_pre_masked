
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_7,
          struct ecore_ptt *VAR_8)
{
 u32 VAR_9, VAR_10;

 FUNC_4(VAR_7, VAR_8, VAR_5, 0xffffffff);

 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_3);
 VAR_9 &= ~VAR_4;
 FUNC_4(VAR_7, VAR_8, VAR_3, VAR_9);

 FUNC_1(VAR_1);
 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_5);

 if (VAR_10 & VAR_6) {
  FUNC_0(VAR_7, 0,
     "Failed to resume the MCP [CPU_MODE = 0x%08x, CPU_STATE = 0x%08x]\n",
     VAR_9, VAR_10);
  return VAR_0;
 }

 FUNC_2(VAR_7, 0);

 return VAR_2;
}
