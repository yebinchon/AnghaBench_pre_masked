
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ptnet_softc {int num_rings; int num_tx_rings; TYPE_4__* ptna; struct ptnet_queue* queues; } ;
struct ptnet_queue {TYPE_3__* atok; TYPE_2__* ktoa; } ;
struct netmap_adapter {scalar_t__ active_fds; TYPE_5__* ifp; } ;
typedef TYPE_5__* if_t ;
struct TYPE_11__ {int if_capenable; } ;
struct TYPE_7__ {struct netmap_adapter up; } ;
struct TYPE_10__ {scalar_t__ backend_users; TYPE_1__ hwup; } ;
struct TYPE_9__ {int appl_need_kick; } ;
struct TYPE_8__ {int kern_need_kick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptnet_softc* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct netmap_adapter*,int) ;
 int FUNC_2 (struct netmap_adapter*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct netmap_adapter*) ;
 int FUNC_5 (struct ptnet_softc*,int ) ;
 int FUNC_6 (struct ptnet_softc*,struct netmap_adapter*) ;
 int FUNC_7 (struct ptnet_softc*) ;

__attribute__((used)) static int
FUNC_8(struct netmap_adapter *VAR_3, int VAR_4)
{

 if_t VAR_5 = VAR_3->ifp;
 struct ptnet_softc *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = (VAR_3 == &VAR_6->ptna->hwup.up);
 struct ptnet_queue *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_4) {
  VAR_6->ptna->backend_users--;
 }







 if (VAR_7 && !VAR_4 && VAR_3->active_fds == 0) {
  FUNC_3("Exit netmap mode, re-enable interrupts");
  for (VAR_10 = 0; VAR_10 < VAR_6->num_rings; VAR_10++) {
   VAR_8 = VAR_6->queues + VAR_10;
   VAR_8->atok->appl_need_kick = 1;
  }
 }

 if (VAR_4) {
  if (VAR_6->ptna->backend_users == 0) {

   for (VAR_10 = 0; VAR_10 < VAR_6->num_rings; VAR_10++) {
    VAR_8 = VAR_6->queues + VAR_10;
    VAR_8->ktoa->kern_need_kick = 1;
    VAR_8->atok->appl_need_kick =
     (!(VAR_5->if_capenable & VAR_0)
      && VAR_10 >= VAR_6->num_tx_rings);
   }


   FUNC_7(VAR_6);



   VAR_9 = FUNC_5(VAR_6, VAR_1);
   if (VAR_9) {
    return VAR_9;
   }



   FUNC_6(VAR_6, VAR_3);
  }



  if (VAR_7) {
   FUNC_1(VAR_3, VAR_4);
   FUNC_4(VAR_3);
  }

 } else {
  if (VAR_7) {
   FUNC_2(VAR_3);
   FUNC_1(VAR_3, VAR_4);
  }

  if (VAR_6->ptna->backend_users == 0) {
   VAR_9 = FUNC_5(VAR_6, VAR_2);
  }
 }

 if (VAR_4) {
  VAR_6->ptna->backend_users++;
 }

 return VAR_9;
}
