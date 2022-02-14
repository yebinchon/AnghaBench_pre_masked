
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fxp_tx {TYPE_3__* tx_cb; int * tx_mbuf; int tx_map; } ;
struct TYPE_4__ {struct fxp_tx* tx_list; } ;
struct fxp_softc {scalar_t__ tx_queued; int cbl_map; int cbl_tag; int fxp_txmtag; TYPE_1__ fxp_desc; int stat_ch; scalar_t__ watchdog_timer; int ifp; } ;
typedef int if_t ;
struct TYPE_6__ {TYPE_2__* tbd; } ;
struct TYPE_5__ {scalar_t__ tb_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fxp_softc*,int ,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fxp_softc*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct fxp_softc *VAR_10)
{
 if_t VAR_11 = VAR_10->ifp;
 struct fxp_tx *VAR_12;
 int VAR_13;

 FUNC_7(VAR_11, 0, (VAR_9 | VAR_8));
 VAR_10->watchdog_timer = 0;




 FUNC_5(&VAR_10->stat_ch);





 FUNC_1(VAR_10, VAR_3, VAR_6);
 FUNC_2(50);

 FUNC_0(VAR_10, VAR_4, VAR_7);

 FUNC_6(VAR_10);




 VAR_12 = VAR_10->fxp_desc.tx_list;
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  if (VAR_12[VAR_13].tx_mbuf != ((void*)0)) {
   FUNC_3(VAR_10->fxp_txmtag, VAR_12[VAR_13].tx_map,
       VAR_0);
   FUNC_4(VAR_10->fxp_txmtag, VAR_12[VAR_13].tx_map);
   FUNC_8(VAR_12[VAR_13].tx_mbuf);
   VAR_12[VAR_13].tx_mbuf = ((void*)0);

   VAR_12[VAR_13].tx_cb->tbd[0].tb_addr = 0;
  }
 }
 FUNC_3(VAR_10->cbl_tag, VAR_10->cbl_map,
     VAR_1 | VAR_2);
 VAR_10->tx_queued = 0;
}
