
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ uint64_t ;
struct vm_map {int pmap; } ;
struct trapframe {int* tf_x; scalar_t__ tf_elr; } ;
struct TYPE_4__ {scalar_t__ md_spinlock_count; } ;
struct thread {scalar_t__ td_critnest; scalar_t__ td_intr_nesting_level; TYPE_2__ td_md; struct proc* td_proc; struct pcb* td_pcb; } ;
struct proc {TYPE_1__* p_vmspace; } ;
struct pcb {scalar_t__ pcb_onfault; } ;
struct TYPE_3__ {struct vm_map vm_map; } ;


 int FUNC_0 (scalar_t__) ;


 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int,int *,char*) ;
 int FUNC_3 (struct thread*,int,int,void*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_11 ;
 int FUNC_5 () ;
 scalar_t__ VAR_12 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ,struct trapframe*) ;
 int VAR_13 ;
 struct vm_map* VAR_14 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct trapframe*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct thread*,struct trapframe*) ;
 int FUNC_13 (struct vm_map*,scalar_t__,int,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_14(struct thread *VAR_15, struct trapframe *VAR_16, uint64_t VAR_17,
    uint64_t VAR_18, int VAR_19)
{
 struct vm_map *VAR_20;
 struct proc *VAR_21;
 struct pcb *VAR_22;
 vm_prot_t VAR_23;
 int VAR_24, VAR_25, VAR_26;
 FUNC_4();
 VAR_22 = VAR_15->td_pcb;
 VAR_21 = VAR_15->td_proc;
 if (VAR_19)
  VAR_20 = &VAR_21->p_vmspace->vm_map;
 else {
  FUNC_5();


  if (VAR_18 >= VAR_5) {
   VAR_20 = VAR_14;
  } else {
   VAR_20 = &VAR_21->p_vmspace->vm_map;
   if (VAR_20 == ((void*)0))
    VAR_20 = VAR_14;
  }
 }
 if ((VAR_19 || VAR_20 == VAR_14 || VAR_22->pcb_onfault != 0) &&
     FUNC_9(VAR_20->pmap, VAR_17, VAR_18) == VAR_3)
  return;

 FUNC_1(VAR_15->td_md.md_spinlock_count == 0,
     ("data abort with spinlock held"));
 if (VAR_15->td_critnest != 0 || FUNC_2(VAR_10 |
     VAR_9, ((void*)0), "Kernel page fault") != 0) {
  FUNC_10(VAR_16);
  FUNC_11(" far: %16lx\n", VAR_18);
  FUNC_11(" esr:         %.8lx\n", VAR_17);
  FUNC_8("data abort in critical section or under mutex");
 }

 switch (FUNC_0(VAR_17)) {
 case 129:
 case 128:
  VAR_23 = VAR_6;
  break;
 default:
  VAR_23 = (VAR_17 & VAR_0) == 0 ? VAR_7 :
      VAR_7 | VAR_8;
  break;
 }


 VAR_24 = FUNC_13(VAR_20, VAR_18, VAR_23, VAR_4, &VAR_25, &VAR_26);
 if (VAR_24 != VAR_3) {
  if (VAR_19) {
   FUNC_3(VAR_15, VAR_25, VAR_26, (void *)VAR_18);
  } else {
   if (VAR_15->td_intr_nesting_level == 0 &&
       VAR_22->pcb_onfault != 0) {
    VAR_16->tf_x[0] = VAR_24;
    VAR_16->tf_elr = VAR_22->pcb_onfault;
    return;
   }

   FUNC_11("Fatal data abort:\n");
   FUNC_10(VAR_16);
   FUNC_11(" far: %16lx\n", VAR_18);
   FUNC_11(" esr:         %.8lx\n", VAR_17);
   FUNC_8("vm_fault failed: %lx", VAR_16->tf_elr);
  }
 }

 if (VAR_19)
  FUNC_12(VAR_15, VAR_16);
}
