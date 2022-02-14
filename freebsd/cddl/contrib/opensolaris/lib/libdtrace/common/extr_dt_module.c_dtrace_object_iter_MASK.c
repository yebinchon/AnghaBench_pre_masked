
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_objinfo_t ;
typedef int (* dtrace_obj_f ) (TYPE_1__*,int ,void*) ;
struct TYPE_6__ {int const dt_modlist; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_module_t ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;

int
FUNC_3(dtrace_hdl_t *VAR_0, dtrace_obj_f *VAR_1, void *VAR_2)
{
 const dt_module_t *VAR_3 = FUNC_0(&VAR_0->dt_modlist);
 dtrace_objinfo_t VAR_4;
 int VAR_5;

 for (; VAR_3 != ((void*)0); VAR_3 = FUNC_0(VAR_3)) {
  if ((VAR_5 = (*VAR_1)(VAR_0, FUNC_1(VAR_3, &VAR_4), VAR_2)) != 0)
   return (VAR_5);
 }

 return (0);
}
