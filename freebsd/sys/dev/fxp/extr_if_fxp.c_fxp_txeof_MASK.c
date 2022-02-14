
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fxp_tx {TYPE_2__* tx_cb; int * tx_mbuf; int tx_map; struct fxp_tx* tx_next; } ;
struct TYPE_6__ {struct fxp_tx* tx_first; } ;
struct fxp_softc {scalar_t__ tx_queued; scalar_t__ watchdog_timer; int cbl_map; int cbl_tag; TYPE_3__ fxp_desc; int fxp_txmtag; int ifp; } ;
typedef int if_t ;
struct TYPE_5__ {TYPE_1__* tbd; int cb_status; } ;
struct TYPE_4__ {scalar_t__ tb_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fxp_softc *VAR_6)
{
 if_t VAR_7;
 struct fxp_tx *VAR_8;

 VAR_7 = VAR_6->ifp;
 FUNC_0(VAR_6->cbl_tag, VAR_6->cbl_map,
     VAR_0 | VAR_1);
 for (VAR_8 = VAR_6->fxp_desc.tx_first; VAR_6->tx_queued &&
     (FUNC_3(VAR_8->tx_cb->cb_status) & VAR_4) != 0;
     VAR_8 = VAR_8->tx_next) {
  if (VAR_8->tx_mbuf != ((void*)0)) {
   FUNC_0(VAR_6->fxp_txmtag, VAR_8->tx_map,
       VAR_1);
   FUNC_1(VAR_6->fxp_txmtag, VAR_8->tx_map);
   FUNC_4(VAR_8->tx_mbuf);
   VAR_8->tx_mbuf = ((void*)0);

   VAR_8->tx_cb->tbd[0].tb_addr = 0;
  }
  VAR_6->tx_queued--;
  FUNC_2(VAR_7, 0, VAR_5);
 }
 VAR_6->fxp_desc.tx_first = VAR_8;
 FUNC_0(VAR_6->cbl_tag, VAR_6->cbl_map,
     VAR_2 | VAR_3);
 if (VAR_6->tx_queued == 0)
  VAR_6->watchdog_timer = 0;
}
