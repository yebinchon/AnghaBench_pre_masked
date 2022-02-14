
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_stack {int num; TYPE_1__** mod; } ;
struct module_env {scalar_t__ need_to_validate; } ;
struct TYPE_2__ {int name; int (* init ) (struct module_env*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_env*,int)) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct module_stack*,char const*) ;
 int FUNC_4 (struct module_stack*,struct module_env*) ;
 int FUNC_5 (struct module_env*,int) ;
 int FUNC_6 (int ,char*,int,int ) ;

int
FUNC_7(struct module_stack* VAR_1, const char* VAR_2,
 struct module_env* VAR_3)
{
        int VAR_4;
        if(VAR_1->num != 0)
                FUNC_4(VAR_1, VAR_3);

        if(!FUNC_3(VAR_1, VAR_2)) {
  return 0;
        }
        VAR_3->need_to_validate = 0;
        for(VAR_4=0; VAR_4<VAR_1->num; VAR_4++) {
                FUNC_6(VAR_0, "init module %d: %s",
                        VAR_4, VAR_1->mod[VAR_4]->name);
                FUNC_0(FUNC_1(VAR_1->mod[VAR_4]->init));
                if(!(*VAR_1->mod[VAR_4]->init)(VAR_3, VAR_4)) {
                        FUNC_2("module init for module %s failed",
                                VAR_1->mod[VAR_4]->name);
   return 0;
                }
        }
 return 1;
}
