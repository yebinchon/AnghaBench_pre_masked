
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint32_t ;
typedef int dtrace_hdl_t ;
struct TYPE_17__ {int di_attr; } ;
struct TYPE_18__ {size_t dx_id; TYPE_2__ dx_souid; int dx_dst_type; int dx_dst_ctfp; int dx_src_type; int dx_src_ctfp; int * dx_membdif; TYPE_4__* dx_members; } ;
typedef TYPE_3__ dt_xlator_t ;
struct TYPE_19__ {size_t dn_membid; int dn_membname; struct TYPE_19__* dn_list; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_20__ {int ddo_strsec; int ddo_xlms; int ddo_ldata; TYPE_1__* ddo_pgp; scalar_t__* ddo_xlexport; scalar_t__* ddo_xlimport; int * ddo_hdl; } ;
typedef TYPE_5__ dt_dof_t ;
typedef int dofxm ;
typedef int dofxl ;
struct TYPE_21__ {int dofxm_type; void* dofxm_name; scalar_t__ dofxm_difo; } ;
typedef TYPE_6__ dof_xlmember_t ;
struct TYPE_22__ {int dofxl_argc; int dofxl_attr; void* dofxl_type; void* dofxl_argv; int dofxl_strtab; scalar_t__ dofxl_members; } ;
typedef TYPE_7__ dof_xlator_t ;
typedef scalar_t__ dof_secidx_t ;
typedef int buf ;
struct TYPE_16__ {int * dp_xrefs; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_7__*,scalar_t__,int,int ,int,int) ;
 void* FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,TYPE_6__*,int,int) ;
 int FUNC_11 (int *,TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_12(dt_dof_t *VAR_5, const dt_xlator_t *VAR_6, uint_t VAR_7)
{
 dtrace_hdl_t *VAR_8 = VAR_5->ddo_hdl;
 dof_xlmember_t VAR_9;
 dof_xlator_t VAR_10;
 dof_secidx_t *VAR_11;

 char VAR_12[VAR_4];
 dt_node_t *VAR_13;
 uint_t VAR_14 = 0;

 FUNC_1(VAR_7 == VAR_2 || VAR_7 == VAR_1);
 VAR_11 = VAR_7 == VAR_2 ? VAR_5->ddo_xlimport : VAR_5->ddo_xlexport;

 if (VAR_11[VAR_6->dx_id] != VAR_0)
  return;

 FUNC_9(VAR_8, &VAR_5->ddo_xlms);







 for (VAR_13 = VAR_6->dx_members; VAR_13 != ((void*)0); VAR_13 = VAR_13->dn_list, VAR_14++) {
  if (VAR_7 == VAR_2) {
   if (!FUNC_0(VAR_5->ddo_pgp->dp_xrefs[VAR_6->dx_id], VAR_14))
    continue;
   VAR_9.dofxm_difo = VAR_0;
  } else {
   VAR_9.dofxm_difo = FUNC_3(VAR_5,
       VAR_6->dx_membdif[VAR_13->dn_membid]);
  }

  VAR_9.dofxm_name = FUNC_5(VAR_5, VAR_13->dn_membname);
  FUNC_11(VAR_8, VAR_13, &VAR_9.dofxm_type);

  FUNC_10(VAR_8, &VAR_5->ddo_xlms,
      &VAR_9, sizeof (VAR_9), sizeof (uint32_t));
 }

 VAR_10.dofxl_members = FUNC_4(VAR_5, ((void*)0), VAR_3,
     sizeof (uint32_t), 0, sizeof (VAR_9), FUNC_8(&VAR_5->ddo_xlms));

 FUNC_7(VAR_8, &VAR_5->ddo_ldata, &VAR_5->ddo_xlms, sizeof (uint32_t));

 VAR_10.dofxl_strtab = VAR_5->ddo_strsec;
 VAR_10.dofxl_argv = FUNC_5(VAR_5, FUNC_2(
     VAR_6->dx_src_ctfp, VAR_6->dx_src_type, VAR_12, sizeof (VAR_12)));
 VAR_10.dofxl_argc = 1;
 VAR_10.dofxl_type = FUNC_5(VAR_5, FUNC_2(
     VAR_6->dx_dst_ctfp, VAR_6->dx_dst_type, VAR_12, sizeof (VAR_12)));
 VAR_10.dofxl_attr = FUNC_6(&VAR_6->dx_souid.di_attr);

 VAR_11[VAR_6->dx_id] = FUNC_4(VAR_5, &VAR_10, VAR_7,
     sizeof (uint32_t), 0, 0, sizeof (VAR_10));
}
