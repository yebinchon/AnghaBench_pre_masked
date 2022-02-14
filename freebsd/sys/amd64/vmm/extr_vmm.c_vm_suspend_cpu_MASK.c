
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int debug_cpus; int active_cpus; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct vm*,int,int) ;

int
FUNC_3(struct vm *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 < -1 || VAR_2 >= VAR_1->maxcpus)
  return (VAR_0);

 if (VAR_2 == -1) {
  VAR_1->debug_cpus = VAR_1->active_cpus;
  for (VAR_3 = 0; VAR_3 < VAR_1->maxcpus; VAR_3++) {
   if (FUNC_0(VAR_3, &VAR_1->active_cpus))
    FUNC_2(VAR_1, VAR_3, 0);
  }
 } else {
  if (!FUNC_0(VAR_2, &VAR_1->active_cpus))
   return (VAR_0);

  FUNC_1(VAR_2, &VAR_1->debug_cpus);
  FUNC_2(VAR_1, VAR_2, 0);
 }
 return (0);
}
