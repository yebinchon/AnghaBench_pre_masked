
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
typedef char cpuset_t ;
struct TYPE_3__ {int cpusetsize; int * cpuset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 () ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,int,size_t) ;

int
FUNC_4(const pthread_attr_t *VAR_2, size_t VAR_3,
 cpuset_t *VAR_4)
{
 pthread_attr_t VAR_5;
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0) || (VAR_5 = (*VAR_2)) == ((void*)0))
  VAR_6 = VAR_0;
 else {

  size_t VAR_7 = FUNC_1();
  if (VAR_3 < VAR_7)
   return (VAR_1);
  if (VAR_5->cpuset != ((void*)0))
   FUNC_2(VAR_4, VAR_5->cpuset, FUNC_0(VAR_3,
      VAR_5->cpusetsize));
  else
   FUNC_3(VAR_4, -1, VAR_7);
  if (VAR_3 > VAR_7)
   FUNC_3(((char *)VAR_4) + VAR_7, 0,
    VAR_3 - VAR_7);
 }
 return (VAR_6);
}
