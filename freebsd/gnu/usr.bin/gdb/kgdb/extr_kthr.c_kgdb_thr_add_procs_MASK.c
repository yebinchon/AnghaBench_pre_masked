
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td ;
struct thread {scalar_t__ td_tid; scalar_t__ td_oncpu; int p_pid; int td_kstack; scalar_t__ td_pcb; int p_threads; } ;
struct proc {scalar_t__ td_tid; scalar_t__ td_oncpu; int p_pid; int td_kstack; scalar_t__ td_pcb; int p_threads; } ;
struct kthr {uintptr_t kaddr; uintptr_t pcb; scalar_t__ tid; uintptr_t paddr; scalar_t__ cpu; int pid; int kstack; struct kthr* next; } ;
typedef int p ;
typedef uintptr_t CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kthr* VAR_3 ;
 uintptr_t FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,uintptr_t,struct thread*,int) ;
 struct kthr* FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(uintptr_t VAR_8)
{
 struct proc VAR_9;
 struct thread VAR_10;
 struct kthr *VAR_11;
 CORE_ADDR VAR_12;

 while (VAR_8 != 0) {
  if (FUNC_6(VAR_4, VAR_8, &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9)) {
   FUNC_8("kvm_read: %s", FUNC_5(VAR_4));
   break;
  }
  VAR_12 = (uintptr_t)FUNC_2(&VAR_9.p_threads);
  while (VAR_12 != 0) {
   if (FUNC_6(VAR_4, VAR_12, &VAR_10, sizeof(VAR_10)) !=
       sizeof(VAR_10)) {
    FUNC_8("kvm_read: %s", FUNC_5(VAR_4));
    break;
   }
   VAR_11 = FUNC_7(sizeof(*VAR_11));
   VAR_11->next = VAR_3;
   VAR_11->kaddr = VAR_12;
   if (VAR_10.td_tid == VAR_2)
    VAR_11->pcb = VAR_1;
   else if (VAR_10.td_oncpu != VAR_0 &&
       FUNC_0(VAR_10.td_oncpu, &VAR_6))
    VAR_11->pcb = FUNC_4(VAR_10.td_oncpu);
   else
    VAR_11->pcb = (uintptr_t)VAR_10.td_pcb;
   VAR_11->kstack = VAR_10.td_kstack;
   VAR_11->tid = VAR_10.td_tid;
   VAR_11->pid = VAR_9.p_pid;
   VAR_11->paddr = VAR_8;
   VAR_11->cpu = VAR_10.td_oncpu;
   VAR_3 = VAR_11;
   VAR_12 = (uintptr_t)FUNC_3(&VAR_10, VAR_7);
  }
  VAR_8 = (uintptr_t)FUNC_1(&VAR_9, VAR_5);
 }
}
