
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int core_text_size; int module_core; int init_text_size; int module_init; } ;


 struct module* FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ,int ) ;

struct module *FUNC_2(unsigned long VAR_0)
{
 struct module *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {

  if (!FUNC_1(VAR_0, VAR_1->module_init, VAR_1->init_text_size)
      && !FUNC_1(VAR_0, VAR_1->module_core, VAR_1->core_text_size))
   VAR_1 = ((void*)0);
 }
 return VAR_1;
}
