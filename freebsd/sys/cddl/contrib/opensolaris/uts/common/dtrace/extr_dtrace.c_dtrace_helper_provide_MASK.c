
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_7__ {scalar_t__ dofs_type; } ;
typedef TYPE_1__ dof_sec_t ;
struct TYPE_8__ {scalar_t__ dofhp_dof; } ;
typedef TYPE_2__ dof_helper_t ;
struct TYPE_9__ {int dofh_secnum; int dofh_secsize; scalar_t__ dofh_secoff; } ;
typedef TYPE_3__ dof_hdr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(dof_helper_t *VAR_2, pid_t VAR_3)
{
 uintptr_t VAR_4 = (uintptr_t)VAR_2->dofhp_dof;
 dof_hdr_t *VAR_5 = (dof_hdr_t *)VAR_4;
 int VAR_6;

 FUNC_0(FUNC_1(&VAR_1));

 for (VAR_6 = 0; VAR_6 < VAR_5->dofh_secnum; VAR_6++) {
  dof_sec_t *VAR_7 = (dof_sec_t *)(uintptr_t)(VAR_4 +
      VAR_5->dofh_secoff + VAR_6 * VAR_5->dofh_secsize);

  if (VAR_7->dofs_type != VAR_0)
   continue;

  FUNC_3(VAR_2, VAR_7, VAR_3);
 }
 FUNC_2();
}
