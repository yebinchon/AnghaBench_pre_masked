
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timeout_task {int f; int t; int c; } ;
struct taskqueue {int tq_callouts; } ;


 int VAR_0 ;
 int FUNC_0 (struct taskqueue*) ;
 int FUNC_1 (struct taskqueue*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct taskqueue*,int *,int*) ;

int
FUNC_4(struct taskqueue *VAR_1,
    struct timeout_task *VAR_2, u_int *VAR_3)
{
 u_int VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_1);
 VAR_4 = !!(FUNC_2(&VAR_2->c) > 0);
 VAR_6 = FUNC_3(VAR_1, &VAR_2->t, &VAR_5);
 if ((VAR_2->f & VAR_0) != 0) {
  VAR_2->f &= ~VAR_0;
  VAR_1->tq_callouts--;
 }
 FUNC_1(VAR_1);

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4 + VAR_5;
 return (VAR_6);
}
