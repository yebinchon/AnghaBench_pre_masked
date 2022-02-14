
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_softc {TYPE_1__* smc_ifp; scalar_t__ smc_mask; int smc_mii_tick_ch; int smc_watchdog; } ;
struct TYPE_2__ {int if_drv_flags; int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smc_softc*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct smc_softc*,int) ;
 int FUNC_4 (struct smc_softc*,int ,int ) ;
 int FUNC_5 (struct smc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct smc_softc *VAR_5)
{

 FUNC_0(VAR_5);




 FUNC_1(&VAR_5->smc_watchdog);
 FUNC_1(&VAR_5->smc_mii_tick_ch);




 FUNC_3(VAR_5, 2);
 VAR_5->smc_mask = 0;
 FUNC_4(VAR_5, VAR_2, 0);
 FUNC_3(VAR_5, 0);
 FUNC_5(VAR_5, VAR_4, 0);
 FUNC_5(VAR_5, VAR_3, 0);

 VAR_5->smc_ifp->if_drv_flags &= ~VAR_1;
}
