
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct emac_softc {int emac_mtx; TYPE_1__* emac_ifp; int * emac_irq; int * emac_res; int * emac_clk; int emac_dev; int * emac_miibus; int * emac_intrhand; int emac_tick_ch; } ;
typedef int device_t ;
struct TYPE_3__ {int if_drv_flags; } ;


 int FUNC_0 (struct emac_softc*) ;
 int FUNC_1 (struct emac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 struct emac_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct emac_softc*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct emac_softc *VAR_4;

 VAR_4 = FUNC_8(VAR_3);
 VAR_4->emac_ifp->if_drv_flags &= ~VAR_0;
 if (FUNC_9(VAR_3)) {
  FUNC_11(VAR_4->emac_ifp);
  FUNC_0(VAR_4);
  FUNC_10(VAR_4);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->emac_tick_ch);
 }

 if (VAR_4->emac_intrhand != ((void*)0))
  FUNC_4(VAR_4->emac_dev, VAR_4->emac_irq,
      VAR_4->emac_intrhand);

 if (VAR_4->emac_miibus != ((void*)0)) {
  FUNC_7(VAR_4->emac_dev, VAR_4->emac_miibus);
  FUNC_2(VAR_4->emac_dev);
 }

 if (VAR_4->emac_clk != ((void*)0))
  FUNC_6(VAR_4->emac_clk);

 if (VAR_4->emac_res != ((void*)0))
  FUNC_3(VAR_3, VAR_2, 0, VAR_4->emac_res);

 if (VAR_4->emac_irq != ((void*)0))
  FUNC_3(VAR_3, VAR_1, 0, VAR_4->emac_irq);

 if (VAR_4->emac_ifp != ((void*)0))
  FUNC_12(VAR_4->emac_ifp);

 if (FUNC_14(&VAR_4->emac_mtx))
  FUNC_13(&VAR_4->emac_mtx);

 return (0);
}
