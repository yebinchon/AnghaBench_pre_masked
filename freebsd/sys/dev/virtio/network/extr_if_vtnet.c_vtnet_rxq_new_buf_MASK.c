
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_rx_nmbufs; } ;
struct vtnet_rxq {struct vtnet_softc* vtnrx_sc; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct vtnet_softc*,int ,int *) ;
 int FUNC_2 (struct vtnet_rxq*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_3(struct vtnet_rxq *VAR_1)
{
 struct vtnet_softc *VAR_2;
 struct mbuf *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->vtnrx_sc;

 VAR_3 = FUNC_1(VAR_2, VAR_2->vtnet_rx_nmbufs, ((void*)0));
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3);

 return (VAR_4);
}
