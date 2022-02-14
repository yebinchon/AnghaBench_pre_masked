
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct bfe_tx_data {int * bfe_mbuf; int bfe_map; } ;
struct bfe_softc {int bfe_tx_cons; scalar_t__ bfe_tx_cnt; scalar_t__ bfe_watchdog_timer; int bfe_txmbuf_tag; struct bfe_tx_data* bfe_tx_ring; int bfe_tx_map; int bfe_tx_tag; struct ifnet* bfe_ifp; } ;
struct bfe_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct bfe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bfe_softc*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bfe_softc *VAR_6)
{
 struct bfe_tx_data *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9, VAR_10;

 FUNC_1(VAR_6);

 VAR_8 = VAR_6->bfe_ifp;

 VAR_10 = FUNC_2(VAR_6, VAR_0) & VAR_1;
 VAR_10 /= sizeof(struct bfe_desc);

 VAR_9 = VAR_6->bfe_tx_cons;
 if (VAR_9 == VAR_10)
  return;
 FUNC_3(VAR_6->bfe_tx_tag, VAR_6->bfe_tx_map,
     VAR_3 | VAR_4);

 for (; VAR_9 != VAR_10; FUNC_0(VAR_9, VAR_2)) {
  VAR_7 = &VAR_6->bfe_tx_ring[VAR_9];
  VAR_6->bfe_tx_cnt--;
  if (VAR_7->bfe_mbuf == ((void*)0))
   continue;
  FUNC_3(VAR_6->bfe_txmbuf_tag, VAR_7->bfe_map,
      VAR_4);
  FUNC_4(VAR_6->bfe_txmbuf_tag, VAR_7->bfe_map);

  FUNC_5(VAR_7->bfe_mbuf);
  VAR_7->bfe_mbuf = ((void*)0);
 }

 if (VAR_9 != VAR_6->bfe_tx_cons) {

  VAR_6->bfe_tx_cons = VAR_9;
  VAR_8->if_drv_flags &= ~VAR_5;
 }

 if (VAR_6->bfe_tx_cnt == 0)
  VAR_6->bfe_watchdog_timer = 0;
}
