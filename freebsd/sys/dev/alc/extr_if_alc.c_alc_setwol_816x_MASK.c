
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
 int VAR_2 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_3 (struct alc_softc*,int ,int ,int ) ;
 int FUNC_4 (struct alc_softc*) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_7(struct alc_softc *VAR_36)
{
 struct ifnet *VAR_37;
 uint32_t VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 uint16_t VAR_43;

 FUNC_0(VAR_36);

 VAR_37 = VAR_36->alc_ifp;
 VAR_40 = FUNC_1(VAR_36, VAR_4);
 VAR_40 &= ~VAR_26;
 VAR_38 = FUNC_1(VAR_36, VAR_2);
 VAR_38 &= ~(VAR_10 | VAR_13 | VAR_9 |
     VAR_15);
 VAR_38 |= VAR_11 | VAR_12 | VAR_17;
 if ((VAR_36->alc_flags & VAR_1) == 0) {
  FUNC_2(VAR_36, VAR_7, 0);
  VAR_38 |= VAR_14 | VAR_16;
  VAR_39 = FUNC_1(VAR_36, VAR_3);
 } else {
  if ((VAR_37->if_capenable & VAR_18) != 0) {
   VAR_38 |= VAR_10;
   if ((VAR_36->alc_flags & VAR_0) == 0)
    FUNC_4(VAR_36);
  }
  VAR_41 = 0;
  if ((VAR_37->if_capenable & VAR_19) != 0)
   VAR_41 |= VAR_34 | VAR_35;
  FUNC_2(VAR_36, VAR_7, VAR_41);
  VAR_39 = FUNC_1(VAR_36, VAR_3);
  VAR_39 &= ~(VAR_23 | VAR_24 | VAR_21 |
      VAR_22);
  if ((VAR_37->if_capenable & VAR_20) != 0)
   VAR_39 |= VAR_21 | VAR_22;
  if ((VAR_37->if_capenable & VAR_18) != 0)
   VAR_39 |= VAR_25;
  FUNC_3(VAR_36, VAR_27, VAR_28,
      VAR_8);
 }


 VAR_42 = FUNC_1(VAR_36, VAR_5);
 VAR_42 &= ~VAR_29;
 FUNC_2(VAR_36, VAR_5, VAR_42);
 VAR_42 |= VAR_29;
 FUNC_2(VAR_36, VAR_5, VAR_42);
 FUNC_2(VAR_36, VAR_4, VAR_40);
 FUNC_2(VAR_36, VAR_3, VAR_39);
 FUNC_2(VAR_36, VAR_2, VAR_38);
 VAR_42 = FUNC_1(VAR_36, VAR_6);
 VAR_42 |= VAR_33;
 FUNC_2(VAR_36, VAR_6, VAR_42);

 if ((VAR_36->alc_flags & VAR_1) != 0) {

  VAR_43 = FUNC_5(VAR_36->alc_dev,
      VAR_36->alc_pmcap + VAR_32, 2);
  VAR_43 &= ~(VAR_30 | VAR_31);
  if ((VAR_37->if_capenable & VAR_18) != 0)
   VAR_43 |= VAR_30 | VAR_31;
  FUNC_6(VAR_36->alc_dev,
      VAR_36->alc_pmcap + VAR_32, VAR_43, 2);
 }
}
