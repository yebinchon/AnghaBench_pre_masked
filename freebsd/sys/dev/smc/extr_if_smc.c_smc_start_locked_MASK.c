
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct smc_softc {int smc_mask; int smc_tx; int smc_tq; struct mbuf* smc_pending; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_snd; struct smc_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct mbuf*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct smc_softc*) ;
 int VAR_12 ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct ifnet*,char*) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int *) ;
 int FUNC_7 (struct smc_softc*) ;
 int FUNC_8 (struct smc_softc*,int ) ;
 int FUNC_9 (struct smc_softc*,int) ;
 int FUNC_10 (struct smc_softc*,int ,int) ;
 int FUNC_11 (struct smc_softc*,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void
FUNC_13(struct ifnet *VAR_13)
{
 struct smc_softc *VAR_14;
 struct mbuf *VAR_15;
 u_int VAR_16, VAR_17, VAR_18;

 VAR_14 = VAR_13->if_softc;
 FUNC_2(VAR_14);

 if (VAR_13->if_drv_flags & VAR_6)
  return;
 if (FUNC_1(&VAR_13->if_snd))
  return;




 FUNC_0(&VAR_13->if_snd, VAR_15);
 VAR_16 = FUNC_6(VAR_15, ((void*)0));
 VAR_16 += (VAR_16 & 1);
 if (VAR_16 > VAR_3 - VAR_2) {
  FUNC_4(VAR_13, "large packet discarded\n");
  FUNC_3(VAR_13, VAR_5, 1);
  FUNC_5(VAR_15);
  return;
 }




 VAR_13->if_drv_flags |= VAR_6;
 VAR_14->smc_pending = VAR_15;





 VAR_17 = (VAR_16 + VAR_11) >> 8;
 if (VAR_17 == 0)
  VAR_17 = 1;




 FUNC_9(VAR_14, 2);
 FUNC_7(VAR_14);
 FUNC_11(VAR_14, VAR_8, VAR_9 | VAR_17);




 VAR_18 = VAR_12;
 do {
  if (FUNC_8(VAR_14, VAR_7) & VAR_1) {
   FUNC_10(VAR_14, VAR_0, VAR_1);
   break;
  }
 } while (--VAR_18);





 if (VAR_18 == 0) {
  VAR_14->smc_mask |= VAR_1;
  if ((VAR_13->if_capenable & VAR_4) == 0)
   FUNC_10(VAR_14, VAR_10, VAR_14->smc_mask);
  return;
 }

 FUNC_12(VAR_14->smc_tq, &VAR_14->smc_tx);
}
