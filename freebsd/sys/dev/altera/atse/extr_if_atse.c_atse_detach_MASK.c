
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct atse_softc {int xdma_rx; int xdma_tx; int xchan_rx; int xchan_tx; int atse_mtx; int * atse_miibus; int atse_tick; struct ifnet* atse_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct atse_softc*) ;
 int FUNC_1 (struct atse_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct atse_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 struct atse_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_0)
{
 struct atse_softc *VAR_1;
 struct ifnet *VAR_2;

 VAR_1 = FUNC_7(VAR_0);
 FUNC_2(FUNC_12(&VAR_1->atse_mtx), ("%s: mutex not initialized",
     FUNC_6(VAR_0)));
 VAR_2 = VAR_1->atse_ifp;


 if (FUNC_8(VAR_0)) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  FUNC_4(&VAR_1->atse_tick);
  FUNC_9(VAR_2);
 }
 if (VAR_1->atse_miibus != ((void*)0)) {
  FUNC_5(VAR_0, VAR_1->atse_miibus);
 }

 if (VAR_2 != ((void*)0)) {
  FUNC_10(VAR_2);
 }

 FUNC_11(&VAR_1->atse_mtx);

 FUNC_13(VAR_1->xchan_tx);
 FUNC_13(VAR_1->xchan_rx);
 FUNC_14(VAR_1->xdma_tx);
 FUNC_14(VAR_1->xdma_rx);

 return (0);
}
