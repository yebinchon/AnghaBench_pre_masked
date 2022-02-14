
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rl_softc {int rl_dev; int rl_cfg5; int rl_cfg3; int rl_cfg1; struct ifnet* rl_ifp; } ;
struct ifnet {int if_capabilities; int if_capenable; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_2 (struct rl_softc*) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_6(struct rl_softc *VAR_18)
{
 struct ifnet *VAR_19;
 int VAR_20;
 uint16_t VAR_21;
 uint8_t VAR_22;

 FUNC_2(VAR_18);

 VAR_19 = VAR_18->rl_ifp;
 if ((VAR_19->if_capabilities & VAR_0) == 0)
  return;
 if (FUNC_3(VAR_18->rl_dev, VAR_7, &VAR_20) != 0)
  return;


 FUNC_1(VAR_18, VAR_15, VAR_17);


 VAR_22 = FUNC_0(VAR_18, VAR_18->rl_cfg1);
 VAR_22 &= ~VAR_8;
 if ((VAR_19->if_capenable & VAR_0) != 0)
  VAR_22 |= VAR_8;
 FUNC_1(VAR_18, VAR_18->rl_cfg1, VAR_22);

 VAR_22 = FUNC_0(VAR_18, VAR_18->rl_cfg3);
 VAR_22 &= ~(VAR_9 | VAR_10);
 if ((VAR_19->if_capenable & VAR_1) != 0)
  VAR_22 |= VAR_10;
 FUNC_1(VAR_18, VAR_18->rl_cfg3, VAR_22);

 VAR_22 = FUNC_0(VAR_18, VAR_18->rl_cfg5);
 VAR_22 &= ~(VAR_11 | VAR_13 | VAR_14);
 VAR_22 &= ~VAR_12;
 if ((VAR_19->if_capenable & VAR_3) != 0)
  VAR_22 |= VAR_14;
 if ((VAR_19->if_capenable & VAR_2) != 0)
  VAR_22 |= VAR_13 | VAR_11;
 if ((VAR_19->if_capenable & VAR_0) != 0)
  VAR_22 |= VAR_12;
 FUNC_1(VAR_18, VAR_18->rl_cfg5, VAR_22);


 FUNC_1(VAR_18, VAR_15, VAR_16);


 VAR_21 = FUNC_4(VAR_18->rl_dev, VAR_20 + VAR_6, 2);
 VAR_21 &= ~(VAR_4 | VAR_5);
 if ((VAR_19->if_capenable & VAR_0) != 0)
  VAR_21 |= VAR_4 | VAR_5;
 FUNC_5(VAR_18->rl_dev, VAR_20 + VAR_6, VAR_21, 2);
}
