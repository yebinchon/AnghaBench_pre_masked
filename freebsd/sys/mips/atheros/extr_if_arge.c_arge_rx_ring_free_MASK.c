
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arge_rx_tag; struct arge_rxdesc* arge_rxdesc; } ;
struct arge_softc {TYPE_1__ arge_cdata; } ;
struct arge_rxdesc {int * rx_m; int rx_dmamap; } ;


 int FUNC_0 (struct arge_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct arge_softc *VAR_1)
{
 int VAR_2;
 struct arge_rxdesc *VAR_3;

 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = &VAR_1->arge_cdata.arge_rxdesc[VAR_2];

  if (VAR_3->rx_m != ((void*)0)) {
   FUNC_1(VAR_1->arge_cdata.arge_rx_tag,
       VAR_3->rx_dmamap);
   FUNC_2(VAR_3->rx_m);
   VAR_3->rx_m = ((void*)0);
  }
 }
}
