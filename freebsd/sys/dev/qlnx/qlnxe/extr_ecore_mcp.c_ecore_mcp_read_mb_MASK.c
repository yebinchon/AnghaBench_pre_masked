
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; int p_dev; } ;
struct TYPE_2__ {scalar_t__ mfw_mb_cur; scalar_t__ mfw_mb_addr; int public_base; int mfw_mb_length; } ;
typedef int OSAL_BE32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

void FUNC_4(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_0->mcp_info->mfw_mb_length);
 OSAL_BE32 VAR_3;
 u32 VAR_4;


 if (FUNC_0(VAR_0->p_dev))
  return;


 if (!VAR_0->mcp_info->public_base)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_3(VAR_0, VAR_1,
          VAR_0->mcp_info->mfw_mb_addr +
          (VAR_4 << 2) + sizeof(u32));

  ((u32 *)VAR_0->mcp_info->mfw_mb_cur)[VAR_4] =
      FUNC_2(VAR_3);
 }
}
