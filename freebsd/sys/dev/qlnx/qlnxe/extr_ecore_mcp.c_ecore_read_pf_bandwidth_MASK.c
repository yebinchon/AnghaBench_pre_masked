
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct public_func {int config; } ;
struct ecore_mcp_function_info {int bandwidth_min; int bandwidth_max; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {struct ecore_mcp_function_info func_info; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_4,
        struct public_func *VAR_5)
{
 struct ecore_mcp_function_info *VAR_6;

 VAR_6 = &VAR_4->mcp_info->func_info;







 VAR_6->bandwidth_min = (VAR_5->config &
     VAR_2) >>
    VAR_3;
 if (VAR_6->bandwidth_min < 1 || VAR_6->bandwidth_min > 100) {
  FUNC_0(VAR_4,
   "bandwidth minimum out of bounds [%02x]. Set to 1\n",
   VAR_6->bandwidth_min);
  VAR_6->bandwidth_min = 1;
 }

 VAR_6->bandwidth_max = (VAR_5->config &
     VAR_0) >>
    VAR_1;
 if (VAR_6->bandwidth_max < 1 || VAR_6->bandwidth_max > 100) {
  FUNC_0(VAR_4,
   "bandwidth maximum out of bounds [%02x]. Set to 100\n",
   VAR_6->bandwidth_max);
  VAR_6->bandwidth_max = 100;
 }
}
