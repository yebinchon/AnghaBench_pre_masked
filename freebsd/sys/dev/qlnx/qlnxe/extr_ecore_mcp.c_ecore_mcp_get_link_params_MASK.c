
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_mcp_link_params {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {struct ecore_mcp_link_params link_input; } ;


 struct ecore_mcp_link_params* VAR_0 ;

struct ecore_mcp_link_params
*FUNC_0(struct ecore_hwfn *VAR_1)
{
 if (!VAR_1 || !VAR_1->mcp_info)
  return VAR_0;
 return &VAR_1->mcp_info->link_input;
}
