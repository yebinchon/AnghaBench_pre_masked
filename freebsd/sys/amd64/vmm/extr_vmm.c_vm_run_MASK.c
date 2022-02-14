
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vm_run {int cpuid; int vm_exit; } ;
struct TYPE_8__ {int rflags; } ;
struct TYPE_7__ {int vector; } ;
struct TYPE_9__ {TYPE_2__ hlt; TYPE_1__ ioapic_eoi; } ;
struct vm_exit {int exitcode; TYPE_3__ u; scalar_t__ inst_length; scalar_t__ rip; } ;
struct vm_eventinfo {int * iptr; int * sptr; int * rptr; } ;
struct vm {int maxcpus; int cookie; int suspend; int rendezvous_func; struct vcpu* vcpu; int vmspace; int suspended_cpus; int active_cpus; } ;
struct vcpu {scalar_t__ nextrip; int reqidle; struct vm_exit exitinfo; } ;
struct pcb {int dummy; } ;
typedef TYPE_4__* pmap_t ;
struct TYPE_10__ {int pm_active; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 struct pcb* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct vm*,int,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,scalar_t__,TYPE_4__*,struct vm_eventinfo*) ;
 int FUNC_5 (struct vm_exit*,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct vcpu*) ;
 int FUNC_10 (struct vcpu*) ;
 int FUNC_11 (struct pcb*,int ) ;
 int FUNC_12 (struct vm*,int,int ) ;
 int FUNC_13 (struct vm*,int,int ) ;
 int FUNC_14 (struct vm*,int,int,int*) ;
 int FUNC_15 (struct vm*,int,struct vm_exit*,int*) ;
 int FUNC_16 (struct vm*,int,int*) ;
 int FUNC_17 (struct vm*,int,int*) ;
 int FUNC_18 (struct vm*,int) ;
 int FUNC_19 (struct vm*,int,int*) ;
 int FUNC_20 (struct vm*,int,int*) ;
 int FUNC_21 (struct vm*,int) ;
 int FUNC_22 (struct vm*,int,int ,scalar_t__) ;
 TYPE_4__* FUNC_23 (int ) ;

int
FUNC_24(struct vm *VAR_8, struct vm_run *VAR_9)
{
 struct vm_eventinfo VAR_10;
 int VAR_11, VAR_12;
 struct vcpu *VAR_13;
 struct pcb *VAR_14;
 uint64_t VAR_15;
 struct vm_exit *VAR_16;
 bool VAR_17, VAR_18;
 pmap_t VAR_19;

 VAR_12 = VAR_9->cpuid;

 if (VAR_12 < 0 || VAR_12 >= VAR_8->maxcpus)
  return (VAR_0);

 if (!FUNC_0(VAR_12, &VAR_8->active_cpus))
  return (VAR_0);

 if (FUNC_0(VAR_12, &VAR_8->suspended_cpus))
  return (VAR_0);

 VAR_19 = FUNC_23(VAR_8->vmspace);
 VAR_13 = &VAR_8->vcpu[VAR_12];
 VAR_16 = &VAR_13->exitinfo;
 VAR_10.rptr = &VAR_8->rendezvous_func;
 VAR_10.sptr = &VAR_8->suspend;
 VAR_10.iptr = &VAR_13->reqidle;
restart:
 FUNC_6();

 FUNC_1(!FUNC_0(VAR_6, &VAR_19->pm_active),
     ("vm_run: absurd pm_active"));

 VAR_15 = FUNC_8();

 VAR_14 = FUNC_2(VAR_7);
 FUNC_11(VAR_14, VAR_1);

 FUNC_9(VAR_13);

 FUNC_12(VAR_8, VAR_12, VAR_4);
 VAR_11 = FUNC_4(VAR_8->cookie, VAR_12, VAR_13->nextrip, VAR_19, &VAR_10);
 FUNC_12(VAR_8, VAR_12, VAR_3);

 FUNC_10(VAR_13);

 FUNC_22(VAR_8, VAR_12, VAR_5, FUNC_8() - VAR_15);

 FUNC_7();

 if (VAR_11 == 0) {
  VAR_17 = 0;
  VAR_13->nextrip = VAR_16->rip + VAR_16->inst_length;
  switch (VAR_16->exitcode) {
  case 130:
   VAR_11 = FUNC_19(VAR_8, VAR_12, &VAR_17);
   break;
  case 129:
   VAR_11 = FUNC_20(VAR_8, VAR_12, &VAR_17);
   break;
  case 135:
   FUNC_13(VAR_8, VAR_12,
       VAR_16->u.ioapic_eoi.vector);
   break;
  case 131:
   FUNC_18(VAR_8, VAR_12);
   VAR_11 = 0;
   break;
  case 139:
   VAR_18 = ((VAR_16->u.hlt.rflags & VAR_2) == 0);
   VAR_11 = FUNC_14(VAR_8, VAR_12, VAR_18, &VAR_17);
   break;
  case 132:
   VAR_11 = FUNC_17(VAR_8, VAR_12, &VAR_17);
   break;
  case 136:
   VAR_11 = FUNC_16(VAR_8, VAR_12, &VAR_17);
   break;
  case 138:
  case 137:
   VAR_11 = FUNC_15(VAR_8, VAR_12, VAR_16, &VAR_17);
   break;
  case 134:
  case 133:
  case 128:
   FUNC_21(VAR_8, VAR_12);
   break;
  default:
   VAR_17 = 1;
   break;
  }
 }

 if (VAR_11 == 0 && VAR_17 == 0)
  goto restart;

 FUNC_3(VAR_8, VAR_12, "retu %d/%d", VAR_11, VAR_16->exitcode);


 FUNC_5(VAR_16, &VAR_9->vm_exit, sizeof(struct vm_exit));
 return (VAR_11);
}
