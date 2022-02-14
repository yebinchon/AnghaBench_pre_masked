
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue_busy {scalar_t__ tb_seq; struct gtask* tb_running; } ;
struct gtaskqueue {scalar_t__ tq_seq; int tq_queue; int tq_active; } ;
struct gtask {int ta_context; int (* ta_func ) (int ) ;int ta_flags; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct gtaskqueue_busy*,int ) ;
 int FUNC_2 (struct gtaskqueue_busy*,int ) ;
 struct gtask* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct gtaskqueue*) ;
 int FUNC_6 (struct gtaskqueue*) ;
 int FUNC_7 (struct gtaskqueue*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct gtask*) ;

__attribute__((used)) static void
FUNC_10(struct gtaskqueue *VAR_3)
{
 struct gtaskqueue_busy VAR_4;
 struct gtask *VAR_5;

 FUNC_0(VAR_3 != ((void*)0), ("tq is NULL"));
 FUNC_5(VAR_3);
 VAR_4.tb_running = ((void*)0);
 FUNC_1(&VAR_3->tq_active, &VAR_4, VAR_2);

 while ((VAR_5 = FUNC_3(&VAR_3->tq_queue)) != ((void*)0)) {
  FUNC_4(&VAR_3->tq_queue, VAR_1);
  VAR_5->ta_flags &= ~VAR_0;
  VAR_4.tb_running = VAR_5;
  VAR_4.tb_seq = ++VAR_3->tq_seq;
  FUNC_7(VAR_3);

  FUNC_0(VAR_5->ta_func != ((void*)0), ("task->ta_func is NULL"));
  VAR_5->ta_func(VAR_5->ta_context);

  FUNC_6(VAR_3);
  FUNC_9(VAR_5);
 }
 FUNC_2(&VAR_4, VAR_2);
}
