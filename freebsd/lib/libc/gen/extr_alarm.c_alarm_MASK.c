
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_1__ it_value; int it_interval; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct itimerval*,struct itimerval*) ;
 int FUNC_1 (int *) ;

unsigned int
FUNC_2(unsigned int VAR_1)
{
 struct itimerval VAR_2, VAR_3;
 struct itimerval *VAR_4 = &VAR_2;

 FUNC_1(&VAR_4->it_interval);
 VAR_4->it_value.tv_sec = VAR_1;
 VAR_4->it_value.tv_usec = 0;
 if (FUNC_0(VAR_0, VAR_4, &VAR_3) < 0)
  return (-1);
 if (VAR_3.it_value.tv_usec)
  VAR_3.it_value.tv_sec++;
 return (VAR_3.it_value.tv_sec);
}
