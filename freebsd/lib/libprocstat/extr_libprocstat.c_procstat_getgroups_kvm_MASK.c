
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucred ;
struct ucred {scalar_t__ p_ucred; int cr_ngroups; scalar_t__ cr_groups; } ;
struct proc {scalar_t__ p_ucred; int cr_ngroups; scalar_t__ cr_groups; } ;
struct kinfo_proc {scalar_t__ ki_paddr; int ki_pid; } ;
typedef int proc ;
typedef int kvm_t ;
typedef struct ucred gid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 (int *,unsigned long,struct ucred*,size_t) ;
 struct ucred* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,scalar_t__,int ) ;

__attribute__((used)) static gid_t *
FUNC_6(kvm_t *VAR_1, struct kinfo_proc *VAR_2, unsigned int *VAR_3)
{
 struct proc VAR_4;
 struct ucred VAR_5;
 gid_t *VAR_6;
 size_t VAR_7;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 if (!FUNC_2(VAR_1, (unsigned long)VAR_2->ki_paddr, &VAR_4,
     sizeof(VAR_4))) {
  FUNC_5("can't read proc struct at %p for pid %d",
      VAR_2->ki_paddr, VAR_2->ki_pid);
  return (((void*)0));
 }
 if (VAR_4.p_ucred == VAR_0)
  return (((void*)0));
 if (!FUNC_2(VAR_1, (unsigned long)VAR_4.p_ucred, &VAR_5,
     sizeof(VAR_5))) {
  FUNC_5("can't read ucred struct at %p for pid %d",
      VAR_4.p_ucred, VAR_2->ki_pid);
  return (((void*)0));
 }
 VAR_7 = VAR_5.cr_ngroups * sizeof(gid_t);
 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_4("malloc(%zu)", VAR_7);
  return (((void*)0));
 }
 if (!FUNC_2(VAR_1, (unsigned long)VAR_5.cr_groups, VAR_6, VAR_7)) {
  FUNC_5("can't read groups at %p for pid %d",
      VAR_5.cr_groups, VAR_2->ki_pid);
  FUNC_1(VAR_6);
  return (((void*)0));
 }
 *VAR_3 = VAR_5.cr_ngroups;
 return (VAR_6);
}
