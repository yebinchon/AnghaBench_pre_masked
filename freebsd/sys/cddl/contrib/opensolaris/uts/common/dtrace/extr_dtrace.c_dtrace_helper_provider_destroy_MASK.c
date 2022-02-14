
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dofhp_dof; } ;
struct TYPE_6__ {scalar_t__ dthp_ref; TYPE_1__ dthp_prov; } ;
typedef TYPE_2__ dtrace_helper_provider_t ;
typedef int dof_hdr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(dtrace_helper_provider_t *VAR_1)
{
 FUNC_2(&VAR_0);

 if (--VAR_1->dthp_ref == 0) {
  dof_hdr_t *VAR_2;
  FUNC_3(&VAR_0);
  VAR_2 = (dof_hdr_t *)(uintptr_t)VAR_1->dthp_prov.dofhp_dof;
  FUNC_0(VAR_2);
  FUNC_1(VAR_1, sizeof (dtrace_helper_provider_t));
 } else {
  FUNC_3(&VAR_0);
 }
}
