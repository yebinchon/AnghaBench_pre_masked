
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct jme_softc {int jme_flags; int jme_dev; struct ifnet* jme_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
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
 int FUNC_2 (struct jme_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct jme_softc*) ;
 int FUNC_4 (struct jme_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_8(struct jme_softc *VAR_22)
{
 struct ifnet *VAR_23;
 uint32_t VAR_24, VAR_25;
 uint16_t VAR_26;
 int VAR_27;

 FUNC_2(VAR_22);

 if (FUNC_5(VAR_22->jme_dev, VAR_18, &VAR_27) != 0) {

  if ((VAR_22->jme_flags & VAR_10) != 0)
   FUNC_1(VAR_22, VAR_11, FUNC_0(VAR_22, VAR_11) &
       ~(VAR_2 | VAR_0 |
       VAR_3 | VAR_1));
  if ((VAR_22->jme_flags & VAR_9) != 0)
   FUNC_1(VAR_22, VAR_13,
       FUNC_0(VAR_22, VAR_13) | VAR_5);

  FUNC_3(VAR_22);
  return;
 }

 VAR_23 = VAR_22->jme_ifp;
 VAR_24 = FUNC_0(VAR_22, VAR_12) & ~VAR_4;
 VAR_25 = FUNC_0(VAR_22, VAR_14);
 VAR_25 &= ~VAR_21;
 if ((VAR_23->if_capenable & VAR_7) != 0) {
  VAR_25 |= VAR_19 | VAR_20;

  VAR_24 |= VAR_4;

  if ((VAR_22->jme_flags & VAR_8) == 0)
   FUNC_4(VAR_22);
 }

 FUNC_1(VAR_22, VAR_14, VAR_25);
 FUNC_1(VAR_22, VAR_12, VAR_24);

 if ((VAR_22->jme_flags & VAR_10) != 0)
  FUNC_1(VAR_22, VAR_11, FUNC_0(VAR_22, VAR_11) &
      ~(VAR_2 | VAR_0 |
      VAR_3 | VAR_1));

 VAR_26 = FUNC_6(VAR_22->jme_dev, VAR_27 + VAR_17, 2);
 VAR_26 &= ~(VAR_15 | VAR_16);
 if ((VAR_23->if_capenable & VAR_6) != 0)
  VAR_26 |= VAR_15 | VAR_16;
 FUNC_7(VAR_22->jme_dev, VAR_27 + VAR_17, VAR_26, 2);
 if ((VAR_23->if_capenable & VAR_6) == 0) {

  FUNC_3(VAR_22);
 }
}
