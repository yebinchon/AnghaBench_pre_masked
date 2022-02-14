
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct age_txdesc {int * tx_m; int tx_dmamap; TYPE_1__* tx_desc; } ;
struct TYPE_4__ {int age_tx_cons; scalar_t__ age_tx_cnt; int age_tx_ring_map; int age_tx_ring_tag; int age_tx_tag; struct age_txdesc* age_txdesc; } ;
struct age_softc {TYPE_2__ age_cdata; scalar_t__ age_watchdog_timer; struct ifnet* age_ifp; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ len; scalar_t__ addr; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct age_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct age_softc *VAR_6, int VAR_7)
{
 struct ifnet *VAR_8;
 struct age_txdesc *VAR_9;
 int VAR_10, VAR_11;

 FUNC_1(VAR_6);

 VAR_8 = VAR_6->age_ifp;

 FUNC_2(VAR_6->age_cdata.age_tx_ring_tag,
     VAR_6->age_cdata.age_tx_ring_map,
     VAR_1 | VAR_2);





 VAR_10 = VAR_6->age_cdata.age_tx_cons;
 for (VAR_11 = 0; VAR_10 != VAR_7; FUNC_0(VAR_10, VAR_0)) {
  if (VAR_6->age_cdata.age_tx_cnt <= 0)
   break;
  VAR_11++;
  VAR_8->if_drv_flags &= ~VAR_5;
  VAR_6->age_cdata.age_tx_cnt--;
  VAR_9 = &VAR_6->age_cdata.age_txdesc[VAR_10];




  VAR_9->tx_desc->addr = 0;
  VAR_9->tx_desc->len = 0;
  VAR_9->tx_desc->flags = 0;

  if (VAR_9->tx_m == ((void*)0))
   continue;

  FUNC_2(VAR_6->age_cdata.age_tx_tag, VAR_9->tx_dmamap,
      VAR_2);
  FUNC_3(VAR_6->age_cdata.age_tx_tag, VAR_9->tx_dmamap);
  FUNC_4(VAR_9->tx_m);
  VAR_9->tx_m = ((void*)0);
 }

 if (VAR_11 > 0) {
  VAR_6->age_cdata.age_tx_cons = VAR_10;





  if (VAR_6->age_cdata.age_tx_cnt == 0)
   VAR_6->age_watchdog_timer = 0;
  FUNC_2(VAR_6->age_cdata.age_tx_ring_tag,
      VAR_6->age_cdata.age_tx_ring_map,
      VAR_3 | VAR_4);
 }
}
