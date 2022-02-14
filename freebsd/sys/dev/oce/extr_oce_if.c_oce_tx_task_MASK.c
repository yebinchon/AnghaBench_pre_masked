
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oce_wq {int tx_lock; int queue_index; TYPE_1__* parent; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int dev; struct ifnet* ifp; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct ifnet*,int *,struct oce_wq*) ;
 int FUNC_4 (struct ifnet*) ;

void
FUNC_5(void *VAR_0, int VAR_1)
{
 struct oce_wq *VAR_2 = VAR_0;
 POCE_SOFTC VAR_3 = VAR_2->parent;
 struct ifnet *VAR_4 = VAR_3->ifp;
 int VAR_5 = 0;
 FUNC_4(VAR_4);


}
