
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_fn_t ;
struct timeout_task {scalar_t__ f; struct taskqueue* q; int c; int t; } ;
struct taskqueue {int tq_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,void*) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(struct taskqueue *VAR_1, struct timeout_task *VAR_2,
    int VAR_3, task_fn_t VAR_4, void *VAR_5)
{

 FUNC_0(&VAR_2->t, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2->c, &VAR_1->tq_mutex,
     VAR_0);
 VAR_2->q = VAR_1;
 VAR_2->f = 0;
}
