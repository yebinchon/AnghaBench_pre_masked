
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;

bool FUNC_0(struct ecore_hwfn *VAR_1)
{
 return !!(VAR_1->mcp_info->capabilities &
    VAR_0);
}
