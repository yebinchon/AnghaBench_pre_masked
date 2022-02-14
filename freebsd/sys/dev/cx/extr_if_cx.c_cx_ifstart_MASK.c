
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {TYPE_2__* if_softc; } ;
struct TYPE_5__ {TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_4__ {int * sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3 (struct ifnet *VAR_0)
{
 drv_t *VAR_1 = VAR_0->if_softc;
 bdrv_t *VAR_2 = VAR_1->board->sys;

 FUNC_0 (VAR_2);
 FUNC_2 (VAR_1);
 FUNC_1 (VAR_2);
}
