
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gem_softc {int sc_rdmatag; struct gem_rxsoft* sc_rxsoft; } ;
struct gem_rxsoft {int * rxs_mbuf; int rxs_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct gem_softc *VAR_2)
{
 struct gem_rxsoft *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->sc_rxsoft[VAR_4];
  if (VAR_3->rxs_mbuf != ((void*)0)) {
   FUNC_0(VAR_2->sc_rdmatag, VAR_3->rxs_dmamap,
       VAR_0);
   FUNC_1(VAR_2->sc_rdmatag, VAR_3->rxs_dmamap);
   FUNC_2(VAR_3->rxs_mbuf);
   VAR_3->rxs_mbuf = ((void*)0);
  }
 }
}
