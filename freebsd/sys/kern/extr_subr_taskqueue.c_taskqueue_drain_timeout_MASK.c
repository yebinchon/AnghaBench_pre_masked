
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_task {int f; int t; int c; } ;
struct taskqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct taskqueue*) ;
 int FUNC_2 (struct taskqueue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct taskqueue*,int *) ;

void
FUNC_5(struct taskqueue *VAR_1,
    struct timeout_task *VAR_2)
{




 FUNC_1(VAR_1);
 FUNC_0((VAR_2->f & VAR_0) == 0,
     ("Drain already in progress"));
 VAR_2->f |= VAR_0;
 FUNC_2(VAR_1);

 FUNC_3(&VAR_2->c);
 FUNC_4(VAR_1, &VAR_2->t);




 FUNC_1(VAR_1);
 VAR_2->f &= ~VAR_0;
 FUNC_2(VAR_1);
}
