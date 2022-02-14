
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct smc_softc {int smc_mask; int smc_tx; int smc_tq; int smc_watchdog; int smc_rx; int smc_dev; } ;
struct ifnet {int if_capenable; struct smc_softc* if_softc; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (struct smc_softc*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct smc_softc*) ;
 int FUNC_6 (struct smc_softc*,int ) ;
 int FUNC_7 (struct smc_softc*,int ) ;
 int FUNC_8 (struct smc_softc*,int) ;
 int FUNC_9 (struct smc_softc*,int ,int) ;
 int FUNC_10 (struct smc_softc*,int ,int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void
FUNC_12(void *VAR_29, int VAR_30)
{
 struct smc_softc *VAR_31;
 struct ifnet *VAR_32;
 u_int VAR_33, VAR_34, VAR_35, VAR_36;

 (void)VAR_30;
 VAR_32 = (struct ifnet *)VAR_29;
 VAR_31 = VAR_32->if_softc;

 FUNC_0(VAR_31);

 FUNC_8(VAR_31, 2);




 VAR_33 = FUNC_6(VAR_31, VAR_14) & VAR_31->smc_mask;




 if (VAR_33 & VAR_28) {



  VAR_34 = FUNC_6(VAR_31, VAR_10);
  if ((VAR_34 & VAR_9) == 0) {
   FUNC_2(&VAR_31->smc_watchdog);
   FUNC_8(VAR_31, 2);
   FUNC_9(VAR_31, VAR_18, VAR_34);
   FUNC_10(VAR_31, VAR_19, 0 | VAR_21 |
       VAR_20);
   FUNC_8(VAR_31, 0);
   VAR_36 = FUNC_7(VAR_31, VAR_7);





   FUNC_8(VAR_31, 2);
   FUNC_5(VAR_31);
   FUNC_10(VAR_31, VAR_15, VAR_16);

   FUNC_8(VAR_31, 0);
   VAR_36 = FUNC_7(VAR_31, VAR_24);
   VAR_36 |= VAR_26 | VAR_25;
   FUNC_10(VAR_31, VAR_24, VAR_36);
   FUNC_8(VAR_31, 2);
   FUNC_11(VAR_31->smc_tq, &VAR_31->smc_tx);
  }




  FUNC_9(VAR_31, VAR_0, VAR_28);
 }




 if (VAR_33 & VAR_22) {
  FUNC_9(VAR_31, VAR_0, VAR_22);
  VAR_31->smc_mask &= ~VAR_22;
  FUNC_11(VAR_31->smc_tq, &VAR_31->smc_rx);
 }




 if (VAR_33 & VAR_1) {
  FUNC_9(VAR_31, VAR_0, VAR_1);
  VAR_31->smc_mask &= ~VAR_1;
  FUNC_11(VAR_31->smc_tq, &VAR_31->smc_tx);
 }




 if (VAR_33 & VAR_23) {
  FUNC_9(VAR_31, VAR_0, VAR_23);
  FUNC_4(VAR_32, VAR_13, 1);
 }




 if (VAR_33 & VAR_27) {
  FUNC_9(VAR_31, VAR_0, VAR_27);
  VAR_31->smc_mask &= ~VAR_27;
  FUNC_2(&VAR_31->smc_watchdog);




  FUNC_8(VAR_31, 0);
  VAR_35 = FUNC_7(VAR_31, VAR_2);
  FUNC_8(VAR_31, 2);
  FUNC_4(VAR_32, VAR_12,
      ((VAR_35 & VAR_5) >> VAR_6) +
      ((VAR_35 & VAR_3) >> VAR_4));




  FUNC_11(VAR_31->smc_tq, &VAR_31->smc_tx);
 }




 FUNC_8(VAR_31, 2);
 if ((VAR_32->if_capenable & VAR_11) == 0)
  FUNC_9(VAR_31, VAR_17, VAR_31->smc_mask);

 FUNC_1(VAR_31);
}
