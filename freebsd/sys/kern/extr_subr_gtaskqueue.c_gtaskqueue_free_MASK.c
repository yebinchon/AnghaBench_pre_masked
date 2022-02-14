
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {scalar_t__ tq_callouts; struct gtaskqueue* tq_name; struct gtaskqueue* tq_threads; int tq_mutex; int tq_active; int tq_flags; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gtaskqueue*) ;
 int FUNC_3 (struct gtaskqueue*,int ) ;
 int FUNC_4 (struct gtaskqueue*,struct gtaskqueue*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct gtaskqueue *VAR_2)
{

 FUNC_2(VAR_2);
 VAR_2->tq_flags &= ~VAR_1;
 FUNC_4(VAR_2->tq_threads, VAR_2);
 FUNC_0(FUNC_1(&VAR_2->tq_active), ("Tasks still running?"));
 FUNC_0(VAR_2->tq_callouts == 0, ("Armed timeout tasks"));
 FUNC_5(&VAR_2->tq_mutex);
 FUNC_3(VAR_2->tq_threads, VAR_0);
 FUNC_3(VAR_2->tq_name, VAR_0);
 FUNC_3(VAR_2, VAR_0);
}
