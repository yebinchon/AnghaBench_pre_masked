
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {TYPE_1__* if_softc; } ;
struct TYPE_3__ {int * bd; } ;
typedef TYPE_1__ drv_t ;
typedef int bdrv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3 (struct ifnet *VAR_0)
{
 drv_t *VAR_1 = VAR_0->if_softc;
 bdrv_t *VAR_2 = VAR_1->bd;

 FUNC_0 (VAR_2);
 FUNC_2 (VAR_1);
 FUNC_1 (VAR_2);
}
