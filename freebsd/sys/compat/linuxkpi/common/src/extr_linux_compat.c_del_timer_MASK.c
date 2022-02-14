
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int callout; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct timer_list *VAR_0)
{

 if (FUNC_0(&(VAR_0)->callout) == -1)
  return (0);
 return (1);
}
