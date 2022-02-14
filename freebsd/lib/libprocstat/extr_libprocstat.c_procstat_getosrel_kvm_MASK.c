
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_osrel; } ;
struct kinfo_proc {int ki_pid; scalar_t__ ki_paddr; } ;
typedef int proc ;
typedef int kvm_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,struct proc*,int) ;
 int FUNC_2 (char*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, struct kinfo_proc *VAR_1, int *VAR_2)
{
 struct proc VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));
 if (!FUNC_1(VAR_0, (unsigned long)VAR_1->ki_paddr, &VAR_3,
     sizeof(VAR_3))) {
  FUNC_2("can't read proc struct at %p for pid %d",
      VAR_1->ki_paddr, VAR_1->ki_pid);
  return (-1);
 }
 *VAR_2 = VAR_3.p_osrel;
 return (0);
}
