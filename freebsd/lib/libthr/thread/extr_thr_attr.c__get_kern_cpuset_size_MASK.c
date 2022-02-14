
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_cpuset_size ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static size_t
FUNC_2(void)
{
 static int VAR_0 = 0;

 if (VAR_0 == 0) {
  size_t VAR_1;

  VAR_1 = sizeof(VAR_0);
  if (FUNC_1("kern.sched.cpusetsize", &VAR_0,
      &VAR_1, ((void*)0), 0))
   FUNC_0("failed to get sysctl kern.sched.cpusetsize");
 }

 return (VAR_0);
}
