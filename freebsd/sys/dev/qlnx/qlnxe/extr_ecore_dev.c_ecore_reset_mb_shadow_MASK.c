
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int mfw_mb_length; int mfw_mb_cur; int mfw_mb_shadow; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_0,
   struct ecore_ptt *VAR_1)
{

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0->mcp_info->mfw_mb_shadow,
      VAR_0->mcp_info->mfw_mb_cur,
      VAR_0->mcp_info->mfw_mb_length);
}
