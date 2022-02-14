
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;


typedef int uint_t ;
typedef int uint64_t ;
struct utsname {int dummy; } ;
typedef int h ;
struct TYPE_47__ {char* dtsd_strdata; int * dtsd_fmtdata; TYPE_7__ const* dtsd_action; TYPE_6__* dtsd_ecbdesc; } ;
typedef TYPE_2__ dtrace_stmtdesc_t ;
struct TYPE_53__ {scalar_t__ dx_id; TYPE_2__* ds_desc; } ;
struct TYPE_48__ {scalar_t__ dp_xrefslen; TYPE_8__ const dp_stmts; int ** dp_xrefs; int dp_dofversion; } ;
typedef TYPE_3__ dtrace_prog_t ;
struct TYPE_49__ {char* dtpd_provider; char* dtpd_mod; char* dtpd_func; char* dtpd_name; int dtpd_id; } ;
typedef TYPE_4__ dtrace_probedesc_t ;
struct TYPE_42__ {size_t ddo_strsec; int ddo_nsecs; int ddo_udata; int ddo_strs; int ddo_ldata; int ddo_secs; } ;
struct TYPE_50__ {int dt_dflags; int dt_uts; TYPE_8__ const dt_provlist; TYPE_8__ const dt_xlators; TYPE_11__ dt_dof; } ;
typedef TYPE_5__ dtrace_hdl_t ;
struct TYPE_46__ {int * dtpdd_difo; } ;
struct TYPE_51__ {int dted_uarg; TYPE_7__ const* dted_action; TYPE_1__ dted_pred; TYPE_4__ dted_probe; } ;
typedef TYPE_6__ dtrace_ecbdesc_t ;
struct TYPE_52__ {int dtad_uarg; int dtad_ntuple; int dtad_kind; scalar_t__ dtad_arg; int * dtad_difo; struct TYPE_52__ const* dtad_next; } ;
typedef TYPE_7__ const dtrace_actdesc_t ;
typedef TYPE_8__ const dt_xlator_t ;
typedef TYPE_8__ dt_stmt_t ;
typedef TYPE_8__ const dt_provider_t ;
typedef TYPE_11__ dt_dof_t ;
typedef int dt_buf_t ;
typedef scalar_t__ dof_stridx_t ;
typedef void* dof_secidx_t ;
struct TYPE_43__ {scalar_t__ dofs_type; size_t dofs_offset; size_t dofs_size; int dofs_flags; } ;
typedef TYPE_12__ dof_sec_t ;
struct TYPE_44__ {size_t dofp_strtab; size_t dofa_strtab; int dofe_uarg; scalar_t__ dofe_pad; void* dofe_actions; void* dofe_pred; void* dofe_probes; int dofa_uarg; int dofa_ntuple; int dofa_kind; scalar_t__ dofa_arg; void* dofa_difo; int dofp_id; void* dofp_name; void* dofp_func; void* dofp_mod; void* dofp_provider; } ;
typedef TYPE_13__ dof_probedesc_t ;
struct TYPE_45__ {int dofh_secnum; size_t dofh_loadsz; size_t dofh_filesz; } ;
typedef TYPE_14__ dof_hdr_t ;
typedef TYPE_13__ dof_ecbdesc_t ;
typedef TYPE_13__ dof_actdesc_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int) ;
 int * VAR_13 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (TYPE_11__*,int *) ;
 void* FUNC_4 (TYPE_11__*,TYPE_13__*,scalar_t__,int,int ,int,int) ;
 scalar_t__ FUNC_5 (TYPE_11__*,TYPE_8__ const*) ;
 void* FUNC_6 (TYPE_11__*,char*) ;
 int FUNC_7 (TYPE_11__*,TYPE_8__ const*,int ) ;
 int FUNC_8 (TYPE_11__*,int *,int ,int,int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int ,TYPE_14__*) ;
 void* FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*,int *,int *,int) ;
 int FUNC_12 (TYPE_5__*,int *,char*,size_t) ;
 int FUNC_13 (int *) ;
 size_t FUNC_14 (int *) ;
 TYPE_12__* FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*,int *,TYPE_14__*,int,int) ;
 scalar_t__ FUNC_17 (TYPE_5__*,TYPE_3__*) ;
 TYPE_8__* FUNC_18 (TYPE_8__ const*) ;
 int FUNC_19 (TYPE_5__*,int) ;
 int FUNC_20 (TYPE_5__*,int *,char*,int) ;
 size_t FUNC_21 (size_t,int) ;
 int FUNC_22 (int *) ;

void *
FUNC_23(dtrace_hdl_t *VAR_14, dtrace_prog_t *VAR_15, uint_t VAR_16)
{
 dt_dof_t *VAR_17 = &VAR_14->dt_dof;

 const dtrace_ecbdesc_t *VAR_18, *VAR_19;
 const dtrace_probedesc_t *VAR_20;
 const dtrace_actdesc_t *VAR_21;
 const dt_stmt_t *VAR_22;

 uint_t VAR_23 = 0;
 uint_t VAR_24 = 0;

 dt_provider_t *VAR_25;
 dt_xlator_t *VAR_26;
 dof_actdesc_t *VAR_27;
 dof_sec_t *VAR_28;
 size_t VAR_29, VAR_30;
 dof_hdr_t VAR_31;

 dt_buf_t VAR_32;
 char *VAR_33;
 uint_t VAR_34;

 if (VAR_16 & ~VAR_9) {
  (void) FUNC_19(VAR_14, VAR_12);
  return (((void*)0));
 }

 VAR_16 |= VAR_14->dt_dflags;

 if (FUNC_9(VAR_14, VAR_15->dp_dofversion, &VAR_31) != 0)
  return (((void*)0));

 if (FUNC_17(VAR_14, VAR_15) != 0)
  return (((void*)0));





 for (VAR_19 = ((void*)0), VAR_22 = FUNC_18(&VAR_15->dp_stmts);
     VAR_22 != ((void*)0); VAR_22 = FUNC_18(VAR_22), VAR_19 = VAR_18) {

  dtrace_stmtdesc_t *VAR_35 = VAR_22->ds_desc;
  dtrace_actdesc_t *VAR_36 = VAR_35->dtsd_action;

  if (VAR_35->dtsd_fmtdata != ((void*)0)) {
   VAR_34 = FUNC_20(VAR_14,
       VAR_35->dtsd_fmtdata, ((void*)0), 0);
   VAR_24 = FUNC_0(VAR_24, VAR_34);
  }

  if ((VAR_18 = VAR_35->dtsd_ecbdesc) == VAR_19)
   continue;

  for (VAR_34 = 0, VAR_36 = VAR_18->dted_action; VAR_36; VAR_36 = VAR_36->dtad_next)
   VAR_34++;

  VAR_23 = FUNC_0(VAR_23, VAR_34);
 }

 VAR_27 = FUNC_1(sizeof (dof_actdesc_t) * VAR_23);
 VAR_33 = FUNC_1(VAR_24 + 1);

 VAR_17->ddo_strsec = FUNC_4(VAR_17, ((void*)0), VAR_6, 1, 0, 0, 0);
 (void) FUNC_6(VAR_17, "");





 if (VAR_15->dp_xrefslen != 0) {
  for (VAR_26 = FUNC_18(&VAR_14->dt_xlators);
      VAR_26 != ((void*)0); VAR_26 = FUNC_18(VAR_26)) {
   if (VAR_26->dx_id < VAR_15->dp_xrefslen &&
       VAR_15->dp_xrefs[VAR_26->dx_id] != ((void*)0))
    FUNC_7(VAR_17, VAR_26, VAR_8);
  }
 }





 for (VAR_19 = ((void*)0), VAR_22 = FUNC_18(&VAR_15->dp_stmts);
     VAR_22 != ((void*)0); VAR_22 = FUNC_18(VAR_22), VAR_19 = VAR_18) {

  dof_secidx_t VAR_37 = VAR_1;
  dof_secidx_t VAR_38 = VAR_1;
  dof_secidx_t VAR_39 = VAR_1;

  const dt_stmt_t *VAR_40 = VAR_22;
  dtrace_stmtdesc_t *VAR_41 = VAR_22->ds_desc;
  dof_stridx_t VAR_42 = 0;
  dof_probedesc_t VAR_43;
  dof_ecbdesc_t VAR_44;
  uint_t VAR_45;

  if ((VAR_18 = VAR_22->ds_desc->dtsd_ecbdesc) == VAR_19)
   continue;

  VAR_20 = &VAR_18->dted_probe;





  VAR_43.dofp_strtab = VAR_17->ddo_strsec;
  VAR_43.dofp_provider = FUNC_6(VAR_17, VAR_20->dtpd_provider);
  VAR_43.dofp_mod = FUNC_6(VAR_17, VAR_20->dtpd_mod);
  VAR_43.dofp_func = FUNC_6(VAR_17, VAR_20->dtpd_func);
  VAR_43.dofp_name = FUNC_6(VAR_17, VAR_20->dtpd_name);
  VAR_43.dofp_id = VAR_20->dtpd_id;

  VAR_37 = FUNC_4(VAR_17, &VAR_43, VAR_5,
      sizeof (dof_secidx_t), 0,
      sizeof (dof_probedesc_t), sizeof (dof_probedesc_t));





  if (VAR_18->dted_pred.dtpdd_difo != ((void*)0))
   VAR_38 = FUNC_3(VAR_17, VAR_18->dted_pred.dtpdd_difo);





  for (VAR_45 = 0, VAR_21 = VAR_18->dted_action;
      VAR_21 != ((void*)0); VAR_21 = VAR_21->dtad_next, VAR_45++) {

   if (VAR_21->dtad_difo != ((void*)0)) {
    VAR_27[VAR_45].dofa_difo =
        FUNC_3(VAR_17, VAR_21->dtad_difo);
   } else
    VAR_27[VAR_45].dofa_difo = VAR_1;
   if (VAR_41 != ((void*)0) && VAR_21 == VAR_41->dtsd_action) {
    if (VAR_41->dtsd_fmtdata != ((void*)0)) {
     (void) FUNC_20(VAR_14,
         VAR_41->dtsd_fmtdata, VAR_33, VAR_24 + 1);
     VAR_42 = FUNC_6(VAR_17, VAR_33);
    } else if (VAR_41->dtsd_strdata != ((void*)0)) {
     VAR_42 = FUNC_6(VAR_17,
         VAR_41->dtsd_strdata);
    } else {
     VAR_42 = 0;
    }

    if ((VAR_40 = FUNC_18(VAR_40)) != ((void*)0))
     VAR_41 = VAR_40->ds_desc;
    else
     VAR_41 = ((void*)0);
   }

   if (VAR_42 != 0) {
    VAR_27[VAR_45].dofa_arg = VAR_42;
    VAR_27[VAR_45].dofa_strtab = VAR_17->ddo_strsec;
   } else {
    VAR_27[VAR_45].dofa_arg = VAR_21->dtad_arg;
    VAR_27[VAR_45].dofa_strtab = VAR_1;
   }

   VAR_27[VAR_45].dofa_kind = VAR_21->dtad_kind;
   VAR_27[VAR_45].dofa_ntuple = VAR_21->dtad_ntuple;
   VAR_27[VAR_45].dofa_uarg = VAR_21->dtad_uarg;
  }

  if (VAR_45 > 0) {
   VAR_39 = FUNC_4(VAR_17, VAR_27, VAR_2,
       sizeof (uint64_t), 0, sizeof (dof_actdesc_t),
       sizeof (dof_actdesc_t) * VAR_45);
  }





  VAR_44.dofe_probes = VAR_37;
  VAR_44.dofe_pred = VAR_38;
  VAR_44.dofe_actions = VAR_39;
  VAR_44.dofe_pad = 0;
  VAR_44.dofe_uarg = VAR_18->dted_uarg;

  (void) FUNC_4(VAR_17, &VAR_44, VAR_4,
      sizeof (uint64_t), 0, 0, sizeof (dof_ecbdesc_t));
 }





 if (VAR_16 & VAR_10) {
  for (VAR_25 = FUNC_18(&VAR_14->dt_provlist);
      VAR_25 != ((void*)0); VAR_25 = FUNC_18(VAR_25)) {
   if (FUNC_5(VAR_17, VAR_25) != 0)
    return (((void*)0));
  }
 }





 if (!(VAR_16 & VAR_11)) {
  (void) FUNC_8(VAR_17, VAR_13, VAR_3,
      sizeof (char), 0, 0, FUNC_22(VAR_13) + 1);
  (void) FUNC_8(VAR_17, &VAR_14->dt_uts, VAR_7,
      sizeof (char), 0, 0, sizeof (struct utsname));
 }





 VAR_31.dofh_secnum = VAR_17->ddo_nsecs;
 VAR_29 = sizeof (VAR_31) + FUNC_14(&VAR_17->ddo_secs);

 VAR_31.dofh_loadsz = VAR_29 +
     FUNC_14(&VAR_17->ddo_ldata) +
     FUNC_14(&VAR_17->ddo_strs);

 if (FUNC_14(&VAR_17->ddo_udata) != 0) {
  VAR_30 = FUNC_21(VAR_31.dofh_loadsz, sizeof (uint64_t));
  VAR_31.dofh_filesz = VAR_30 + FUNC_14(&VAR_17->ddo_udata);
 } else {
  VAR_30 = VAR_31.dofh_loadsz;
  VAR_31.dofh_filesz = VAR_30;
 }






 if ((VAR_34 = FUNC_13(&VAR_17->ddo_secs)) != 0) {
  (void) FUNC_19(VAR_14, VAR_34);
  return (((void*)0));
 }

 VAR_28 = FUNC_15(&VAR_17->ddo_secs);
 FUNC_2(VAR_28[VAR_17->ddo_strsec].dofs_type == VAR_6);
 FUNC_2(VAR_29 == sizeof (VAR_31) + sizeof (dof_sec_t) * VAR_17->ddo_nsecs);

 VAR_28[VAR_17->ddo_strsec].dofs_offset = VAR_29 + FUNC_14(&VAR_17->ddo_ldata);
 VAR_28[VAR_17->ddo_strsec].dofs_size = FUNC_14(&VAR_17->ddo_strs);





 for (VAR_34 = 0; VAR_34 < VAR_17->ddo_nsecs; VAR_34++, VAR_28++) {
  if (VAR_34 == VAR_17->ddo_strsec)
   continue;

  if (VAR_28->dofs_flags & VAR_0)
   VAR_28->dofs_offset += VAR_29;
  else
   VAR_28->dofs_offset += VAR_30;
 }






 FUNC_12(VAR_14, &VAR_32, "dof", VAR_31.dofh_filesz);

 FUNC_16(VAR_14, &VAR_32, &VAR_31, sizeof (VAR_31), sizeof (uint64_t));
 FUNC_11(VAR_14, &VAR_32, &VAR_17->ddo_secs, sizeof (uint64_t));
 FUNC_11(VAR_14, &VAR_32, &VAR_17->ddo_ldata, sizeof (uint64_t));
 FUNC_11(VAR_14, &VAR_32, &VAR_17->ddo_strs, sizeof (char));
 FUNC_11(VAR_14, &VAR_32, &VAR_17->ddo_udata, sizeof (uint64_t));

 return (FUNC_10(VAR_14, &VAR_32));
}
