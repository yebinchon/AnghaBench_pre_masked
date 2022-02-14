
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
FUNC_0(const pthread_mutexattr_t * __restrict VAR_2,
    int * __restrict VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || (*VAR_2)->m_type >=
     VAR_1) {
  VAR_4 = VAR_0;
 } else {
  *VAR_3 = (*VAR_2)->m_type;
  VAR_4 = 0;
 }
 return (VAR_4);
}
