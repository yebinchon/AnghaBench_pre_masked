
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_pf {int num_vfs; int * vfs; } ;


 int FUNC_0 (struct ixl_pf*,int *) ;

void
FUNC_1(struct ixl_pf *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_vfs; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->vfs[VAR_1]);
}
