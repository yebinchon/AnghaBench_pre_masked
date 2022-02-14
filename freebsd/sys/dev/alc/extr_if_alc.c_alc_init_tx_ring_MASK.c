
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alc_txdesc {int * tx_m; } ;
struct TYPE_2__ {int alc_tx_ring_map; int alc_tx_ring_tag; struct alc_txdesc* alc_txdesc; scalar_t__ alc_tx_cnt; scalar_t__ alc_tx_cons; scalar_t__ alc_tx_prod; } ;
struct alc_ring_data {int alc_tx_ring; } ;
struct alc_softc {TYPE_1__ alc_cdata; struct alc_ring_data alc_rdata; } ;


 int FUNC_0 (struct alc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_3)
{
 struct alc_ring_data *VAR_4;
 struct alc_txdesc *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);

 VAR_3->alc_cdata.alc_tx_prod = 0;
 VAR_3->alc_cdata.alc_tx_cons = 0;
 VAR_3->alc_cdata.alc_tx_cnt = 0;

 VAR_4 = &VAR_3->alc_rdata;
 FUNC_2(VAR_4->alc_tx_ring, VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_3->alc_cdata.alc_txdesc[VAR_6];
  VAR_5->tx_m = ((void*)0);
 }

 FUNC_1(VAR_3->alc_cdata.alc_tx_ring_tag,
     VAR_3->alc_cdata.alc_tx_ring_map, VAR_2);
}
