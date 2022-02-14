
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_br; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct vtnet_txq*,struct ifnet*) ;
 int FUNC_3 (struct vtnet_txq*,int *) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_txq *VAR_0)
{
 struct vtnet_softc *VAR_1;
 struct ifnet *VAR_2;

 VAR_1 = VAR_0->vtntx_sc;
 VAR_2 = VAR_1->vtnet_ifp;





 if (!FUNC_1(VAR_2, VAR_0->vtntx_br))
  FUNC_3(VAR_0, ((void*)0));

}
