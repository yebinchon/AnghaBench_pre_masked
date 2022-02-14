
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_itimerspec {int it_value; int it_interval; } ;
struct itimerspec {int it_interval; } ;


 int FUNC_0 (int *,int *) ;

int
FUNC_1(struct l_itimerspec *VAR_0, struct itimerspec *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->it_interval, &VAR_1->it_interval);
 if (VAR_2 == 0)
  VAR_2 = FUNC_0(&VAR_0->it_value, &VAR_1->it_interval);
 return (VAR_2);
}
