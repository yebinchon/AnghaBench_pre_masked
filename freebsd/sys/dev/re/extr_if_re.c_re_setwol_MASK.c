
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rl_softc {int rl_flags; int rl_dev; int rl_cfg5; int rl_cfg3; int rl_cfg1; struct ifnet* rl_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
 int FUNC_3 (struct rl_softc*,int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (struct rl_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (struct rl_softc*) ;
 int FUNC_9 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_10(struct rl_softc *VAR_29)
{
 struct ifnet *VAR_30;
 int VAR_31;
 uint16_t VAR_32;
 uint8_t VAR_33;

 FUNC_4(VAR_29);

 if (FUNC_5(VAR_29->rl_dev, VAR_7, &VAR_31) != 0)
  return;

 VAR_30 = VAR_29->rl_ifp;

 if ((VAR_29->rl_flags & VAR_21) != 0) {
  if ((FUNC_0(VAR_29, VAR_26) & 0x80) == 0x80)
   FUNC_2(VAR_29, VAR_25,
       FUNC_0(VAR_29, VAR_25) & ~0x01);
 }
 if ((VAR_30->if_capenable & VAR_0) != 0) {
  if ((VAR_29->rl_flags & VAR_20) != 0) {

   FUNC_3(VAR_29, VAR_27, FUNC_1(VAR_29, VAR_27) &
       ~0x00080000);
  }
  FUNC_9(VAR_29);
  if ((VAR_29->rl_flags & VAR_24) != 0)
   FUNC_8(VAR_29);
  if ((VAR_29->rl_flags & VAR_23) != 0)
   FUNC_2(VAR_29, VAR_16, VAR_15);
 }

 FUNC_2(VAR_29, VAR_17, VAR_19);


 VAR_33 = FUNC_0(VAR_29, VAR_29->rl_cfg1);
 VAR_33 &= ~VAR_8;
 if ((VAR_30->if_capenable & VAR_0) != 0)
  VAR_33 |= VAR_8;
 FUNC_2(VAR_29, VAR_29->rl_cfg1, VAR_33);

 VAR_33 = FUNC_0(VAR_29, VAR_29->rl_cfg3);
 VAR_33 &= ~(VAR_9 | VAR_10);
 if ((VAR_30->if_capenable & VAR_1) != 0)
  VAR_33 |= VAR_10;
 FUNC_2(VAR_29, VAR_29->rl_cfg3, VAR_33);

 VAR_33 = FUNC_0(VAR_29, VAR_29->rl_cfg5);
 VAR_33 &= ~(VAR_11 | VAR_13 | VAR_14 |
     VAR_12);
 if ((VAR_30->if_capenable & VAR_3) != 0)
  VAR_33 |= VAR_14;
 if ((VAR_30->if_capenable & VAR_2) != 0)
  VAR_33 |= VAR_13 | VAR_11;
 if ((VAR_30->if_capenable & VAR_0) != 0)
  VAR_33 |= VAR_12;
 FUNC_2(VAR_29, VAR_29->rl_cfg5, VAR_33);


 FUNC_2(VAR_29, VAR_17, VAR_18);

 if ((VAR_30->if_capenable & VAR_0) == 0 &&
     (VAR_29->rl_flags & VAR_22) != 0)
  FUNC_2(VAR_29, VAR_28, FUNC_0(VAR_29, VAR_28) & ~0x80);







 VAR_32 = FUNC_6(VAR_29->rl_dev, VAR_31 + VAR_6, 2);
 VAR_32 &= ~(VAR_4 | VAR_5);
 if ((VAR_30->if_capenable & VAR_0) != 0)
  VAR_32 |= VAR_4 | VAR_5;
 FUNC_7(VAR_29->rl_dev, VAR_31 + VAR_6, VAR_32, 2);
}
