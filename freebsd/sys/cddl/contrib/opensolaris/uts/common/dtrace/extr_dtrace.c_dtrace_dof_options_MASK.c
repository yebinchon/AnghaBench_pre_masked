
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int dtrace_state_t ;
struct TYPE_6__ {scalar_t__ dofs_type; int dofs_align; int dofs_entsize; size_t dofs_size; scalar_t__ dofs_offset; } ;
typedef TYPE_1__ dof_sec_t ;
struct TYPE_7__ {scalar_t__ dofo_strtab; scalar_t__ dofo_value; int dofo_option; } ;
typedef TYPE_2__ dof_optdesc_t ;
struct TYPE_8__ {int dofh_secnum; int dofh_secsize; scalar_t__ dofh_secoff; } ;
typedef TYPE_3__ dof_hdr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(dof_hdr_t *VAR_4, dtrace_state_t *VAR_5)
{
 int VAR_6, VAR_7;
 uint32_t VAR_8;
 size_t VAR_9;
 dof_optdesc_t *VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_4->dofh_secnum; VAR_6++) {
  dof_sec_t *VAR_11 = (dof_sec_t *)((uintptr_t)VAR_4 +
      (uintptr_t)VAR_4->dofh_secoff + VAR_6 * VAR_4->dofh_secsize);

  if (VAR_11->dofs_type != VAR_1)
   continue;

  if (VAR_11->dofs_align != sizeof (uint64_t)) {
   FUNC_0(VAR_4, "bad alignment in "
       "option description");
   return (VAR_3);
  }

  if ((VAR_8 = VAR_11->dofs_entsize) == 0) {
   FUNC_0(VAR_4, "zeroed option entry size");
   return (VAR_3);
  }

  if (VAR_8 < sizeof (dof_optdesc_t)) {
   FUNC_0(VAR_4, "bad option entry size");
   return (VAR_3);
  }

  for (VAR_9 = 0; VAR_9 < VAR_11->dofs_size; VAR_9 += VAR_8) {
   VAR_10 = (dof_optdesc_t *)((uintptr_t)VAR_4 +
       (uintptr_t)VAR_11->dofs_offset + VAR_9);

   if (VAR_10->dofo_strtab != VAR_0) {
    FUNC_0(VAR_4, "non-zero option string");
    return (VAR_3);
   }

   if (VAR_10->dofo_value == VAR_2) {
    FUNC_0(VAR_4, "unset option");
    return (VAR_3);
   }

   if ((VAR_7 = FUNC_1(VAR_5,
       VAR_10->dofo_option, VAR_10->dofo_value)) != 0) {
    FUNC_0(VAR_4, "rejected option");
    return (VAR_7);
   }
  }
 }

 return (0);
}
