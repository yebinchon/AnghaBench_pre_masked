
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int params_initialized; } ;
struct dbg_tools_data {TYPE_1__ grc; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;


 int FUNC_0 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_0)
{
 struct dbg_tools_data *VAR_1 = &VAR_0->dbg_info;

 if (!VAR_1->grc.params_initialized) {
  FUNC_0(VAR_0);
  VAR_1->grc.params_initialized = 1;
 }
}
