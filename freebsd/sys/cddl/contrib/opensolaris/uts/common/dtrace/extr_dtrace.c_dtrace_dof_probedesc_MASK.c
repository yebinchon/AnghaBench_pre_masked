
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
typedef int dof_secidx_t ;
struct TYPE_13__ {scalar_t__ dofs_type; int dofs_align; scalar_t__ dofs_offset; size_t dofs_size; } ;
typedef TYPE_2__ dof_sec_t ;
struct TYPE_14__ {size_t dofp_provider; size_t dofp_mod; size_t dofp_func; size_t dofp_name; int dofp_strtab; } ;
typedef TYPE_3__ dof_probedesc_t ;
struct TYPE_15__ {scalar_t__ dofh_loadsz; } ;
typedef TYPE_4__ dof_hdr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static dtrace_probedesc_t *
FUNC_4(dof_hdr_t *VAR_6, dof_sec_t *VAR_7, dtrace_probedesc_t *VAR_8)
{
 dof_probedesc_t *VAR_9;
 dof_sec_t *VAR_10;
 uintptr_t VAR_11 = (uintptr_t)VAR_6;
 uintptr_t VAR_12;
 size_t VAR_13;

 if (VAR_7->dofs_type != VAR_0) {
  FUNC_1(VAR_6, "invalid probe section");
  return (((void*)0));
 }

 if (VAR_7->dofs_align != sizeof (dof_secidx_t)) {
  FUNC_1(VAR_6, "bad alignment in probe description");
  return (((void*)0));
 }

 if (VAR_7->dofs_offset + sizeof (dof_probedesc_t) > VAR_6->dofh_loadsz) {
  FUNC_1(VAR_6, "truncated probe description");
  return (((void*)0));
 }

 VAR_9 = (dof_probedesc_t *)(uintptr_t)(VAR_11 + VAR_7->dofs_offset);
 VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_9->dofp_strtab);

 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_12 = VAR_11 + VAR_10->dofs_offset;
 VAR_13 = VAR_10->dofs_size;

 if (VAR_9->dofp_provider >= VAR_10->dofs_size) {
  FUNC_1(VAR_6, "corrupt probe provider");
  return (((void*)0));
 }

 (void) FUNC_3(VAR_8->dtpd_provider,
     (char *)(VAR_12 + VAR_9->dofp_provider),
     FUNC_0(VAR_5 - 1, VAR_13 - VAR_9->dofp_provider));

 if (VAR_9->dofp_mod >= VAR_10->dofs_size) {
  FUNC_1(VAR_6, "corrupt probe module");
  return (((void*)0));
 }

 (void) FUNC_3(VAR_8->dtpd_mod, (char *)(VAR_12 + VAR_9->dofp_mod),
     FUNC_0(VAR_3 - 1, VAR_13 - VAR_9->dofp_mod));

 if (VAR_9->dofp_func >= VAR_10->dofs_size) {
  FUNC_1(VAR_6, "corrupt probe function");
  return (((void*)0));
 }

 (void) FUNC_3(VAR_8->dtpd_func, (char *)(VAR_12 + VAR_9->dofp_func),
     FUNC_0(VAR_2 - 1, VAR_13 - VAR_9->dofp_func));

 if (VAR_9->dofp_name >= VAR_10->dofs_size) {
  FUNC_1(VAR_6, "corrupt probe name");
  return (((void*)0));
 }

 (void) FUNC_3(VAR_8->dtpd_name, (char *)(VAR_12 + VAR_9->dofp_name),
     FUNC_0(VAR_4 - 1, VAR_13 - VAR_9->dofp_name));

 return (VAR_8);
}
