
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dt_lib_dep_sorted; int dt_lib_dep; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_9__ {struct TYPE_9__* dtld_library; struct TYPE_9__* dtld_libpath; int dtld_dependents; int dtld_dependencies; } ;
typedef TYPE_2__ dt_lib_depend_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(dtrace_hdl_t *VAR_0)
{
 dt_lib_depend_t *VAR_1, *VAR_2;

 while ((VAR_1 = FUNC_2(&VAR_0->dt_lib_dep)) != ((void*)0)) {
  while ((VAR_2 = FUNC_2(&VAR_1->dtld_dependencies)) != ((void*)0)) {
   FUNC_1(&VAR_1->dtld_dependencies, VAR_2);
   FUNC_0(VAR_0, VAR_2->dtld_library);
   FUNC_0(VAR_0, VAR_2->dtld_libpath);
   FUNC_0(VAR_0, VAR_2);
  }
  while ((VAR_2 = FUNC_2(&VAR_1->dtld_dependents)) != ((void*)0)) {
   FUNC_1(&VAR_1->dtld_dependents, VAR_2);
   FUNC_0(VAR_0, VAR_2->dtld_library);
   FUNC_0(VAR_0, VAR_2->dtld_libpath);
   FUNC_0(VAR_0, VAR_2);
  }
  FUNC_1(&VAR_0->dt_lib_dep, VAR_1);
  FUNC_0(VAR_0, VAR_1->dtld_library);
  FUNC_0(VAR_0, VAR_1->dtld_libpath);
  FUNC_0(VAR_0, VAR_1);
 }

 while ((VAR_1 = FUNC_2(&VAR_0->dt_lib_dep_sorted)) != ((void*)0)) {
  FUNC_1(&VAR_0->dt_lib_dep_sorted, VAR_1);
  FUNC_0(VAR_0, VAR_1->dtld_library);
  FUNC_0(VAR_0, VAR_1);
 }
}
