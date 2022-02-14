
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptnet_softc {int ifp; int dev; } ;
struct TYPE_2__ {int intrs; } ;
struct ptnet_queue {int kring_id; TYPE_1__ stats; struct ptnet_softc* sc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (struct ptnet_queue*,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct ptnet_queue *VAR_3 = VAR_2;
 struct ptnet_softc *VAR_4 = VAR_3->sc;
 unsigned int VAR_5;

 FUNC_0(FUNC_1(VAR_4->dev, "Rx interrupt #%d\n", VAR_3->kring_id));




 if (FUNC_2(VAR_4->ifp, VAR_3->kring_id, &VAR_5) != VAR_0) {
  return;
 }




 FUNC_3(VAR_3, VAR_1, 1);
}
