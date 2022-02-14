
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mxge_slice_state {int * sysctl_tree; int sysctl_ctx; } ;
struct TYPE_3__ {int num_slices; int * slice_sysctl_tree; int slice_sysctl_ctx; struct mxge_slice_state* ss; } ;
typedef TYPE_1__ mxge_softc_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(mxge_softc_t *VAR_0)
{
 struct mxge_slice_state *VAR_1;
 int VAR_2;

 if (VAR_0->slice_sysctl_tree == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_slices; VAR_2++) {
  VAR_1 = &VAR_0->ss[VAR_2];
  if (VAR_1 == ((void*)0) || VAR_1->sysctl_tree == ((void*)0))
   continue;
  FUNC_0(&VAR_1->sysctl_ctx);
  VAR_1->sysctl_tree = ((void*)0);
 }
 FUNC_0(&VAR_0->slice_sysctl_ctx);
 VAR_0->slice_sysctl_tree = ((void*)0);
}
