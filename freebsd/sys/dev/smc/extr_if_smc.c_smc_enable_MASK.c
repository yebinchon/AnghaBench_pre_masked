
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int smc_mask; struct ifnet* smc_ifp; } ;
struct ifnet {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct smc_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct smc_softc*,int) ;
 int FUNC_2 (struct smc_softc*,int ,int) ;
 int FUNC_3 (struct smc_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct smc_softc *VAR_18)
{
 struct ifnet *VAR_19;

 FUNC_0(VAR_18);
 VAR_19 = VAR_18->smc_ifp;




 FUNC_1(VAR_18, 0);
 FUNC_3(VAR_18, VAR_7, VAR_8 | (VAR_10 << VAR_11)
     | (VAR_9 << VAR_12));




 FUNC_3(VAR_18, VAR_14, VAR_16 | VAR_15);
 FUNC_3(VAR_18, VAR_3, VAR_4 | VAR_5);




 FUNC_1(VAR_18, 2);
 VAR_18->smc_mask = VAR_0 | VAR_13 | VAR_6 | VAR_17;
 if ((VAR_19->if_capenable & VAR_1) != 0)
  FUNC_2(VAR_18, VAR_2, VAR_18->smc_mask);
}
