
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_mcp_link_state {int link_up; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; int p_dev; } ;
struct TYPE_2__ {struct ecore_mcp_link_state link_output; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 struct ecore_mcp_link_state* VAR_0 ;

struct ecore_mcp_link_state
*FUNC_2(struct ecore_hwfn *VAR_1)
{
 if (!VAR_1 || !VAR_1->mcp_info)
  return VAR_0;


 if (FUNC_0(VAR_1->p_dev)) {
  FUNC_1(VAR_1, "Non-ASIC - always notify that link is up\n");
  VAR_1->mcp_info->link_output.link_up = 1;
 }


 return &VAR_1->mcp_info->link_output;
}
