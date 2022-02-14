
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int active_cpus; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vm*,int,char*) ;

int
FUNC_3(struct vm *VAR_2, int VAR_3)
{

 if (VAR_3 < 0 || VAR_3 >= VAR_2->maxcpus)
  return (VAR_1);

 if (FUNC_0(VAR_3, &VAR_2->active_cpus))
  return (VAR_0);

 FUNC_2(VAR_2, VAR_3, "activated");
 FUNC_1(VAR_3, &VAR_2->active_cpus);
 return (0);
}
