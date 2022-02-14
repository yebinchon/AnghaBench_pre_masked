
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int timer; } ;
struct rpc_wait_queue {unsigned char maxpriority; char const* name; TYPE_1__ timer_list; scalar_t__ qlen; int * tasks; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct rpc_wait_queue*) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rpc_wait_queue *VAR_1, const char *VAR_2, unsigned char VAR_3)
{
 int VAR_4;

 FUNC_4(&VAR_1->lock);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->tasks); VAR_4++)
  FUNC_1(&VAR_1->tasks[VAR_4]);
 VAR_1->maxpriority = VAR_3 - 1;
 FUNC_2(VAR_1);
 VAR_1->qlen = 0;
 FUNC_3(&VAR_1->timer_list.timer, VAR_0, (unsigned long)VAR_1);
 FUNC_1(&VAR_1->timer_list.list);



}
