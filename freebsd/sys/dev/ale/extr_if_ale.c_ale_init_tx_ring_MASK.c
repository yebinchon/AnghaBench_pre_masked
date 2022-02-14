
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ale_txdesc {int * tx_m; } ;
struct TYPE_2__ {int ale_tx_ring_map; int ale_tx_ring_tag; int ale_tx_cmb_map; int ale_tx_cmb_tag; scalar_t__* ale_tx_cmb; struct ale_txdesc* ale_txdesc; scalar_t__* ale_tx_ring; scalar_t__ ale_tx_cnt; scalar_t__ ale_tx_cons; scalar_t__ ale_tx_prod; } ;
struct ale_softc {TYPE_1__ ale_cdata; } ;


 int FUNC_0 (struct ale_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ale_softc *VAR_5)
{
 struct ale_txdesc *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);

 VAR_5->ale_cdata.ale_tx_prod = 0;
 VAR_5->ale_cdata.ale_tx_cons = 0;
 VAR_5->ale_cdata.ale_tx_cnt = 0;

 FUNC_2(VAR_5->ale_cdata.ale_tx_ring, VAR_2);
 FUNC_2(VAR_5->ale_cdata.ale_tx_cmb, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->ale_cdata.ale_txdesc[VAR_7];
  VAR_6->tx_m = ((void*)0);
 }
 *VAR_5->ale_cdata.ale_tx_cmb = 0;
 FUNC_1(VAR_5->ale_cdata.ale_tx_cmb_tag,
     VAR_5->ale_cdata.ale_tx_cmb_map,
     VAR_3 | VAR_4);
 FUNC_1(VAR_5->ale_cdata.ale_tx_ring_tag,
     VAR_5->ale_cdata.ale_tx_ring_map,
     VAR_3 | VAR_4);
}
