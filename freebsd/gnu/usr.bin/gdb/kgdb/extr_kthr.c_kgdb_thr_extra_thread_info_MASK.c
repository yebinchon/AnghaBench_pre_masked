
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_name ;
struct thread {int * td_name; } ;
struct proc {int * p_comm; } ;
struct kthr {int pid; scalar_t__ kaddr; scalar_t__ paddr; } ;
typedef int comm ;
typedef int buf ;


 int VAR_0 ;
 struct kthr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,uintptr_t,char**,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;

char *
FUNC_5(int VAR_2)
{
 char VAR_3[VAR_0 + 1];
 char VAR_4[VAR_0 + 1];
 struct kthr *VAR_5;
 struct proc *VAR_6;
 struct thread *VAR_7;
 static char VAR_8[64];

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_8, sizeof(VAR_8), "PID=%d", VAR_5->pid);
 VAR_6 = (struct proc *)VAR_5->paddr;
 if (FUNC_1(VAR_1, (uintptr_t)&VAR_6->p_comm[0], &VAR_3, sizeof(VAR_3)) !=
     sizeof(VAR_3))
  return (VAR_8);
 FUNC_4(VAR_8, ": ", sizeof(VAR_8));
 FUNC_4(VAR_8, VAR_3, sizeof(VAR_8));
 VAR_7 = (struct thread *)VAR_5->kaddr;
 if (FUNC_1(VAR_1, (uintptr_t)&VAR_7->td_name[0], &VAR_4,
     sizeof(VAR_4)) == sizeof(VAR_4) &&
     FUNC_3(VAR_3, VAR_4) != 0) {
  FUNC_4(VAR_8, "/", sizeof(VAR_8));
  FUNC_4(VAR_8, VAR_4, sizeof(VAR_8));
 }
 return (VAR_8);
}
