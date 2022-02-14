
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sysentvec {char const** sv_syscallnames; size_t sv_size; } ;
struct proc {struct sysentvec* p_sysent; } ;



const char *
FUNC_0(struct proc *VAR_0, u_int VAR_1)
{
 static const char VAR_2[] = "unknown";
 struct sysentvec *VAR_3;

 VAR_3 = VAR_0->p_sysent;
 if (VAR_3->sv_syscallnames == ((void*)0) || VAR_1 >= VAR_3->sv_size)
  return (VAR_2);
 return (VAR_3->sv_syscallnames[VAR_1]);
}
