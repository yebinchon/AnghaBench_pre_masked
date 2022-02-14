
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int mtx; int callout; } ;


 int FUNC_0 (int *,scalar_t__,int ,struct timer_list*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void
FUNC_3(struct timer_list *VAR_2, unsigned long VAR_3)
{
 FUNC_1(&VAR_2->mtx);
 FUNC_0(&VAR_2->callout, VAR_3 - VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_2->mtx);
}
