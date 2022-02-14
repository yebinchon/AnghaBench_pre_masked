
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {scalar_t__ tq_callouts; struct taskqueue* tq_name; struct taskqueue* tq_threads; int tq_mutex; int tq_active; int tq_flags; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct taskqueue*) ;
 int FUNC_3 (struct taskqueue*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct taskqueue*,struct taskqueue*) ;

void
FUNC_6(struct taskqueue *VAR_2)
{

 FUNC_2(VAR_2);
 VAR_2->tq_flags &= ~VAR_1;
 FUNC_5(VAR_2->tq_threads, VAR_2);
 FUNC_0(FUNC_1(&VAR_2->tq_active), ("Tasks still running?"));
 FUNC_0(VAR_2->tq_callouts == 0, ("Armed timeout tasks"));
 FUNC_4(&VAR_2->tq_mutex);
 FUNC_3(VAR_2->tq_threads, VAR_0);
 FUNC_3(VAR_2->tq_name, VAR_0);
 FUNC_3(VAR_2, VAR_0);
}
