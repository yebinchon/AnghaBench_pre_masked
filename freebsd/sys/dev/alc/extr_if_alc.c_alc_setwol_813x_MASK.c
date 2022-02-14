
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ifnet {int if_capenable; } ;
struct alc_softc {int alc_flags; scalar_t__ alc_pmcap; int alc_dev; struct ifnet* alc_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct alc_softc*) ;
 int FUNC_4 (struct alc_softc*) ;
 int FUNC_5 (struct alc_softc*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_8(struct alc_softc *VAR_21)
{
 struct ifnet *VAR_22;
 uint32_t VAR_23, VAR_24;
 uint16_t VAR_25;

 FUNC_0(VAR_21);

 FUNC_3(VAR_21);
 VAR_22 = VAR_21->alc_ifp;
 if ((VAR_21->alc_flags & VAR_1) == 0) {

  FUNC_2(VAR_21, VAR_5, 0);
  VAR_23 = FUNC_1(VAR_21, VAR_4);
  VAR_23 |= VAR_15;
  FUNC_2(VAR_21, VAR_4, VAR_23);

  FUNC_4(VAR_21);
  FUNC_2(VAR_21, VAR_3,
      FUNC_1(VAR_21, VAR_3) | VAR_14);
  return;
 }

 if ((VAR_22->if_capenable & VAR_6) != 0) {
  if ((VAR_21->alc_flags & VAR_0) == 0)
   FUNC_5(VAR_21);
  FUNC_2(VAR_21, VAR_3,
      FUNC_1(VAR_21, VAR_3) & ~VAR_14);
 }

 VAR_24 = 0;
 if ((VAR_22->if_capenable & VAR_7) != 0)
  VAR_24 |= VAR_19 | VAR_20;
 FUNC_2(VAR_21, VAR_5, VAR_24);
 VAR_23 = FUNC_1(VAR_21, VAR_2);
 VAR_23 &= ~(VAR_11 | VAR_12 | VAR_9 |
     VAR_10);
 if ((VAR_22->if_capenable & VAR_8) != 0)
  VAR_23 |= VAR_9 | VAR_10;
 if ((VAR_22->if_capenable & VAR_6) != 0)
  VAR_23 |= VAR_13;
 FUNC_2(VAR_21, VAR_2, VAR_23);

 VAR_23 = FUNC_1(VAR_21, VAR_4);
 VAR_23 |= VAR_15;
 FUNC_2(VAR_21, VAR_4, VAR_23);
 if ((VAR_22->if_capenable & VAR_6) == 0) {

  FUNC_4(VAR_21);
  FUNC_2(VAR_21, VAR_3,
      FUNC_1(VAR_21, VAR_3) | VAR_14);
 }

 VAR_25 = FUNC_6(VAR_21->alc_dev,
     VAR_21->alc_pmcap + VAR_18, 2);
 VAR_25 &= ~(VAR_16 | VAR_17);
 if ((VAR_22->if_capenable & VAR_6) != 0)
  VAR_25 |= VAR_16 | VAR_17;
 FUNC_7(VAR_21->alc_dev,
     VAR_21->alc_pmcap + VAR_18, VAR_25, 2);
}
