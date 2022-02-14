
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int nf10bmac_mtx; int nf10bmac_media; scalar_t__ nf10bmac_rx_intrhand; int nf10bmac_rx_irq_res; int nf10bmac_tick; struct ifnet* nf10bmac_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nf10bmac_softc*) ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct nf10bmac_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct nf10bmac_softc*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_1)
{
 struct nf10bmac_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_6(VAR_1);
 FUNC_0(FUNC_13(&VAR_2->nf10bmac_mtx),
     ("%s: mutex not initialized", FUNC_5(VAR_1)));
 VAR_3 = VAR_2->nf10bmac_ifp;







 if (FUNC_7(VAR_1)) {
  FUNC_1(VAR_2);
  FUNC_14(VAR_2);
  FUNC_2(VAR_2);



  FUNC_8(VAR_3);
 }

 if (VAR_2->nf10bmac_rx_intrhand)
  FUNC_3(VAR_1, VAR_2->nf10bmac_rx_irq_res,
      VAR_2->nf10bmac_rx_intrhand);

 if (VAR_3 != ((void*)0))
  FUNC_10(VAR_3);
 FUNC_11(&VAR_2->nf10bmac_media);

 FUNC_12(&VAR_2->nf10bmac_mtx);

 return (0);
}
