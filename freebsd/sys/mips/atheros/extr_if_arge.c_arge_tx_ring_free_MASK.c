
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arge_txdesc {int * tx_m; scalar_t__ tx_dmamap; } ;
struct TYPE_2__ {int arge_tx_tag; struct arge_txdesc* arge_txdesc; } ;
struct arge_softc {TYPE_1__ arge_cdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct arge_softc *VAR_2)
{
 struct arge_txdesc *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->arge_cdata.arge_txdesc[VAR_4];
  if (VAR_3->tx_dmamap) {
   FUNC_0(VAR_2->arge_cdata.arge_tx_tag,
       VAR_3->tx_dmamap, VAR_1);
   FUNC_1(VAR_2->arge_cdata.arge_tx_tag,
       VAR_3->tx_dmamap);
  }
  if (VAR_3->tx_m)
   FUNC_2(VAR_3->tx_m);
  VAR_3->tx_m = ((void*)0);
 }
}
