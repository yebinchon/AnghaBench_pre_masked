
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_stack {int num; TYPE_1__** mod; } ;
struct module_env {int dummy; } ;
struct TYPE_2__ {int (* deinit ) (struct module_env*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_env*,int)) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (struct module_env*,int) ;

void
FUNC_4(struct module_stack* VAR_0, struct module_env* VAR_1)
{
        int VAR_2;
        for(VAR_2=0; VAR_2<VAR_0->num; VAR_2++) {
                FUNC_0(FUNC_1(VAR_0->mod[VAR_2]->deinit));
                (*VAR_0->mod[VAR_2]->deinit)(VAR_1, VAR_2);
        }
        VAR_0->num = 0;
        FUNC_2(VAR_0->mod);
        VAR_0->mod = ((void*)0);
}
