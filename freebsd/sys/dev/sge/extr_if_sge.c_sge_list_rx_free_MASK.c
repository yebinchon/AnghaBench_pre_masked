
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_chain_data {int sge_rxmbuf_tag; struct sge_rxdesc* sge_rxdesc; } ;
struct sge_softc {struct sge_chain_data sge_cdata; } ;
struct sge_rxdesc {int * rx_m; int rx_dmamap; } ;


 int VAR_0 ;
 int FUNC_0 (struct sge_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct sge_softc *VAR_2)
{
 struct sge_chain_data *VAR_3;
 struct sge_rxdesc *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);
 VAR_3 = &VAR_2->sge_cdata;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->sge_rxdesc[VAR_5];
  if (VAR_4->rx_m != ((void*)0)) {
   FUNC_1(VAR_3->sge_rxmbuf_tag, VAR_4->rx_dmamap,
       VAR_0);
   FUNC_2(VAR_3->sge_rxmbuf_tag,
       VAR_4->rx_dmamap);
   FUNC_3(VAR_4->rx_m);
   VAR_4->rx_m = ((void*)0);
  }
 }
 return (0);
}
