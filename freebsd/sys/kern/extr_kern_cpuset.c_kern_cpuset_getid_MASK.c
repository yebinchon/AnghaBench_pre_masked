
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpid ;
struct thread {int td_cpuset; } ;
struct proc {int dummy; } ;
struct cpuset {int cs_id; } ;
typedef int id_t ;
typedef int cpuwhich_t ;
typedef int cpusetid_t ;
typedef int cpulevel_t ;
 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (int *,int *,int) ;
 struct cpuset* FUNC_2 (int ) ;
 struct cpuset* FUNC_3 (struct cpuset*) ;
 int FUNC_4 (struct cpuset*) ;
 int FUNC_5 (int,int ,struct proc**,struct thread**,struct cpuset**) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*) ;

int
FUNC_8(struct thread *VAR_1, cpulevel_t VAR_2, cpuwhich_t VAR_3,
    id_t VAR_4, cpusetid_t *VAR_5)
{
 struct cpuset *VAR_6;
 struct cpuset *VAR_7;
 struct thread *VAR_8;
 struct proc *VAR_9;
 cpusetid_t VAR_10;
 int VAR_11;

 if (VAR_2 == 134 && VAR_3 != 133)
  return (VAR_0);
 VAR_11 = FUNC_5(VAR_3, VAR_4, &VAR_9, &VAR_8, &VAR_7);
 if (VAR_11)
  return (VAR_11);
 switch (VAR_3) {
 case 128:
 case 129:
  FUNC_6(VAR_8);
  VAR_7 = FUNC_2(VAR_8->td_cpuset);
  FUNC_7(VAR_8);
  FUNC_0(VAR_9);
  break;
 case 133:
 case 130:
  break;
 case 131:
 case 132:
  return (VAR_0);
 }
 switch (VAR_2) {
 case 135:
  VAR_6 = FUNC_3(VAR_7);
  FUNC_4(VAR_7);
  VAR_7 = VAR_6;
  break;
 case 136:
  break;
 case 134:
  break;
 }
 VAR_10 = VAR_7->cs_id;
 FUNC_4(VAR_7);
 if (VAR_11 == 0)
  VAR_11 = FUNC_1(&VAR_10, VAR_5, sizeof(VAR_10));

 return (VAR_11);
}
