
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct dme_softc {scalar_t__ dme_vcc_regulator; int dme_mtx; scalar_t__ dme_res; scalar_t__ dme_irq; scalar_t__ dme_intrhand; scalar_t__ dme_miibus; int dme_tick_ch; struct ifnet* dme_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct dme_softc*) ;
 int FUNC_1 (struct dme_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 struct dme_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct dme_softc*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_2)
{
 struct dme_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_2(FUNC_14(&VAR_3->dme_mtx), ("dme mutex not initialized"));

 VAR_4 = VAR_3->dme_ifp;

 if (FUNC_9(VAR_2)) {
  FUNC_0(VAR_3);
  FUNC_10(VAR_3);
  FUNC_1(VAR_3);
  FUNC_11(VAR_4);
  FUNC_6(&VAR_3->dme_tick_ch);
 }

 if (VAR_3->dme_miibus)
  FUNC_7(VAR_2, VAR_3->dme_miibus);
 FUNC_3(VAR_2);

 if (VAR_3->dme_vcc_regulator != 0)
  FUNC_15(VAR_3->dme_vcc_regulator);
 if (VAR_3->dme_intrhand)
  FUNC_5(VAR_2, VAR_3->dme_irq, VAR_3->dme_intrhand);
 if (VAR_3->dme_irq)
  FUNC_4(VAR_2, VAR_0, 0, VAR_3->dme_irq);
 if (VAR_3->dme_res)
  FUNC_4(VAR_2, VAR_1, 0, VAR_3->dme_res);

 if (VAR_4 != ((void*)0))
  FUNC_12(VAR_4);

 FUNC_13(&VAR_3->dme_mtx);

 return (0);
}
