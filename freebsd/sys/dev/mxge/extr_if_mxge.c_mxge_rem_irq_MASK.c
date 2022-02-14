
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_slices; } ;
typedef TYPE_1__ mxge_softc_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(mxge_softc_t *VAR_0)
{
 if (VAR_0->num_slices > 1)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
