
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cpuset {int dummy; } ;
typedef int id_t ;
typedef scalar_t__ cpuwhich_t ;
typedef int cpusetid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuset* FUNC_0 (int ,struct thread*) ;
 int FUNC_1 (struct cpuset*) ;
 int FUNC_2 (int ,struct cpuset*,int *,int *) ;

int
FUNC_3(struct thread *VAR_3, cpuwhich_t VAR_4,
    id_t VAR_5, cpusetid_t VAR_6)
{
 struct cpuset *VAR_7;
 int VAR_8;




 if (VAR_4 != VAR_0)
  return (VAR_1);
 VAR_7 = FUNC_0(VAR_6, VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_2);
 VAR_8 = FUNC_2(VAR_5, VAR_7, ((void*)0), ((void*)0));
 FUNC_1(VAR_7);
 return (VAR_8);
}
