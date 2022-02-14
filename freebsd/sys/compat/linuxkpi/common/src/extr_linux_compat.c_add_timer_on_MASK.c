
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int expires; int callout; } ;


 int FUNC_0 (int *,int ,int *,struct timer_list*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct timer_list *VAR_1, int VAR_2)
{

 FUNC_0(&VAR_1->callout,
     FUNC_1(VAR_1->expires),
     &VAR_0, VAR_1, VAR_2);
}
