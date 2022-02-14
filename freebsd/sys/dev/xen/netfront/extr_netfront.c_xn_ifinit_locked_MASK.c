
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsp_cons; TYPE_1__* sring; } ;
struct netfront_rxq {TYPE_2__ ring; } ;
struct netfront_info {int num_queues; struct netfront_rxq* rxq; struct ifnet* xn_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_3__ {scalar_t__ rsp_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct netfront_info*) ;
 int FUNC_2 (struct netfront_rxq*) ;
 int FUNC_3 (struct netfront_rxq*) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct netfront_info*) ;
 int FUNC_6 (struct netfront_rxq*) ;
 int FUNC_7 (struct netfront_rxq*) ;
 int FUNC_8 (struct netfront_info*) ;

__attribute__((used)) static void
FUNC_9(struct netfront_info *VAR_3)
{
 struct ifnet *VAR_4;
 int VAR_5;
 struct netfront_rxq *VAR_6;

 FUNC_1(VAR_3);

 VAR_4 = VAR_3->xn_ifp;

 if (VAR_4->if_drv_flags & VAR_1 || !FUNC_5(VAR_3))
  return;

 FUNC_8(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_queues; VAR_5++) {
  VAR_6 = &VAR_3->rxq[VAR_5];
  FUNC_2(VAR_6);
  FUNC_6(VAR_6);
  VAR_6->ring.sring->rsp_event = VAR_6->ring.rsp_cons + 1;
  if (FUNC_0(&VAR_6->ring))
   FUNC_7(VAR_6);
  FUNC_3(VAR_6);
 }

 VAR_4->if_drv_flags |= VAR_1;
 VAR_4->if_drv_flags &= ~VAR_0;
 FUNC_4(VAR_4, VAR_2);
}
