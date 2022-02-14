
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptnet_softc {struct ptnet_queue* queues; } ;
struct ptnet_queue {int ktoa; int atok; } ;
struct netmap_kring {int ring_id; TYPE_1__* na; } ;
struct TYPE_2__ {int ifp; } ;


 struct ptnet_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct netmap_kring*,int) ;
 int FUNC_2 (struct ptnet_queue*) ;

__attribute__((used)) static int
FUNC_3(struct netmap_kring *VAR_0, int VAR_1)
{
 struct ptnet_softc *VAR_2 = FUNC_0(VAR_0->na->ifp);
 struct ptnet_queue *VAR_3 = VAR_2->queues + VAR_0->ring_id;
 bool VAR_4;

 VAR_4 = FUNC_1(VAR_3->atok, VAR_3->ktoa, VAR_0, VAR_1);
 if (VAR_4) {
  FUNC_2(VAR_3);
 }

 return 0;
}
