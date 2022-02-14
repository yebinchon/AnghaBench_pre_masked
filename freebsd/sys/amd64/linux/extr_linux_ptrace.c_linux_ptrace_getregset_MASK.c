
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int pid_t ;
typedef int l_ulong ;


 int VAR_0 ;

 int FUNC_0 (struct thread*,char*,int) ;
 int FUNC_1 (struct thread*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, pid_t VAR_2, l_ulong VAR_3, l_ulong VAR_4)
{

 switch (VAR_3) {
 case 128:
  return (FUNC_1(VAR_1, VAR_2, VAR_4));
 default:
  FUNC_0(VAR_1, "PTRACE_GETREGSET request %ld not implemented; "
      "returning EINVAL", VAR_3);
  return (VAR_0);
 }
}
