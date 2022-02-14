
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int cg_list; int cgroups; } ;
struct TYPE_4__ {int cgroups; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct task_struct *VAR_1)
{
 FUNC_2(VAR_0);
 VAR_1->cgroups = VAR_0->cgroups;
 FUNC_1(VAR_1->cgroups);
 FUNC_3(VAR_0);
 FUNC_0(&VAR_1->cg_list);
}
