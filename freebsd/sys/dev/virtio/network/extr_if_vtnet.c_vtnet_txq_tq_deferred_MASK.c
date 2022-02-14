
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_br; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {int vtnet_ifp; } ;


 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct vtnet_txq*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vtnet_txq*,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, int VAR_1)
{
 struct vtnet_softc *VAR_2;
 struct vtnet_txq *VAR_3;

 VAR_3 = VAR_0;
 VAR_2 = VAR_3->vtntx_sc;

 FUNC_0(VAR_3);
 if (!FUNC_2(VAR_2->vtnet_ifp, VAR_3->vtntx_br))
  FUNC_3(VAR_3, ((void*)0));
 FUNC_1(VAR_3);
}
