
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct session {struct vnode* s_ttyvp; int * pg_session; int * p_pgrp; } ;
struct proc {struct vnode* s_ttyvp; int * pg_session; int * p_pgrp; } ;
struct pgrp {struct vnode* s_ttyvp; int * pg_session; int * p_pgrp; } ;
struct kinfo_proc {int ki_pid; int * ki_paddr; } ;
typedef int sess ;
typedef int proc ;
typedef int pgrp ;
typedef int kvm_t ;


 int FUNC_0 (struct kinfo_proc*) ;
 int FUNC_1 (int *,unsigned long,struct session*,int) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static struct vnode *
FUNC_3(kvm_t *VAR_0, struct kinfo_proc *VAR_1)
{
 struct pgrp VAR_2;
 struct proc VAR_3;
 struct session VAR_4;
 int VAR_5;

 FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_0, (unsigned long)VAR_1->ki_paddr, &VAR_3,
     sizeof(VAR_3));
 if (VAR_5 == 0) {
  FUNC_2("can't read proc struct at %p for pid %d",
      VAR_1->ki_paddr, VAR_1->ki_pid);
  return (((void*)0));
 }
 if (VAR_3.p_pgrp == ((void*)0))
  return (((void*)0));
 VAR_5 = FUNC_1(VAR_0, (unsigned long)VAR_3.p_pgrp, &VAR_2,
     sizeof(VAR_2));
 if (VAR_5 == 0) {
  FUNC_2("can't read pgrp struct at %p for pid %d",
      VAR_3.p_pgrp, VAR_1->ki_pid);
  return (((void*)0));
 }
 VAR_5 = FUNC_1(VAR_0, (unsigned long)VAR_2.pg_session, &VAR_4,
     sizeof(VAR_4));
 if (VAR_5 == 0) {
  FUNC_2("can't read session struct at %p for pid %d",
      VAR_2.pg_session, VAR_1->ki_pid);
  return (((void*)0));
 }
 return (VAR_4.s_ttyvp);
}
