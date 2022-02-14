
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int tv_sec; int tv_usec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct itimerval*,struct itimerval*) ;

unsigned int FUNC_1(unsigned int VAR_2)
{
 struct itimerval VAR_3, VAR_4;


 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_3.it_value.tv_sec = VAR_2;
 VAR_3.it_value.tv_usec = 0;
 VAR_3.it_interval.tv_sec = VAR_3.it_interval.tv_usec = 0;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);





 if ((!VAR_4.it_value.tv_sec && VAR_4.it_value.tv_usec) ||
       VAR_4.it_value.tv_usec >= 500000)
  VAR_4.it_value.tv_sec++;

 return VAR_4.it_value.tv_sec;
}
