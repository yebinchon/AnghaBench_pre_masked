
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int useconds_t ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct itimerval*,struct itimerval*) ;

useconds_t
FUNC_1(useconds_t VAR_2, useconds_t VAR_3)
{
 struct itimerval VAR_4, VAR_5;

 VAR_4.it_interval.tv_usec = VAR_3 % VAR_1;
 VAR_4.it_interval.tv_sec = VAR_3 / VAR_1;

 VAR_4.it_value.tv_usec = VAR_2 % VAR_1;
 VAR_4.it_value.tv_sec = VAR_2 / VAR_1;

 if (FUNC_0(VAR_0, &VAR_4, &VAR_5) == 0)
  return (VAR_5.it_value.tv_sec * VAR_1 + VAR_5.it_value.tv_usec);

  return (-1);
}
