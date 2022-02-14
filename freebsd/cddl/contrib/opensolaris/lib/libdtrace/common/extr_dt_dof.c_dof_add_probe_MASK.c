
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int dtrace_hdl_t ;
struct TYPE_11__ {size_t pr_xargc; int pr_name; TYPE_2__* pr_inst; int pr_nargc; TYPE_6__* pr_mapping; TYPE_3__* pr_xargs; TYPE_3__* pr_nargs; } ;
typedef TYPE_1__ dt_probe_t ;
struct TYPE_12__ {scalar_t__ pi_noffs; scalar_t__ pi_nenoffs; int pi_rname; TYPE_6__* pi_enoffs; TYPE_6__* pi_offs; int pi_fname; struct TYPE_12__* pi_next; } ;
typedef TYPE_2__ dt_probe_instance_t ;
struct TYPE_13__ {int dn_type; int dn_ctfp; struct TYPE_13__* dn_list; } ;
typedef TYPE_3__ dt_node_t ;
typedef int dt_idhash_t ;
struct TYPE_14__ {TYPE_1__* di_data; } ;
typedef TYPE_4__ dt_ident_t ;
struct TYPE_15__ {int ddo_probes; int ddo_rels; int ddo_enoffs; int ddo_offs; int ddo_args; int ddo_strs; int * ddo_hdl; } ;
typedef TYPE_5__ dt_dof_t ;
typedef int dofr ;
typedef int dofpr ;
struct TYPE_16__ {int dofpr_nargv; int dofpr_xargv; int dofpr_argidx; size_t dofpr_xargc; int dofpr_offidx; scalar_t__ dofpr_noffs; int dofpr_enoffidx; scalar_t__ dofpr_nenoffs; int dofr_offset; scalar_t__ dofr_data; int dofr_type; void* dofr_name; void* dofpr_func; scalar_t__ dofpr_pad2; scalar_t__ dofpr_pad1; int dofpr_nargc; void* dofpr_name; scalar_t__ dofpr_addr; } ;
typedef TYPE_6__ dof_relodesc_t ;
typedef TYPE_6__ dof_probe_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 void* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_6__*,int,int) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(dt_idhash_t *VAR_2, dt_ident_t *VAR_3, void *VAR_4)
{
 dt_dof_t *VAR_5 = VAR_4;
 dtrace_hdl_t *VAR_6 = VAR_5->ddo_hdl;
 dt_probe_t *VAR_7 = VAR_3->di_data;

 dof_probe_t VAR_8;
 dof_relodesc_t VAR_9;
 dt_probe_instance_t *VAR_10;
 dt_node_t *VAR_11;

 char VAR_12[VAR_1];
 uint_t VAR_13;

 VAR_8.dofpr_addr = 0;
 VAR_8.dofpr_name = FUNC_2(VAR_5, VAR_7->pr_name);
 VAR_8.dofpr_nargv = FUNC_3(&VAR_5->ddo_strs);

 for (VAR_11 = VAR_7->pr_nargs; VAR_11 != ((void*)0); VAR_11 = VAR_11->dn_list) {
  (void) FUNC_2(VAR_5, FUNC_1(VAR_11->dn_ctfp,
      VAR_11->dn_type, VAR_12, sizeof (VAR_12)));
 }

 VAR_8.dofpr_xargv = FUNC_3(&VAR_5->ddo_strs);

 for (VAR_11 = VAR_7->pr_xargs; VAR_11 != ((void*)0); VAR_11 = VAR_11->dn_list) {
  (void) FUNC_2(VAR_5, FUNC_1(VAR_11->dn_ctfp,
      VAR_11->dn_type, VAR_12, sizeof (VAR_12)));
 }

 VAR_8.dofpr_argidx = FUNC_3(&VAR_5->ddo_args) / sizeof (uint8_t);

 for (VAR_13 = 0; VAR_13 < VAR_7->pr_xargc; VAR_13++) {
  FUNC_4(VAR_6, &VAR_5->ddo_args, &VAR_7->pr_mapping[VAR_13],
      sizeof (uint8_t), sizeof (uint8_t));
 }

 VAR_8.dofpr_nargc = VAR_7->pr_nargc;
 VAR_8.dofpr_xargc = VAR_7->pr_xargc;
 VAR_8.dofpr_pad1 = 0;
 VAR_8.dofpr_pad2 = 0;

 for (VAR_10 = VAR_7->pr_inst; VAR_10 != ((void*)0); VAR_10 = VAR_10->pi_next) {
  FUNC_5("adding probe for %s:%s\n", VAR_10->pi_fname,
      VAR_7->pr_name);

  VAR_8.dofpr_func = FUNC_2(VAR_5, VAR_10->pi_fname);






  FUNC_0(VAR_10->pi_noffs + VAR_10->pi_nenoffs > 0);

  VAR_8.dofpr_offidx =
      FUNC_3(&VAR_5->ddo_offs) / sizeof (uint32_t);
  VAR_8.dofpr_noffs = VAR_10->pi_noffs;
  FUNC_4(VAR_6, &VAR_5->ddo_offs, VAR_10->pi_offs,
      VAR_10->pi_noffs * sizeof (uint32_t), sizeof (uint32_t));

  VAR_8.dofpr_enoffidx =
      FUNC_3(&VAR_5->ddo_enoffs) / sizeof (uint32_t);
  VAR_8.dofpr_nenoffs = VAR_10->pi_nenoffs;
  FUNC_4(VAR_6, &VAR_5->ddo_enoffs, VAR_10->pi_enoffs,
      VAR_10->pi_nenoffs * sizeof (uint32_t), sizeof (uint32_t));

  VAR_9.dofr_name = FUNC_2(VAR_5, VAR_10->pi_rname);
  VAR_9.dofr_type = VAR_0;
  VAR_9.dofr_offset = FUNC_3(&VAR_5->ddo_probes);
  VAR_9.dofr_data = 0;

  FUNC_4(VAR_6, &VAR_5->ddo_rels, &VAR_9,
      sizeof (VAR_9), sizeof (uint64_t));

  FUNC_4(VAR_6, &VAR_5->ddo_probes, &VAR_8,
      sizeof (VAR_8), sizeof (uint64_t));
 }

 return (0);
}
