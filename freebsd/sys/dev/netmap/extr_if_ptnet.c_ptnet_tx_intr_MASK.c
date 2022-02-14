
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptnet_softc {int ifp; int dev; } ;
struct TYPE_2__ {int intrs; } ;
struct ptnet_queue {int task; int taskq; int kring_id; TYPE_1__ stats; struct ptnet_softc* sc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ptnet_queue *VAR_2 = VAR_1;
 struct ptnet_softc *VAR_3 = VAR_2->sc;

 FUNC_0(FUNC_1(VAR_3->dev, "Tx interrupt #%d\n", VAR_2->kring_id));




 if (FUNC_2(VAR_3->ifp, VAR_2->kring_id) != VAR_0) {
  return;
 }





 FUNC_3(VAR_2->taskq, &VAR_2->task);
}
