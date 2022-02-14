
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int ** modinfo; } ;
struct dns64_env {int ignore_aaaa; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;

void
FUNC_2(struct module_env* VAR_1, int VAR_2)
{
    struct dns64_env* VAR_3;
    if (!VAR_1)
        return;
    VAR_3 = (struct dns64_env*)VAR_1->modinfo[VAR_2];
    if(VAR_3) {
     FUNC_1(&VAR_3->ignore_aaaa, VAR_0,
      ((void*)0));
    }
    FUNC_0(VAR_1->modinfo[VAR_2]);
    VAR_1->modinfo[VAR_2] = ((void*)0);
}
