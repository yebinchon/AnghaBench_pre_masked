
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_task {int f; int t; struct taskqueue* q; } ;
struct taskqueue {int tq_callouts; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct taskqueue*,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct taskqueue *VAR_2;
 struct timeout_task *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = VAR_3->q;
 FUNC_0((VAR_3->f & VAR_0) != 0, ("Stray timeout"));
 VAR_3->f &= ~VAR_0;
 VAR_2->tq_callouts--;
 FUNC_1(VAR_3->q, &VAR_3->t);

}
