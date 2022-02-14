
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int m_robust; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(pthread_mutexattr_t *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0)) {
  VAR_5 = VAR_0;
 } else if (VAR_4 != VAR_2 &&
     VAR_4 != VAR_1) {
  VAR_5 = VAR_0;
 } else {
  VAR_5 = 0;
  (*VAR_3)->m_robust = VAR_4;
 }
 return (VAR_5);
}
