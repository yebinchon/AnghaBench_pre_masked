
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int pid_t ;
struct TYPE_14__ {int (* dtms_create_probe ) (int ,void*,TYPE_3__*) ;void* (* dtms_provide_pid ) (int ,int *,int ) ;} ;
typedef TYPE_1__ dtrace_mops_t ;
struct TYPE_15__ {int dtm_arg; int dtm_count; TYPE_1__ dtm_mops; } ;
typedef TYPE_2__ dtrace_meta_t ;
typedef int dtrace_helper_provdesc_t ;
struct TYPE_16__ {char* dthpb_func; char* dthpb_name; char* dthpb_ntypes; char* dthpb_xtypes; int dthpb_xargc; int dthpb_nargc; int * dthpb_args; scalar_t__ dthpb_nenoffs; int * dthpb_enoffs; int dthpb_noffs; int * dthpb_offs; int dthpb_base; int dthpb_mod; } ;
typedef TYPE_3__ dtrace_helper_probedesc_t ;
struct TYPE_17__ {int dofs_size; int dofs_entsize; scalar_t__ dofs_offset; } ;
typedef TYPE_4__ dof_sec_t ;
struct TYPE_18__ {int dofpv_strtab; int dofpv_probes; int dofpv_prargs; int dofpv_proffs; int dofpv_prenoffs; } ;
typedef TYPE_5__ dof_provider_t ;
struct TYPE_19__ {int dofpr_func; int dofpr_name; int dofpr_offidx; int dofpr_enoffidx; int dofpr_argidx; int dofpr_nargv; int dofpr_xargv; int dofpr_xargc; int dofpr_nargc; scalar_t__ dofpr_nenoffs; int dofpr_noffs; int dofpr_addr; } ;
typedef TYPE_6__ dof_probe_t ;
struct TYPE_20__ {int dofhp_mod; scalar_t__ dofhp_dof; } ;
typedef TYPE_7__ dof_helper_t ;
struct TYPE_21__ {int dofh_secsize; scalar_t__* dofh_ident; scalar_t__ dofh_secoff; } ;
typedef TYPE_8__ dof_hdr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_5__*,char*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 void* FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,void*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(dof_helper_t *VAR_5, dof_sec_t *VAR_6, pid_t VAR_7)
{
 uintptr_t VAR_8 = (uintptr_t)VAR_5->dofhp_dof;
 dof_hdr_t *VAR_9 = (dof_hdr_t *)VAR_8;
 dof_sec_t *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 dof_provider_t *VAR_15;
 dof_probe_t *VAR_16;
 uint32_t *VAR_17, *VAR_18;
 uint8_t *VAR_19;
 char *VAR_20;
 uint_t VAR_21, VAR_22;
 dtrace_helper_provdesc_t VAR_23;
 dtrace_helper_probedesc_t VAR_24;
 dtrace_meta_t *VAR_25 = VAR_4;
 dtrace_mops_t *VAR_26 = &VAR_25->dtm_mops;
 void *VAR_27;

 VAR_15 = (dof_provider_t *)(uintptr_t)(VAR_8 + VAR_6->dofs_offset);
 VAR_10 = (dof_sec_t *)(uintptr_t)(VAR_8 + VAR_9->dofh_secoff +
     VAR_15->dofpv_strtab * VAR_9->dofh_secsize);
 VAR_11 = (dof_sec_t *)(uintptr_t)(VAR_8 + VAR_9->dofh_secoff +
     VAR_15->dofpv_probes * VAR_9->dofh_secsize);
 VAR_12 = (dof_sec_t *)(uintptr_t)(VAR_8 + VAR_9->dofh_secoff +
     VAR_15->dofpv_prargs * VAR_9->dofh_secsize);
 VAR_13 = (dof_sec_t *)(uintptr_t)(VAR_8 + VAR_9->dofh_secoff +
     VAR_15->dofpv_proffs * VAR_9->dofh_secsize);

 VAR_20 = (char *)(uintptr_t)(VAR_8 + VAR_10->dofs_offset);
 VAR_17 = (uint32_t *)(uintptr_t)(VAR_8 + VAR_13->dofs_offset);
 VAR_19 = (uint8_t *)(uintptr_t)(VAR_8 + VAR_12->dofs_offset);
 VAR_18 = ((void*)0);




 if (VAR_9->dofh_ident[VAR_0] != VAR_2 &&
     VAR_15->dofpv_prenoffs != VAR_1) {
  VAR_14 = (dof_sec_t *)(uintptr_t)(VAR_8 + VAR_9->dofh_secoff +
      VAR_15->dofpv_prenoffs * VAR_9->dofh_secsize);
  VAR_18 = (uint32_t *)(uintptr_t)(VAR_8 + VAR_14->dofs_offset);
 }

 VAR_22 = VAR_11->dofs_size / VAR_11->dofs_entsize;




 FUNC_0(&VAR_23, VAR_15, VAR_20);

 if ((VAR_27 = VAR_26->dtms_provide_pid(VAR_25->dtm_arg, &VAR_23, VAR_7)) == ((void*)0))
  return;

 VAR_25->dtm_count++;




 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  VAR_16 = (dof_probe_t *)(uintptr_t)(VAR_8 +
      VAR_11->dofs_offset + VAR_21 * VAR_11->dofs_entsize);


  if (FUNC_1(VAR_20 + VAR_16->dofpr_func) >= VAR_3)
   continue;

  VAR_24.dthpb_mod = VAR_5->dofhp_mod;
  VAR_24.dthpb_func = VAR_20 + VAR_16->dofpr_func;
  VAR_24.dthpb_name = VAR_20 + VAR_16->dofpr_name;
  VAR_24.dthpb_base = VAR_16->dofpr_addr;
  VAR_24.dthpb_offs = VAR_17 + VAR_16->dofpr_offidx;
  VAR_24.dthpb_noffs = VAR_16->dofpr_noffs;
  if (VAR_18 != ((void*)0)) {
   VAR_24.dthpb_enoffs = VAR_18 + VAR_16->dofpr_enoffidx;
   VAR_24.dthpb_nenoffs = VAR_16->dofpr_nenoffs;
  } else {
   VAR_24.dthpb_enoffs = ((void*)0);
   VAR_24.dthpb_nenoffs = 0;
  }
  VAR_24.dthpb_args = VAR_19 + VAR_16->dofpr_argidx;
  VAR_24.dthpb_nargc = VAR_16->dofpr_nargc;
  VAR_24.dthpb_xargc = VAR_16->dofpr_xargc;
  VAR_24.dthpb_ntypes = VAR_20 + VAR_16->dofpr_nargv;
  VAR_24.dthpb_xtypes = VAR_20 + VAR_16->dofpr_xargv;

  VAR_26->dtms_create_probe(VAR_25->dtm_arg, VAR_27, &VAR_24);
 }
}
