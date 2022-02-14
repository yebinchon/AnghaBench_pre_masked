
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
typedef int cpuset_t ;
struct TYPE_3__ {size_t cpusetsize; int * cpuset; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 () ;
 int * FUNC_1 (int,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,size_t) ;

int
FUNC_4(pthread_attr_t *VAR_3, size_t VAR_4,
 const cpuset_t *VAR_5)
{
 pthread_attr_t VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0) || (VAR_6 = (*VAR_3)) == ((void*)0))
  VAR_7 = VAR_0;
 else {
  if (VAR_4 == 0 || VAR_5 == ((void*)0)) {
   if (VAR_6->cpuset != ((void*)0)) {
    FUNC_2(VAR_6->cpuset);
    VAR_6->cpuset = ((void*)0);
    VAR_6->cpusetsize = 0;
   }
   return (0);
  }
  size_t VAR_8 = FUNC_0();

  if (VAR_4 < VAR_8)
   return (VAR_1);
  if (VAR_4 > VAR_8) {

   size_t VAR_9;
   for (VAR_9 = VAR_8; VAR_9 < VAR_4; ++VAR_9) {
    if (((const char *)VAR_5)[VAR_9])
     return (VAR_0);
   }
  }
  if (VAR_6->cpuset == ((void*)0)) {
   VAR_6->cpuset = FUNC_1(1, VAR_8);
   if (VAR_6->cpuset == ((void*)0))
    return (VAR_2);
   VAR_6->cpusetsize = VAR_8;
  }
  FUNC_3(VAR_6->cpuset, VAR_5, VAR_8);
  VAR_7 = 0;
 }
 return (VAR_7);
}
