
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct reg {int pl_flags; } ;
struct ptrace_lwpinfo {int pl_flags; } ;
struct linux_pt_reg {int rax; int rcx; int r10; } ;
typedef int pid_t ;
typedef int lwpinfo ;
typedef int l_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct linux_pt_reg*,void*,int) ;
 int FUNC_1 (struct thread*,int ,int ,struct reg*,int) ;
 int FUNC_2 (struct thread*,char*,int) ;
 int FUNC_3 (struct reg*,struct linux_pt_reg*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_3, pid_t VAR_4, void *VAR_5)
{
 struct ptrace_lwpinfo VAR_6;
 struct reg VAR_7;
 struct linux_pt_reg VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_1, VAR_4, &VAR_7, 0);
 if (VAR_9 != 0)
  return (VAR_9);

 FUNC_3(&VAR_7, &VAR_8);

 VAR_9 = FUNC_1(VAR_3, VAR_2, VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_9 != 0) {
  FUNC_2(VAR_3, "PT_LWPINFO failed with error %d", VAR_9);
  return (VAR_9);
 }
 if (VAR_6.pl_flags & VAR_0) {







  VAR_8.rax = -38;




  VAR_8.r10 = VAR_8.rcx;
 }

 VAR_9 = FUNC_0(&VAR_8, (void *)VAR_5, sizeof(VAR_8));
 return (VAR_9);
}
