
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int * p_limit; } ;
struct proc {int * p_limit; } ;
struct kinfo_proc {void* ki_paddr; int ki_pid; } ;
typedef int proc ;
typedef int kvm_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long,struct rlimit*,int) ;
 int FUNC_2 (char*,void*,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_1, struct kinfo_proc *VAR_2, int VAR_3,
    struct rlimit* VAR_4)
{
 struct proc VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_0);
 if (!FUNC_1(VAR_1, (unsigned long)VAR_2->ki_paddr, &VAR_5,
     sizeof(VAR_5))) {
  FUNC_2("can't read proc struct at %p for pid %d",
      VAR_2->ki_paddr, VAR_2->ki_pid);
  return (-1);
 }
 if (VAR_5.p_limit == ((void*)0))
  return (-1);
 VAR_6 = (unsigned long)VAR_5.p_limit + sizeof(struct rlimit) * VAR_3;
 if (!FUNC_1(VAR_1, VAR_6, VAR_4, sizeof(*VAR_4))) {
  FUNC_2("can't read rlimit struct at %p for pid %d",
      (void *)VAR_6, VAR_2->ki_pid);
  return (-1);
 }
 return (0);
}
