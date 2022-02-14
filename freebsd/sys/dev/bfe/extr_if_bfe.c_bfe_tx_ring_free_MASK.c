
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfe_softc {int bfe_tx_map; int bfe_tx_tag; int bfe_tx_list; TYPE_1__* bfe_tx_ring; int bfe_txmbuf_tag; } ;
struct TYPE_2__ {int * bfe_mbuf; int bfe_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bfe_softc *VAR_5)
{
 int VAR_6;

 for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->bfe_tx_ring[VAR_6].bfe_mbuf != ((void*)0)) {
   FUNC_0(VAR_5->bfe_txmbuf_tag,
       VAR_5->bfe_tx_ring[VAR_6].bfe_map, VAR_2);
   FUNC_1(VAR_5->bfe_txmbuf_tag,
       VAR_5->bfe_tx_ring[VAR_6].bfe_map);
   FUNC_3(VAR_5->bfe_tx_ring[VAR_6].bfe_mbuf);
   VAR_5->bfe_tx_ring[VAR_6].bfe_mbuf = ((void*)0);
  }
 }
 FUNC_2(VAR_5->bfe_tx_list, VAR_1);
 FUNC_0(VAR_5->bfe_tx_tag, VAR_5->bfe_tx_map,
     VAR_3 | VAR_4);
}
