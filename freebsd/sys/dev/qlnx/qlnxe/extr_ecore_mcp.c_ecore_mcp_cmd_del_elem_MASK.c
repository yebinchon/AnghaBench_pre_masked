
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_mcp_cmd_elem {int list; } ;
struct ecore_hwfn {int p_dev; TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int cmd_list; } ;


 int FUNC_0 (int ,struct ecore_mcp_cmd_elem*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_0,
       struct ecore_mcp_cmd_elem *VAR_1)
{
 FUNC_1(&VAR_1->list, &VAR_0->mcp_info->cmd_list);
 FUNC_0(VAR_0->p_dev, VAR_1);
}
