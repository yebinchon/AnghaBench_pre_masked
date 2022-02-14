
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_interval; TYPE_2__ it_value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct itimerval*,struct itimerval*) ;

__attribute__((used)) static int
FUNC_1(void)
{
 struct itimerval VAR_1;

 VAR_1.it_interval.tv_sec = 0;
 VAR_1.it_interval.tv_usec = 1;
 VAR_1.it_value.tv_sec = 0;
 VAR_1.it_value.tv_usec = 0;
 FUNC_0(VAR_0, &VAR_1, 0);
 FUNC_0(VAR_0, 0, &VAR_1);
 if (VAR_1.it_interval.tv_usec < 2)
  return(0);
 return (1000000 / VAR_1.it_interval.tv_usec);
}
