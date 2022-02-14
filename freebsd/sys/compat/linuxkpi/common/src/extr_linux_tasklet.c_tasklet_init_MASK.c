
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tasklet_func_t ;
struct TYPE_2__ {int * tqe_next; int * tqe_prev; } ;
struct tasklet_struct {unsigned long data; int count; int tasklet_state; int * func; TYPE_1__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct tasklet_struct *VAR_1,
    tasklet_func_t *VAR_2, unsigned long VAR_3)
{
 VAR_1->entry.tqe_prev = ((void*)0);
 VAR_1->entry.tqe_next = ((void*)0);
 VAR_1->func = VAR_2;
 VAR_1->data = VAR_3;
 FUNC_1(&VAR_1->tasklet_state, VAR_0);
 FUNC_0(&VAR_1->count, 0);
}
