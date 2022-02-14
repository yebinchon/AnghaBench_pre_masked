
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_26__ ;
typedef struct TYPE_40__ TYPE_25__ ;
typedef struct TYPE_39__ TYPE_24__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_19__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_16__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct trapframe {int dummy; } ;
struct pargs {int ar_length; int ar_args; } ;
typedef void* pc_t ;
struct TYPE_31__ {int lwp_errno; struct trapframe* lwp_regs; } ;
typedef TYPE_14__ klwp_t ;
typedef int dtrace_state_t ;
struct TYPE_30__ {int (* dtps_getargval ) (int ,int,int ,int,int) ;} ;
struct TYPE_32__ {int dtpv_name; int dtpv_arg; TYPE_13__ dtpv_pops; } ;
typedef TYPE_15__ dtrace_provider_t ;
struct TYPE_33__ {int dtms_present; int* dtms_arg; int dtms_timestamp; int dtms_walltimestamp; int dtms_ipl; int dtms_epid; int dtms_stackdepth; int dtms_ustackdepth; int dtms_caller; int dtms_ucaller; TYPE_26__* dtms_probe; } ;
typedef TYPE_16__ dtrace_mstate_t ;
struct TYPE_49__ {int cr_gid; int cr_uid; } ;
struct TYPE_48__ {int pr_id; int pr_name; } ;
struct TYPE_47__ {int zone_name; } ;
struct TYPE_46__ {int zone_name; } ;
struct TYPE_45__ {int p_comm; struct pargs* p_args; } ;
struct TYPE_44__ {int u_comm; } ;
struct TYPE_43__ {int u_comm; } ;
struct TYPE_42__ {int p_pid; } ;
struct TYPE_41__ {int dtpr_id; int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_15__* dtpr_provider; int dtpr_aframes; int dtpr_arg; } ;
struct TYPE_40__ {int * cpuc_dtrace_illval; } ;
struct TYPE_39__ {int p_pid; TYPE_2__* p_pptr; } ;
struct TYPE_38__ {int t_dtrace_vtime; int td_errno; TYPE_14__* t_lwp; TYPE_12__* td_ucred; TYPE_11__* t_procp; TYPE_5__* td_proc; int t_tid; struct trapframe* td_frame; } ;
struct TYPE_37__ {int pid_id; } ;
struct TYPE_36__ {TYPE_9__* p_cred; TYPE_6__* p_zone; TYPE_3__ p_user; } ;
struct TYPE_35__ {int pid_id; } ;
struct TYPE_34__ {int p_pid; } ;
struct TYPE_29__ {int cr_gid; int cr_uid; TYPE_8__* cr_prison; } ;
struct TYPE_28__ {TYPE_10__* p_cred; TYPE_7__* p_zone; TYPE_4__ p_user; int p_ppid; TYPE_1__* p_pidp; } ;
struct TYPE_27__ {int cr_gid; int cr_uid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_26__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_25__* VAR_16 ;
 size_t VAR_17 ;
 TYPE_24__* VAR_18 ;
 TYPE_23__* VAR_19 ;
 int FUNC_5 (int) ;
 int FUNC_6 (uintptr_t,int *,TYPE_16__*) ;
 int FUNC_7 (uintptr_t,int ,int *,TYPE_16__*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (void**,int,int,int *) ;
 int FUNC_13 (struct trapframe*,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int*,int) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_20 ;
 TYPE_19__ VAR_21 ;
 TYPE_18__ VAR_22 ;
 TYPE_17__ VAR_23 ;
 int FUNC_19 (int ,int,int ,int,int) ;

__attribute__((used)) static uint64_t
FUNC_20(dtrace_mstate_t *VAR_24, dtrace_state_t *VAR_25, uint64_t VAR_26,
    uint64_t VAR_27)
{




 if (VAR_26 >= VAR_4 && VAR_26 <= VAR_5) {
  VAR_27 = VAR_26 - VAR_4;
  VAR_26 = 156;
 }

 switch (VAR_26) {
 case 156:
  FUNC_0(VAR_24->dtms_present & VAR_6);
  if (VAR_27 >= sizeof (VAR_24->dtms_arg) /
      sizeof (VAR_24->dtms_arg[0])) {
   int VAR_28 = VAR_24->dtms_probe->dtpr_aframes + 2;
   dtrace_provider_t *VAR_29;
   uint64_t VAR_30;

   VAR_29 = VAR_24->dtms_probe->dtpr_provider;
   if (VAR_29->dtpv_pops.dtps_getargval != ((void*)0))
    VAR_30 = VAR_29->dtpv_pops.dtps_getargval(VAR_29->dtpv_arg,
        VAR_24->dtms_probe->dtpr_id,
        VAR_24->dtms_probe->dtpr_arg, VAR_27, VAR_28);
   else
    VAR_30 = FUNC_8(VAR_27, VAR_28);
   if (VAR_24->dtms_probe != ((void*)0))
    return (VAR_30);

   FUNC_0(0);
  }

  return (VAR_24->dtms_arg[VAR_27]);
 case 132: {
  struct trapframe *VAR_31;

  if (!FUNC_18(VAR_25))
   return (0);

  if ((VAR_31 = VAR_19->td_frame) == ((void*)0)) {
   FUNC_4(VAR_1);
   VAR_16[VAR_17].cpuc_dtrace_illval = 0;
   return (0);
  }

  return (FUNC_13(VAR_31, VAR_27));
 }


 case 153:
  if (!FUNC_18(VAR_25))
   return (0);
  return ((uint64_t)(uintptr_t)VAR_19);

 case 135:
  if (!(VAR_24->dtms_present & VAR_12)) {
   VAR_24->dtms_timestamp = FUNC_10();
   VAR_24->dtms_present |= VAR_12;
  }
  return (VAR_24->dtms_timestamp);

 case 130:
  FUNC_0(VAR_20 != 0);
  return (VAR_19->t_dtrace_vtime);

 case 129:
  if (!(VAR_24->dtms_present & VAR_15)) {
   VAR_24->dtms_walltimestamp = FUNC_9();
   VAR_24->dtms_present |= VAR_15;
  }
  return (VAR_24->dtms_walltimestamp);
 case 152:
  FUNC_0(VAR_24->dtms_present & VAR_8);
  return (VAR_24->dtms_epid);

 case 147:
  FUNC_0(VAR_24->dtms_present & VAR_10);
  return (VAR_24->dtms_probe->dtpr_id);

 case 137:
  if (!FUNC_17(VAR_25))
   return (0);
  if (!(VAR_24->dtms_present & VAR_11)) {
   int VAR_32 = VAR_24->dtms_probe->dtpr_aframes + 2;

   VAR_24->dtms_stackdepth = FUNC_14(VAR_32);
   VAR_24->dtms_present |= VAR_11;
  }
  return (VAR_24->dtms_stackdepth);

 case 131:
  if (!FUNC_18(VAR_25))
   return (0);
  if (!(VAR_24->dtms_present & VAR_14)) {



   if (FUNC_2(VAR_24->dtms_probe) &&
       FUNC_1(VAR_0)) {
    VAR_24->dtms_ustackdepth = 0;
   } else {
    FUNC_4(VAR_3);
    VAR_24->dtms_ustackdepth =
        FUNC_16();
    FUNC_3(VAR_3);
   }
   VAR_24->dtms_present |= VAR_14;
  }
  return (VAR_24->dtms_ustackdepth);

 case 155:
  if (!FUNC_17(VAR_25))
   return (0);
  if (!(VAR_24->dtms_present & VAR_7)) {
   int VAR_33 = VAR_24->dtms_probe->dtpr_aframes + 2;

   if (!FUNC_2(VAR_24->dtms_probe)) {






    pc_t VAR_34[2] = {0, 0};

    FUNC_12(VAR_34, 2, VAR_33,
        (uint32_t *)(uintptr_t)VAR_24->dtms_arg[0]);
    VAR_24->dtms_caller = VAR_34[1];
   } else if ((VAR_24->dtms_caller =
       FUNC_5(VAR_33)) == -1) {





    pc_t VAR_35 = 0;

    FUNC_12(&VAR_35, 1, VAR_33, ((void*)0));
    VAR_24->dtms_caller = VAR_35;
   }

   VAR_24->dtms_present |= VAR_7;
  }
  return (VAR_24->dtms_caller);

 case 134:
  if (!FUNC_18(VAR_25))
   return (0);

  if (!(VAR_24->dtms_present & VAR_13)) {
   uint64_t VAR_36[3];
   VAR_36[2] = 0;
   FUNC_4(VAR_3);
   FUNC_15(VAR_36, 3);
   FUNC_3(VAR_3);
   VAR_24->dtms_ucaller = VAR_36[2];
   VAR_24->dtms_present |= VAR_13;
  }

  return (VAR_24->dtms_ucaller);

 case 138:
  FUNC_0(VAR_24->dtms_present & VAR_10);
  return (FUNC_6(
      (uintptr_t)VAR_24->dtms_probe->dtpr_provider->dtpv_name,
      VAR_25, VAR_24));

 case 140:
  FUNC_0(VAR_24->dtms_present & VAR_10);
  return (FUNC_6(
      (uintptr_t)VAR_24->dtms_probe->dtpr_mod,
      VAR_25, VAR_24));

 case 141:
  FUNC_0(VAR_24->dtms_present & VAR_10);
  return (FUNC_6(
      (uintptr_t)VAR_24->dtms_probe->dtpr_func,
      VAR_25, VAR_24));

 case 139:
  FUNC_0(VAR_24->dtms_present & VAR_10);
  return (FUNC_6(
      (uintptr_t)VAR_24->dtms_probe->dtpr_name,
      VAR_25, VAR_24));

 case 143:
  if (!FUNC_18(VAR_25))
   return (0);
  return ((uint64_t)VAR_18->p_pid);


 case 142:
  if (!FUNC_18(VAR_25))
   return (0);
  if (VAR_18->p_pid == VAR_23)
   return (VAR_18->p_pid);
  else
   return (VAR_18->p_pptr->p_pid);


 case 136:
  return ((uint64_t)VAR_19->t_tid);

 case 150: {
  struct pargs *VAR_37 = VAR_19->td_proc->p_args;

  if (VAR_37 == ((void*)0))
   return(0);

  return (FUNC_7(
      (uintptr_t) VAR_37->ar_args, VAR_37->ar_length, VAR_25, VAR_24));
 }

 case 149:
  return (FUNC_6(
      (uintptr_t) VAR_19->td_proc->p_comm, VAR_25, VAR_24));


 case 128:
  return (0);


 case 133:
  if (!FUNC_18(VAR_25))
   return (0);
  return ((uint64_t)VAR_19->td_ucred->cr_uid);


 case 148:
  if (!FUNC_18(VAR_25))
   return (0);
  return ((uint64_t)VAR_19->td_ucred->cr_gid);


 case 151: {
  return (VAR_19->td_errno);

 }

 case 154: {
  return VAR_17;
 }

 default:
  FUNC_4(VAR_2);
  return (0);
 }
}
