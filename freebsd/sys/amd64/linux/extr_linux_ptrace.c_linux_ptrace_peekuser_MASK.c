
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,char*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, pid_t VAR_2, void *VAR_3, void *VAR_4)
{

 FUNC_0(VAR_1, "PTRACE_PEEKUSER not implemented; returning EINVAL");
 return (VAR_0);
}
