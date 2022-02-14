
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue_busy {scalar_t__ tb_seq; struct task* tb_running; } ;
struct taskqueue {scalar_t__ tq_seq; struct task* tq_hint; int tq_queue; int tq_active; } ;
struct task {int ta_pending; int ta_context; int (* ta_func ) (int ,int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct taskqueue_busy*,int ) ;
 int FUNC_2 (struct taskqueue_busy*,int ) ;
 struct task* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct taskqueue*) ;
 int FUNC_6 (struct taskqueue*) ;
 int FUNC_7 (struct taskqueue*) ;
 int FUNC_8 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (struct task*) ;

__attribute__((used)) static void
FUNC_10(struct taskqueue *VAR_2)
{
 struct taskqueue_busy VAR_3;
 struct task *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0), ("tq is NULL"));
 FUNC_5(VAR_2);
 VAR_3.tb_running = ((void*)0);
 FUNC_1(&VAR_2->tq_active, &VAR_3, VAR_1);

 while ((VAR_4 = FUNC_3(&VAR_2->tq_queue)) != ((void*)0)) {
  FUNC_4(&VAR_2->tq_queue, VAR_0);
  if (VAR_2->tq_hint == VAR_4)
   VAR_2->tq_hint = ((void*)0);
  VAR_5 = VAR_4->ta_pending;
  VAR_4->ta_pending = 0;
  VAR_3.tb_running = VAR_4;
  VAR_3.tb_seq = ++VAR_2->tq_seq;
  FUNC_7(VAR_2);

  FUNC_0(VAR_4->ta_func != ((void*)0), ("task->ta_func is NULL"));
  VAR_4->ta_func(VAR_4->ta_context, VAR_5);

  FUNC_6(VAR_2);
  FUNC_9(VAR_4);
 }
 FUNC_2(&VAR_3, VAR_1);
}
