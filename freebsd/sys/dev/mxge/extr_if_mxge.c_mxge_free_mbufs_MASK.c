
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_slices; int * ss; } ;
typedef TYPE_1__ mxge_softc_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(mxge_softc_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_slices; VAR_1++)
  FUNC_0(&VAR_0->ss[VAR_1]);
}
