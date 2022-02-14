
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int dtrace_probeinfo_t ;
struct TYPE_35__ {int dtpd_id; int dtpd_name; int dtpd_func; int dtpd_mod; int * dtpd_provider; } ;
typedef TYPE_5__ dtrace_probedesc_t ;
struct TYPE_36__ {int dtpa_args; int dtpa_name; int dtpa_func; int dtpa_mod; int dtpa_provider; } ;
typedef TYPE_6__ dtrace_pattr_t ;
struct TYPE_37__ {int dt_globals; } ;
typedef TYPE_7__ dtrace_hdl_t ;
struct TYPE_30__ {int dtpp_flags; } ;
struct TYPE_32__ {TYPE_1__ dtvd_priv; } ;
struct TYPE_38__ {TYPE_2__ pv_desc; } ;
typedef TYPE_8__ dt_provider_t ;
struct TYPE_39__ {TYPE_4__* pr_pvp; } ;
typedef TYPE_9__ dt_probe_t ;
struct TYPE_28__ {int di_attr; } ;
typedef TYPE_10__ dt_ident_t ;
typedef int attrstr ;
struct TYPE_33__ {TYPE_6__ dtvd_attr; } ;
struct TYPE_34__ {TYPE_3__ pv_desc; } ;
struct TYPE_31__ {int dtp_argc; int dtp_attr; int dtp_arga; } ;
struct TYPE_29__ {int pcb_cflags; TYPE_9__* pcb_probe; TYPE_5__* pcb_pdesc; TYPE_21__ pcb_pinfo; int pcb_jmpbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 int FUNC_0 (TYPE_21__*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int *,int ,int ,int ,int ,void*,int ,int ) ;
 TYPE_10__* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_7__*,TYPE_11__*) ;
 TYPE_9__* FUNC_5 (TYPE_7__*,TYPE_5__*,TYPE_21__*) ;
 TYPE_8__* FUNC_6 (TYPE_7__*,int *) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int ,...) ;
 TYPE_11__* VAR_8 ;

void
FUNC_13(dtrace_hdl_t *VAR_9, dtrace_probedesc_t *VAR_10)
{
 const dtrace_pattr_t *VAR_11;
 dt_probe_t *VAR_12;
 dt_provider_t *VAR_13;
 dt_ident_t *VAR_14;
 char VAR_15[8];
 int VAR_16;
 if (FUNC_9(VAR_10->dtpd_provider[FUNC_11(VAR_10->dtpd_provider) - 1]) &&
     ((VAR_13 = FUNC_6(VAR_9, VAR_10->dtpd_provider)) == ((void*)0) ||
     VAR_13->pv_desc.dtvd_priv.dtpp_flags & VAR_1) &&
     FUNC_4(VAR_10, VAR_9, VAR_8) != 0) {
  FUNC_10(VAR_8->pcb_jmpbuf, VAR_4);
 }






 if ((VAR_12 = FUNC_5(VAR_9, VAR_10, &VAR_8->pcb_pinfo)) == ((void*)0)) {
  VAR_11 = &VAR_7;
  VAR_16 = FUNC_8(VAR_9);
  FUNC_0(&VAR_8->pcb_pinfo, sizeof (dtrace_probeinfo_t));
  VAR_8->pcb_pinfo.dtp_attr = VAR_11->dtpa_provider;
  VAR_8->pcb_pinfo.dtp_arga = VAR_11->dtpa_args;
 } else {
  VAR_11 = &VAR_12->pr_pvp->pv_desc.dtvd_attr;
  VAR_16 = 0;
 }

 if (VAR_16 == VAR_5 && !(VAR_8->pcb_cflags & VAR_0)) {
  FUNC_12(VAR_3, "probe description %s:%s:%s:%s does not "
      "match any probes\n", *VAR_10->dtpd_provider, VAR_10->dtpd_mod,
      VAR_10->dtpd_func, VAR_10->dtpd_name);
 }

 if (VAR_16 != VAR_5 && VAR_16 != VAR_6 && VAR_16 != 0)
  FUNC_12(VAR_2, "%s\n", FUNC_7(VAR_9, VAR_16));

 FUNC_2("set context to %s:%s:%s:%s [%u] prp=%p attr=%s argc=%d\n",
     VAR_10->dtpd_provider, VAR_10->dtpd_mod, VAR_10->dtpd_func, VAR_10->dtpd_name,
     VAR_10->dtpd_id, (void *)VAR_12, FUNC_1(VAR_8->pcb_pinfo.dtp_attr,
     VAR_15, sizeof (VAR_15)), VAR_8->pcb_pinfo.dtp_argc);





 if ((VAR_14 = FUNC_3(VAR_9->dt_globals, "probeprov")) != ((void*)0))
  VAR_14->di_attr = VAR_11->dtpa_provider;
 if ((VAR_14 = FUNC_3(VAR_9->dt_globals, "probemod")) != ((void*)0))
  VAR_14->di_attr = VAR_11->dtpa_mod;
 if ((VAR_14 = FUNC_3(VAR_9->dt_globals, "probefunc")) != ((void*)0))
  VAR_14->di_attr = VAR_11->dtpa_func;
 if ((VAR_14 = FUNC_3(VAR_9->dt_globals, "probename")) != ((void*)0))
  VAR_14->di_attr = VAR_11->dtpa_name;
 if ((VAR_14 = FUNC_3(VAR_9->dt_globals, "args")) != ((void*)0))
  VAR_14->di_attr = VAR_11->dtpa_args;

 VAR_8->pcb_pdesc = VAR_10;
 VAR_8->pcb_probe = VAR_12;
}
