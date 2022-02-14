
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ifnet {int if_capenable; } ;
struct ale_softc {int ale_flags; int ale_dev; struct ifnet* ale_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ale_softc*,int ) ;
 int FUNC_2 (struct ale_softc*,int ,int) ;
 int FUNC_3 (struct ale_softc*,int ,int) ;
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
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (struct ale_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_8(struct ale_softc *VAR_28)
{
 struct ifnet *VAR_29;
 uint32_t VAR_30, VAR_31;
 uint16_t VAR_32;
 int VAR_33;

 FUNC_0(VAR_28);

 if (FUNC_5(VAR_28->ale_dev, VAR_25, &VAR_33) != 0) {

  FUNC_3(VAR_28, VAR_4, 0);
  VAR_30 = FUNC_1(VAR_28, VAR_3);
  VAR_30 |= VAR_21;
  FUNC_3(VAR_28, VAR_3, VAR_30);

  FUNC_2(VAR_28, VAR_1,
      VAR_5 | VAR_6 |
      VAR_7 | VAR_10 |
      VAR_12 | VAR_9 |
      VAR_8 | VAR_11);
  return;
 }

 VAR_29 = VAR_28->ale_ifp;
 if ((VAR_29->if_capenable & VAR_13) != 0) {
  if ((VAR_28->ale_flags & VAR_0) == 0)
   FUNC_4(VAR_28);
 }

 VAR_31 = 0;
 if ((VAR_29->if_capenable & VAR_14) != 0)
  VAR_31 |= VAR_26 | VAR_27;
 FUNC_3(VAR_28, VAR_4, VAR_31);
 VAR_30 = FUNC_1(VAR_28, VAR_2);
 VAR_30 &= ~(VAR_18 | VAR_19 | VAR_16 |
     VAR_17);
 if ((VAR_29->if_capenable & VAR_15) != 0)
  VAR_30 |= VAR_16 | VAR_17;
 if ((VAR_29->if_capenable & VAR_13) != 0)
  VAR_30 |= VAR_20;
 FUNC_3(VAR_28, VAR_2, VAR_30);

 if ((VAR_29->if_capenable & VAR_13) == 0) {

  VAR_30 = FUNC_1(VAR_28, VAR_3);
  VAR_30 |= VAR_21;
  FUNC_3(VAR_28, VAR_3, VAR_30);
  FUNC_2(VAR_28, VAR_1,
      VAR_5 | VAR_6 |
      VAR_7 | VAR_12 |
      VAR_9 | VAR_8 |
      VAR_11);
 }

 VAR_32 = FUNC_6(VAR_28->ale_dev, VAR_33 + VAR_24, 2);
 VAR_32 &= ~(VAR_22 | VAR_23);
 if ((VAR_29->if_capenable & VAR_13) != 0)
  VAR_32 |= VAR_22 | VAR_23;
 FUNC_7(VAR_28->ale_dev, VAR_33 + VAR_24, VAR_32, 2);
}
