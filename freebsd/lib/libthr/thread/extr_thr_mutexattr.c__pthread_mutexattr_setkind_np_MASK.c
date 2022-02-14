
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int m_type; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(pthread_mutexattr_t *VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0)) {
  VAR_1 = VAR_0;
  VAR_4 = -1;
 } else {
  (*VAR_2)->m_type = VAR_3;
  VAR_4 = 0;
 }
 return(VAR_4);
}
