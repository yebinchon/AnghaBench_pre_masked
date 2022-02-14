
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_condattr_t ;
typedef scalar_t__ clockid_t ;
struct TYPE_3__ {scalar_t__ c_clockid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int
FUNC_0(pthread_condattr_t *VAR_5, clockid_t VAR_6)
{
 if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
  return (VAR_4);
 if (VAR_6 != VAR_2 &&
     VAR_6 != VAR_3 &&
     VAR_6 != VAR_1 &&
     VAR_6 != VAR_0) {
  return (VAR_4);
 }
 (*VAR_5)->c_clockid = VAR_6;
 return (0);
}
