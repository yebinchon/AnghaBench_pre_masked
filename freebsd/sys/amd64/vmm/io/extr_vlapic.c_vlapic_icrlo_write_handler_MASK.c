
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int vcpu; int rip; } ;
struct TYPE_4__ {TYPE_1__ spinup_ap; } ;
struct vm_exit {TYPE_2__ u; int exitcode; } ;
struct vlapic {int vcpuid; scalar_t__ boot_state; int vm; struct LAPIC* apic_page; } ;
struct LAPIC {int icr_lo; scalar_t__ icr_hi; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct vlapic*,char*,int) ;
 int FUNC_5 (struct vlapic*,char*,int,int) ;
 int VAR_17 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int *,int,int,int,scalar_t__) ;
 int FUNC_8 (struct vlapic*,int ,int) ;
 int FUNC_9 (int ) ;
 struct vm_exit* FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 struct vlapic* FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,int ,int,int) ;
 scalar_t__ FUNC_15 (struct vlapic*) ;

int
FUNC_16(struct vlapic *VAR_18, bool *VAR_19)
{
 int VAR_20;
 bool VAR_21;
 cpuset_t VAR_22;
 uint64_t VAR_23;
 uint32_t VAR_24, VAR_25, VAR_26;
 struct vlapic *VAR_27;
 struct vm_exit *VAR_28;
 struct LAPIC *VAR_29;
 uint16_t VAR_30;

 VAR_29 = VAR_18->apic_page;
 VAR_29->icr_lo &= ~VAR_5;
 VAR_23 = ((uint64_t)VAR_29->icr_hi << 32) | VAR_29->icr_lo;

 if (FUNC_15(VAR_18))
  VAR_24 = VAR_23 >> 32;
 else
  VAR_24 = VAR_23 >> (32 + 24);
 VAR_25 = VAR_23 & VAR_11;
 VAR_26 = VAR_23 & VAR_2;

 if (VAR_26 == VAR_0 && VAR_25 < 16) {
  FUNC_8(VAR_18, VAR_8, 0);
  FUNC_4(VAR_18, "Ignoring invalid IPI %d", VAR_25);
  return (0);
 }

 FUNC_5(VAR_18, "icrlo 0x%016lx triggered ipi %d", VAR_23, VAR_25);

 if (VAR_26 == VAR_0 || VAR_26 == VAR_3) {
  switch (VAR_23 & VAR_7) {
  case 129:
   VAR_21 = ((VAR_23 & VAR_6) == 0);
   FUNC_7(VAR_18->vm, &VAR_22, VAR_24, VAR_21, 0,
       FUNC_15(VAR_18));
   break;
  case 128:
   FUNC_2(VAR_18->vcpuid, &VAR_22);
   break;
  case 130:
   VAR_22 = FUNC_9(VAR_18->vm);
   break;
  case 131:
   VAR_22 = FUNC_9(VAR_18->vm);
   FUNC_0(VAR_18->vcpuid, &VAR_22);
   break;
  default:
   FUNC_3(&VAR_22);
   break;
  }

  while ((VAR_20 = FUNC_1(&VAR_22)) != 0) {
   VAR_20--;
   FUNC_0(VAR_20, &VAR_22);
   if (VAR_26 == VAR_0) {
    FUNC_6(VAR_18->vm, VAR_20, VAR_25);
    FUNC_14(VAR_18->vm, VAR_18->vcpuid,
          VAR_15, VAR_20, 1);
    FUNC_5(VAR_18, "vlapic sending ipi %d "
        "to vcpuid %d", VAR_25, VAR_20);
   } else {
    FUNC_12(VAR_18->vm, VAR_20);
    FUNC_4(VAR_18, "vlapic sending ipi nmi "
        "to vcpuid %d", VAR_20);
   }
  }

  return (0);
 }

 VAR_30 = FUNC_11(VAR_18->vm);
 if (VAR_26 == VAR_1) {
  if ((VAR_23 & VAR_10) == VAR_9)
   return (0);

  if (VAR_18->vcpuid == 0 && VAR_24 != 0 && VAR_24 < VAR_30) {
   VAR_27 = FUNC_13(VAR_18->vm, VAR_24);


   if (VAR_27->boot_state == VAR_12) {
    VAR_27->boot_state = VAR_14;
   }

   return (0);
  }
 }

 if (VAR_26 == VAR_4) {
  if (VAR_18->vcpuid == 0 && VAR_24 != 0 && VAR_24 < VAR_30) {
   VAR_27 = FUNC_13(VAR_18->vm, VAR_24);




   if (VAR_27->boot_state != VAR_14)
    return (0);

   VAR_27->boot_state = VAR_13;

   *VAR_19 = 1;
   VAR_28 = FUNC_10(VAR_18->vm, VAR_18->vcpuid);
   VAR_28->exitcode = VAR_17;
   VAR_28->u.spinup_ap.vcpu = VAR_24;
   VAR_28->u.spinup_ap.rip = VAR_25 << VAR_16;

   return (0);
  }
 }




 return (1);
}
