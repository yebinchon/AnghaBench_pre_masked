
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int * smc_mii_tick; int smc_mii_tick_ch; struct ifnet* smc_ifp; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (struct smc_softc*) ;
 int FUNC_2 (struct smc_softc*) ;
 int FUNC_3 (int *,int ,int *,struct smc_softc*) ;
 int FUNC_4 (int ,struct ifnet*) ;
 int VAR_3 ;
 int FUNC_5 (struct smc_softc*) ;
 int VAR_4 ;
 int FUNC_6 (struct smc_softc*) ;
 int FUNC_7 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_8(struct smc_softc *VAR_5)
{
 struct ifnet *VAR_6;

 FUNC_0(VAR_5);
 VAR_6 = VAR_5->smc_ifp;
 if ((VAR_6->if_drv_flags & VAR_2) != 0)
  return;

 FUNC_6(VAR_5);
 FUNC_5(VAR_5);

 VAR_6->if_drv_flags |= VAR_2;
 VAR_6->if_drv_flags &= ~VAR_1;

 FUNC_7(VAR_6);

 if (VAR_5->smc_mii_tick != ((void*)0))
  FUNC_3(&VAR_5->smc_mii_tick_ch, VAR_3, VAR_5->smc_mii_tick, VAR_5);







}
