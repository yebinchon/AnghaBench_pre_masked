
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ dm_text_va; scalar_t__ dm_text_size; } ;
struct TYPE_6__ {TYPE_2__ dt_modlist; int * dt_vector; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_module_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(dtrace_hdl_t *VAR_0, uint64_t *VAR_1)
{
 uint64_t *VAR_2 = VAR_1;
 dt_module_t *VAR_3;

 if (VAR_0->dt_vector != ((void*)0)) {
  return;
 }

 for (VAR_3 = FUNC_0(&VAR_0->dt_modlist); VAR_3 != ((void*)0);
     VAR_3 = FUNC_0(VAR_3)) {
  if (*VAR_2 - VAR_3->dm_text_va < VAR_3->dm_text_size) {
   *VAR_2 = VAR_3->dm_text_va;
   return;
  }
 }
}
