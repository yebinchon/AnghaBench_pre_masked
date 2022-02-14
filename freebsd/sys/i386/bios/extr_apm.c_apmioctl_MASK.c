
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_4__ {int eax; int edi; int esi; int edx; int ecx; int ebx; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
struct apm_softc {scalar_t__ initialized; int event_count; int event_ptr; struct apm_event_info* event_list; TYPE_2__ bios; int active; } ;
struct apm_info {int ai_status; int ai_batt_life; int ai_batt_stat; int ai_acline; int ai_minor; int ai_major; } ;
struct apm_event_info {int dummy; } ;
struct apm_bios_arg {int eax; int edi; int esi; int edx; int ecx; int ebx; } ;
typedef scalar_t__ caddr_t ;
typedef int apm_pwstatus_t ;
typedef struct apm_info* apm_info_t ;
typedef TYPE_3__* apm_info_old_t ;
struct TYPE_6__ {int ai_status; int ai_batt_life; int ai_batt_stat; int ai_acline; int ai_minor; int ai_major; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct apm_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct apm_softc VAR_9 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct cdev*) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_10, u_long VAR_11, caddr_t VAR_12, int VAR_13, struct thread *VAR_14)
{
 struct apm_softc *VAR_15 = &VAR_9;
 struct apm_bios_arg *VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19;

 if (VAR_15 == ((void*)0) || VAR_15->initialized == 0)
  return (VAR_4);

 FUNC_0("APM ioctl: cmd = 0x%lx\n", VAR_11);
 switch (VAR_11) {
 case 128:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  if (VAR_15->active)
   FUNC_10(VAR_8);
  else
   VAR_17 = VAR_3;
  break;

 case 129:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  if (VAR_15->active)
   FUNC_10(VAR_7);
  else
   VAR_17 = VAR_3;
  break;

 case 135:
  {
   struct apm_info VAR_20;
   apm_info_old_t VAR_21;

   if (FUNC_5(&VAR_20))
    VAR_17 = VAR_4;
   VAR_21 = (apm_info_old_t)VAR_12;
   VAR_21->ai_major = VAR_20.ai_major;
   VAR_21->ai_minor = VAR_20.ai_minor;
   VAR_21->ai_acline = VAR_20.ai_acline;
   VAR_21->ai_batt_stat = VAR_20.ai_batt_stat;
   VAR_21->ai_batt_life = VAR_20.ai_batt_life;
   VAR_21->ai_status = VAR_20.ai_status;
  }
  break;
 case 136:
  if (FUNC_5((apm_info_t)VAR_12))
   VAR_17 = VAR_4;
  break;
 case 134:
  if (FUNC_6((apm_pwstatus_t)VAR_12))
   VAR_17 = VAR_4;
  break;
 case 137:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  FUNC_4();
  break;
 case 139:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  FUNC_3();
  break;
 case 133:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  FUNC_7();
  break;
 case 131:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  FUNC_9();
  break;
 case 138:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);
  VAR_19 = *(int *)VAR_12;
  if (FUNC_2(VAR_19))
   VAR_17 = VAR_4;
  break;
 case 140:
  if (!(VAR_13 & VAR_6))
   return (VAR_5);

  VAR_16 = (struct apm_bios_arg *)VAR_12;
  VAR_15->bios.r.eax = VAR_16->eax;
  VAR_15->bios.r.ebx = VAR_16->ebx;
  VAR_15->bios.r.ecx = VAR_16->ecx;
  VAR_15->bios.r.edx = VAR_16->edx;
  VAR_15->bios.r.esi = VAR_16->esi;
  VAR_15->bios.r.edi = VAR_16->edi;
  if ((VAR_18 = FUNC_1())) {






   if (VAR_18 == -1) {
    VAR_17 = VAR_3;
   }
  } else {




   VAR_15->bios.r.eax &= 0xff;
  }
  VAR_16->eax = VAR_15->bios.r.eax;
  VAR_16->ebx = VAR_15->bios.r.ebx;
  VAR_16->ecx = VAR_15->bios.r.ecx;
  VAR_16->edx = VAR_15->bios.r.edx;
  VAR_16->esi = VAR_15->bios.r.esi;
  VAR_16->edi = VAR_15->bios.r.edi;
  break;
 default:
  VAR_17 = VAR_3;
  break;
 }


 if (FUNC_11(VAR_10) == VAR_0) {
  struct apm_event_info *VAR_22;
  int VAR_23;

  VAR_17 = 0;
  switch (VAR_11) {
  case 132:
   if (!VAR_15->event_count) {
    VAR_17 = VAR_2;
   } else {
    VAR_22 = (struct apm_event_info *)VAR_12;
    VAR_23 = VAR_15->event_ptr + VAR_1 - VAR_15->event_count;
    VAR_23 %= VAR_1;
    *VAR_22 = VAR_15->event_list[VAR_23];
    VAR_15->event_count--;
   }
   break;
  case 130:
   if (FUNC_8()) {
    VAR_17 = VAR_3;
   }
   break;
  default:
   VAR_17 = VAR_3;
   break;
  }
 }

 return VAR_17;
}
