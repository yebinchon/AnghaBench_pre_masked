
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smc_softc {int smc_mtx; int * smc_irq; int smc_irq_rid; int smc_dev; int * smc_reg; int smc_reg_rid; scalar_t__ smc_usemem; int * smc_miibus; TYPE_1__* smc_ifp; int * smc_tq; int smc_tx; int smc_rx; int smc_intr; int * smc_ih; int smc_mii_tick_ch; int smc_watchdog; } ;
typedef int device_t ;
struct TYPE_4__ {int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (struct smc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct smc_softc* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (struct smc_softc*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;

int
FUNC_16(device_t VAR_4)
{
 int VAR_5;
 struct smc_softc *VAR_6;

 VAR_6 = FUNC_7(VAR_4);
 FUNC_0(VAR_6);
 FUNC_13(VAR_6);
 FUNC_1(VAR_6);

 if (VAR_6->smc_ifp != ((void*)0)) {
  FUNC_8(VAR_6->smc_ifp);
 }

 FUNC_5(&VAR_6->smc_watchdog);
 FUNC_5(&VAR_6->smc_mii_tick_ch);






 if (VAR_6->smc_ih != ((void*)0))
  FUNC_4(VAR_6->smc_dev, VAR_6->smc_irq, VAR_6->smc_ih);

 if (VAR_6->smc_tq != ((void*)0)) {
  FUNC_14(VAR_6->smc_tq, &VAR_6->smc_intr);
  FUNC_14(VAR_6->smc_tq, &VAR_6->smc_rx);
  FUNC_14(VAR_6->smc_tq, &VAR_6->smc_tx);
  FUNC_15(VAR_6->smc_tq);
  VAR_6->smc_tq = ((void*)0);
 }

 if (VAR_6->smc_ifp != ((void*)0)) {
  FUNC_10(VAR_6->smc_ifp);
 }

 if (VAR_6->smc_miibus != ((void*)0)) {
  FUNC_6(VAR_6->smc_dev, VAR_6->smc_miibus);
  FUNC_2(VAR_6->smc_dev);
 }

 if (VAR_6->smc_reg != ((void*)0)) {
  VAR_5 = VAR_1;
  if (VAR_6->smc_usemem)
   VAR_5 = VAR_3;

  FUNC_3(VAR_6->smc_dev, VAR_5, VAR_6->smc_reg_rid,
      VAR_6->smc_reg);
 }

 if (VAR_6->smc_irq != ((void*)0))
  FUNC_3(VAR_6->smc_dev, VAR_2, VAR_6->smc_irq_rid,
     VAR_6->smc_irq);

 if (FUNC_12(&VAR_6->smc_mtx))
  FUNC_11(&VAR_6->smc_mtx);

 return (0);
}
