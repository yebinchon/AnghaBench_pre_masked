
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int debug_cpus; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int
FUNC_3(struct vm *VAR_1, int VAR_2)
{

 if (VAR_2 < -1 || VAR_2 >= VAR_1->maxcpus)
  return (VAR_0);

 if (VAR_2 == -1) {
  FUNC_2(&VAR_1->debug_cpus);
 } else {
  if (!FUNC_1(VAR_2, &VAR_1->debug_cpus))
   return (VAR_0);

  FUNC_0(VAR_2, &VAR_1->debug_cpus);
 }
 return (0);
}
