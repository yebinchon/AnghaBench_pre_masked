
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct rl_softc {int rl_flags; int rl_inttask; int rl_txstart; scalar_t__ suspended; struct ifnet* rl_ifp; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_snd; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int ) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
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
 int FUNC_4 (struct rl_softc*) ;
 int VAR_14 ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (struct rl_softc*) ;
 int FUNC_7 (struct rl_softc*,int *) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct rl_softc*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_11(void *VAR_16, int VAR_17)
{
 struct rl_softc *VAR_18;
 struct ifnet *VAR_19;
 u_int16_t VAR_20;
 int VAR_21 = 0;

 VAR_18 = VAR_16;
 VAR_19 = VAR_18->rl_ifp;

 FUNC_4(VAR_18);

 VAR_20 = FUNC_0(VAR_18, VAR_5);
        FUNC_2(VAR_18, VAR_5, VAR_20);

 if (VAR_18->suspended ||
     (VAR_19->if_drv_flags & VAR_1) == 0) {
  FUNC_5(VAR_18);
  return;
 }
 if (VAR_20 & (VAR_8|VAR_7|VAR_6))
  VAR_21 = FUNC_7(VAR_18, ((void*)0));
 if ((VAR_20 & (VAR_13 | VAR_11)) &&
     (VAR_18->rl_flags & VAR_2))
  FUNC_1(VAR_18, VAR_18->rl_txstart, VAR_14);
 if (VAR_20 & (



     VAR_13|

     VAR_12|VAR_11))
  FUNC_9(VAR_18);

 if (VAR_20 & VAR_9) {
  VAR_19->if_drv_flags &= ~VAR_1;
  FUNC_6(VAR_18);
 }

 if (!FUNC_3(&VAR_19->if_snd))
  FUNC_8(VAR_19);

 FUNC_5(VAR_18);

        if ((FUNC_0(VAR_18, VAR_5) & VAR_4) || VAR_21) {
  FUNC_10(VAR_15, &VAR_18->rl_inttask);
  return;
 }

 FUNC_2(VAR_18, VAR_3, VAR_4);
}
