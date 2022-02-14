
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xae_softc {int xdma_rx; int xdma_tx; int xchan_rx; int xchan_tx; int * res; int intr_cookie; int mtx; int * miibus; int xae_callout; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xae_softc*) ;
 int FUNC_2 (struct xae_softc*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 struct xae_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_0 ;
 int FUNC_14 (struct xae_softc*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_1)
{
 struct xae_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_8(VAR_1);

 FUNC_0(FUNC_13(&VAR_2->mtx), ("%s: mutex not initialized",
     FUNC_7(VAR_1)));

 VAR_3 = VAR_2->ifp;


 if (FUNC_9(VAR_1)) {
  FUNC_1(VAR_2);
  FUNC_14(VAR_2);
  FUNC_2(VAR_2);
  FUNC_5(&VAR_2->xae_callout);
  FUNC_10(VAR_3);
 }

 if (VAR_2->miibus != ((void*)0))
  FUNC_6(VAR_1, VAR_2->miibus);

 if (VAR_3 != ((void*)0))
  FUNC_11(VAR_3);

 FUNC_12(&VAR_2->mtx);

 FUNC_4(VAR_1, VAR_2->res[1], VAR_2->intr_cookie);

 FUNC_3(VAR_1, VAR_0, VAR_2->res);

 FUNC_15(VAR_2->xchan_tx);
 FUNC_15(VAR_2->xchan_rx);
 FUNC_16(VAR_2->xdma_tx);
 FUNC_16(VAR_2->xdma_rx);

 return (0);
}
