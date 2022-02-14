
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct age_txdesc {int * tx_m; int * tx_desc; } ;
struct TYPE_2__ {int age_tx_ring_map; int age_tx_ring_tag; struct age_txdesc* age_txdesc; scalar_t__ age_tx_cnt; scalar_t__ age_tx_cons; scalar_t__ age_tx_prod; } ;
struct age_ring_data {int * age_tx_ring; } ;
struct age_softc {TYPE_1__ age_cdata; struct age_ring_data age_rdata; } ;


 int FUNC_0 (struct age_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct age_softc *VAR_4)
{
 struct age_ring_data *VAR_5;
 struct age_txdesc *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 VAR_4->age_cdata.age_tx_prod = 0;
 VAR_4->age_cdata.age_tx_cons = 0;
 VAR_4->age_cdata.age_tx_cnt = 0;

 VAR_5 = &VAR_4->age_rdata;
 FUNC_2(VAR_5->age_tx_ring, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->age_cdata.age_txdesc[VAR_7];
  VAR_6->tx_desc = &VAR_5->age_tx_ring[VAR_7];
  VAR_6->tx_m = ((void*)0);
 }

 FUNC_1(VAR_4->age_cdata.age_tx_ring_tag,
     VAR_4->age_cdata.age_tx_ring_map,
     VAR_2 | VAR_3);
}
