
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {scalar_t__ mcp_hist; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_2,
         struct ecore_ptt *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_1);




 if (VAR_2->mcp_info->mcp_hist != VAR_4) {
  FUNC_0(VAR_2, VAR_0,
      "Rereading MCP offsets [mcp_hist 0x%08x, generic_por_0 0x%08x]\n",
      VAR_2->mcp_info->mcp_hist, VAR_4);

  FUNC_1(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_3);
 }
}
