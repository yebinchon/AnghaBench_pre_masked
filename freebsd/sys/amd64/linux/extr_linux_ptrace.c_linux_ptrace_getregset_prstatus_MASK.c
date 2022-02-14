
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct reg {int pl_flags; } ;
struct ptrace_lwpinfo {int pl_flags; } ;
struct pcb {unsigned long pcb_fsbase; unsigned long pcb_gsbase; } ;
struct linux_pt_regset {int rax; size_t iov_len; scalar_t__ iov_base; int rcx; int r10; } ;
struct iovec {int rax; size_t iov_len; scalar_t__ iov_base; int rcx; int r10; } ;
typedef int pid_t ;
typedef int lwpinfo ;
typedef scalar_t__ l_ulong ;
typedef int l_regset ;
typedef int iov ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void const*,struct linux_pt_regset*,int) ;
 int FUNC_2 (struct linux_pt_regset*,void*,int) ;
 struct thread* VAR_3 ;
 int FUNC_3 (struct thread*,int ,int ,struct reg*,int) ;
 int FUNC_4 (struct thread*,char*,int) ;
 int FUNC_5 (struct reg*,unsigned long,unsigned long,struct linux_pt_regset*) ;
 int FUNC_6 (struct pcb*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_4, pid_t VAR_5, l_ulong VAR_6)
{
 struct ptrace_lwpinfo VAR_7;
 struct reg VAR_8;
 struct linux_pt_regset VAR_9;
 struct iovec VAR_10;
 struct pcb *VAR_11;
 unsigned long VAR_12, VAR_13;
 size_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_1((const void *)VAR_6, &VAR_10, sizeof(VAR_10));
 if (VAR_15 != 0) {
  FUNC_4(VAR_4, "copyin error %d", VAR_15);
  return (VAR_15);
 }

 VAR_15 = FUNC_3(VAR_4, VAR_1, VAR_5, &VAR_8, 0);
 if (VAR_15 != 0)
  return (VAR_15);

 VAR_11 = VAR_4->td_pcb;
 if (VAR_4 == VAR_3)
  FUNC_6(VAR_11);
 VAR_12 = VAR_11->pcb_fsbase;
 VAR_13 = VAR_11->pcb_gsbase;

 FUNC_5(&VAR_8, VAR_12, VAR_13, &VAR_9);

 VAR_15 = FUNC_3(VAR_4, VAR_2, VAR_5, &VAR_7, sizeof(VAR_7));
 if (VAR_15 != 0) {
  FUNC_4(VAR_4, "PT_LWPINFO failed with error %d", VAR_15);
  return (VAR_15);
 }
 if (VAR_7.pl_flags & VAR_0) {







  VAR_9.rax = -38;




  VAR_9.r10 = VAR_9.rcx;
 }

 VAR_14 = FUNC_0(VAR_10.iov_len, sizeof(VAR_9));
 VAR_15 = FUNC_2(&VAR_9, (void *)VAR_10.iov_base, VAR_14);
 if (VAR_15 != 0) {
  FUNC_4(VAR_4, "copyout error %d", VAR_15);
  return (VAR_15);
 }

 VAR_10.iov_len -= VAR_14;
 VAR_15 = FUNC_2(&VAR_10, (void *)VAR_6, sizeof(VAR_10));
 if (VAR_15 != 0) {
  FUNC_4(VAR_4, "iov copyout error %d", VAR_15);
  return (VAR_15);
 }

 return (VAR_15);
}
