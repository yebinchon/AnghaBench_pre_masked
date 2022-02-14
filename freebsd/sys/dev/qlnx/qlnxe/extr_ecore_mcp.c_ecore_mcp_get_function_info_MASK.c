
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_mcp_function_info {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {struct ecore_mcp_function_info const func_info; } ;


 struct ecore_mcp_function_info const* VAR_0 ;

const struct ecore_mcp_function_info
*FUNC_0(struct ecore_hwfn *VAR_1)
{
 if (!VAR_1 || !VAR_1->mcp_info)
  return VAR_0;
 return &VAR_1->mcp_info->func_info;
}
