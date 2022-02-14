
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {unsigned long expires; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_list*,unsigned long,int,int ) ;
 scalar_t__ FUNC_1 (struct timer_list*) ;

int FUNC_2(struct timer_list *VAR_1, unsigned long VAR_2)
{





 if (FUNC_1(VAR_1) && VAR_1->expires == VAR_2)
  return 1;

 return FUNC_0(VAR_1, VAR_2, 0, VAR_0);
}
