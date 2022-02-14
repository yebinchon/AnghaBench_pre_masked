
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_mcp_mb_params {int dummy; } ;
struct ecore_mcp_cmd_elem {int list; int expected_seq_num; struct ecore_mcp_mb_params* p_mb_params; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; int p_dev; } ;
struct TYPE_2__ {int cmd_list; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct ecore_mcp_cmd_elem* VAR_1 ;
 struct ecore_mcp_cmd_elem* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static struct ecore_mcp_cmd_elem *
FUNC_3(struct ecore_hwfn *VAR_2,
         struct ecore_mcp_mb_params *VAR_3,
         u16 VAR_4)
{
 struct ecore_mcp_cmd_elem *VAR_5 = VAR_1;

 VAR_5 = FUNC_2(VAR_2->p_dev, VAR_0,
     sizeof(*VAR_5));
 if (!VAR_5) {
  FUNC_0(VAR_2, 0,
     "Failed to allocate `struct ecore_mcp_cmd_elem'\n");
  goto out;
 }

 VAR_5->p_mb_params = VAR_3;
 VAR_5->expected_seq_num = VAR_4;
 FUNC_1(&VAR_5->list, &VAR_2->mcp_info->cmd_list);
out:
 return VAR_5;
}
