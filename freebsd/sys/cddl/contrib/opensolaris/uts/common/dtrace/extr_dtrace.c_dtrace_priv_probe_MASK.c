
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_19__ {int p_flag; } ;
typedef TYPE_3__ proc_t ;
struct TYPE_17__ {TYPE_10__* dcr_cred; } ;
struct TYPE_20__ {TYPE_1__ dts_cred; } ;
typedef TYPE_4__ dtrace_state_t ;
struct TYPE_23__ {int (* dtps_mode ) (int ,int ,int ) ;} ;
struct TYPE_21__ {int dtpv_arg; TYPE_7__ dtpv_pops; } ;
typedef TYPE_5__ dtrace_provider_t ;
struct TYPE_22__ {int dtpr_arg; int dtpr_id; TYPE_5__* dtpr_provider; } ;
typedef TYPE_6__ dtrace_probe_t ;
typedef TYPE_7__ dtrace_pops_t ;
struct TYPE_24__ {int dtms_access; } ;
typedef TYPE_8__ dtrace_mstate_t ;
struct TYPE_25__ {int dte_cond; TYPE_6__* dte_probe; } ;
typedef TYPE_9__ dtrace_ecb_t ;
struct TYPE_16__ {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_suid; scalar_t__ cr_gid; scalar_t__ cr_rgid; scalar_t__ cr_sgid; TYPE_2__* cr_zone; } ;
typedef TYPE_10__ cred_t ;
struct TYPE_18__ {scalar_t__ zone_id; } ;


 int FUNC_0 (int) ;
 TYPE_10__* FUNC_1 () ;
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
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(dtrace_state_t *VAR_11, dtrace_mstate_t *VAR_12,
    dtrace_ecb_t *VAR_13)
{
 dtrace_probe_t *VAR_14 = VAR_13->dte_probe;
 dtrace_provider_t *VAR_15 = VAR_14->dtpr_provider;
 dtrace_pops_t *VAR_16 = &VAR_15->dtpv_pops;
 int VAR_17 = VAR_6;

 FUNC_0(VAR_13->dte_cond);
 if (VAR_13->dte_cond & VAR_2) {
  cred_t *VAR_18;
  cred_t *VAR_19 = VAR_11->dts_cred.dcr_cred;
  proc_t *VAR_20;

  FUNC_0(VAR_19 != ((void*)0));

  if ((VAR_18 = FUNC_1()) == ((void*)0) ||
      VAR_19->cr_uid != VAR_18->cr_uid ||
      VAR_19->cr_uid != VAR_18->cr_ruid ||
      VAR_19->cr_uid != VAR_18->cr_suid ||
      VAR_19->cr_gid != VAR_18->cr_gid ||
      VAR_19->cr_gid != VAR_18->cr_rgid ||
      VAR_19->cr_gid != VAR_18->cr_sgid ||
      (VAR_20 = FUNC_3(VAR_10)) == ((void*)0) ||
      (VAR_20->p_flag & VAR_9)) {
   if (VAR_17 & VAR_6)
    return (0);




  }
 }
 return (1);
}
