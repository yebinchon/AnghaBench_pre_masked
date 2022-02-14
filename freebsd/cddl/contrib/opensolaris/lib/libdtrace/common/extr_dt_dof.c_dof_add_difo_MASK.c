
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int dtrace_difv_t ;
typedef int dtrace_diftype_t ;
struct TYPE_17__ {int dtdo_len; int dtdo_intlen; int dtdo_strlen; int dtdo_varlen; int dtdo_xlmlen; void* dtdo_rtype; int dtdo_krelen; int dtdo_urelen; TYPE_7__* dtdo_ureltab; TYPE_7__* dtdo_kreltab; TYPE_5__** dtdo_xlmtab; TYPE_7__* dtdo_vartab; TYPE_7__* dtdo_strtab; TYPE_7__* dtdo_inttab; TYPE_7__* dtdo_buf; } ;
typedef TYPE_3__ dtrace_difo_t ;
struct TYPE_18__ {size_t dx_id; scalar_t__ dx_arg; } ;
typedef TYPE_4__ dt_xlator_t ;
struct TYPE_19__ {int dn_membid; TYPE_1__* dn_membexpr; } ;
typedef TYPE_5__ dt_node_t ;
struct TYPE_20__ {TYPE_2__* ddo_pgp; int * ddo_xlimport; } ;
typedef TYPE_6__ dt_dof_t ;
typedef int dsecs ;
struct TYPE_21__ {void* dofr_tgtsec; void* dofr_relsec; void* dofr_strtab; int dofd_links; int dofd_rtype; scalar_t__ dofxr_argn; int dofxr_member; int dofxr_xlator; } ;
typedef TYPE_7__ dof_xlref_t ;
typedef void* dof_secidx_t ;
typedef TYPE_7__ dof_relohdr_t ;
typedef int dof_relodesc_t ;
typedef TYPE_7__ dof_difohdr_t ;
typedef int dif_instr_t ;
struct TYPE_16__ {int * dp_xrefs; } ;
struct TYPE_15__ {TYPE_4__* dn_xlator; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_7__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void**,int *,int) ;
 void* FUNC_3 (TYPE_6__*,TYPE_7__*,int ,int,int ,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static dof_secidx_t
FUNC_5(dt_dof_t *VAR_10, const dtrace_difo_t *VAR_11)
{
 dof_secidx_t VAR_12[5];
 uint_t VAR_13 = 0;

 dof_difohdr_t *VAR_14;
 dof_relohdr_t VAR_15;
 dof_secidx_t VAR_16;

 dof_secidx_t VAR_17 = VAR_0;
 dof_secidx_t VAR_18 = VAR_0;
 dof_secidx_t VAR_19 = VAR_0;

 if (VAR_11->dtdo_buf != ((void*)0)) {
  VAR_12[VAR_13++] = FUNC_3(VAR_10, VAR_11->dtdo_buf,
      VAR_1, sizeof (dif_instr_t), 0,
      sizeof (dif_instr_t), sizeof (dif_instr_t) * VAR_11->dtdo_len);
 }

 if (VAR_11->dtdo_inttab != ((void*)0)) {
  VAR_12[VAR_13++] = VAR_18 = FUNC_3(VAR_10, VAR_11->dtdo_inttab,
      VAR_3, sizeof (uint64_t), 0,
      sizeof (uint64_t), sizeof (uint64_t) * VAR_11->dtdo_intlen);
 }

 if (VAR_11->dtdo_strtab != ((void*)0)) {
  VAR_12[VAR_13++] = VAR_17 = FUNC_3(VAR_10, VAR_11->dtdo_strtab,
      VAR_6, sizeof (char), 0, 0, VAR_11->dtdo_strlen);
 }

 if (VAR_11->dtdo_vartab != ((void*)0)) {
  VAR_12[VAR_13++] = FUNC_3(VAR_10, VAR_11->dtdo_vartab,
      VAR_8, sizeof (uint_t), 0, sizeof (dtrace_difv_t),
      sizeof (dtrace_difv_t) * VAR_11->dtdo_varlen);
 }

 if (VAR_11->dtdo_xlmtab != ((void*)0)) {
  dof_xlref_t *VAR_20, *VAR_21;
  dt_node_t **VAR_22;

  VAR_20 = FUNC_0(sizeof (dof_xlref_t) * VAR_11->dtdo_xlmlen);
  VAR_22 = VAR_11->dtdo_xlmtab;
  for (VAR_21 = VAR_20; VAR_21 < VAR_20 + VAR_11->dtdo_xlmlen; VAR_21++) {
   dt_node_t *VAR_23 = *VAR_22++;
   dt_xlator_t *VAR_24 = VAR_23->dn_membexpr->dn_xlator;

   VAR_21->dofxr_xlator = VAR_10->ddo_xlimport[VAR_24->dx_id];
   VAR_21->dofxr_member = FUNC_4(
       VAR_10->ddo_pgp->dp_xrefs[VAR_24->dx_id], VAR_23->dn_membid);
   VAR_21->dofxr_argn = (uint32_t)VAR_24->dx_arg;
  }

  VAR_12[VAR_13++] = FUNC_3(VAR_10, VAR_20, VAR_9,
      sizeof (dof_secidx_t), 0, sizeof (dof_xlref_t),
      sizeof (dof_xlref_t) * VAR_11->dtdo_xlmlen);
 }





 FUNC_1(VAR_13 <= sizeof (VAR_12) / sizeof (VAR_12[0]));
 VAR_14 = FUNC_0(sizeof (dtrace_diftype_t) + sizeof (VAR_12));
 FUNC_2(&VAR_11->dtdo_rtype, &VAR_14->dofd_rtype, sizeof (dtrace_diftype_t));
 FUNC_2(VAR_12, &VAR_14->dofd_links, sizeof (dof_secidx_t) * VAR_13);

 VAR_19 = FUNC_3(VAR_10, VAR_14, VAR_2,
     sizeof (dof_secidx_t), 0, 0,
     sizeof (dtrace_diftype_t) + sizeof (dof_secidx_t) * VAR_13);





 if (VAR_11->dtdo_kreltab != ((void*)0)) {
  VAR_16 = FUNC_3(VAR_10, VAR_11->dtdo_kreltab, VAR_5,
      sizeof (uint64_t), 0, sizeof (dof_relodesc_t),
      sizeof (dof_relodesc_t) * VAR_11->dtdo_krelen);






  VAR_15.dofr_strtab = VAR_17;
  VAR_15.dofr_relsec = VAR_16;
  VAR_15.dofr_tgtsec = VAR_18;

  (void) FUNC_3(VAR_10, &VAR_15, VAR_4,
      sizeof (dof_secidx_t), 0, 0, sizeof (dof_relohdr_t));
 }

 if (VAR_11->dtdo_ureltab != ((void*)0)) {
  VAR_16 = FUNC_3(VAR_10, VAR_11->dtdo_ureltab, VAR_5,
      sizeof (uint64_t), 0, sizeof (dof_relodesc_t),
      sizeof (dof_relodesc_t) * VAR_11->dtdo_urelen);






  VAR_15.dofr_strtab = VAR_17;
  VAR_15.dofr_relsec = VAR_16;
  VAR_15.dofr_tgtsec = VAR_18;

  (void) FUNC_3(VAR_10, &VAR_15, VAR_7,
      sizeof (dof_secidx_t), 0, 0, sizeof (dof_relohdr_t));
 }

 return (VAR_19);
}
