
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_slices; } ;
typedef TYPE_1__ mxge_softc_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(mxge_softc_t *VAR_0)
{
 int VAR_1;

 if (VAR_0->num_slices > 1)
  VAR_1 = FUNC_0(VAR_0);
 else
  VAR_1 = FUNC_1(VAR_0);

 if (0 && VAR_1 == 0 && VAR_0->num_slices > 1) {
  FUNC_2(VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }
 return VAR_1;
}
