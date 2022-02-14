
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
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
 int FUNC_2 (int) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_3 (struct alc_softc*,int ) ;
 int FUNC_4 (struct alc_softc*,int ,int) ;
 int FUNC_5 (struct alc_softc*,int ,int ) ;
 int FUNC_6 (struct alc_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct alc_softc *VAR_49)
{
 uint32_t VAR_50;

 VAR_50 = FUNC_0(VAR_49, VAR_1);
 VAR_50 &= ~(VAR_22 | VAR_26 |
     VAR_23 | VAR_27 | VAR_28 |
     VAR_29 | VAR_21);
 VAR_50 |= VAR_30;




 VAR_50 &= ~(VAR_25 | VAR_24);

 FUNC_1(VAR_49, VAR_1, VAR_50);
 FUNC_2(10);
 FUNC_1(VAR_49, VAR_1, VAR_50 | VAR_22);
 FUNC_2(800);
 FUNC_4(VAR_49, VAR_36,
     VAR_12 & ~VAR_13);
 FUNC_4(VAR_49, VAR_35,
     VAR_9 & ~(VAR_11 | VAR_10));
 FUNC_4(VAR_49, VAR_33, VAR_8);



 VAR_50 = FUNC_0(VAR_49, VAR_2);
 VAR_50 &= ~VAR_31;
 FUNC_1(VAR_49, VAR_2, VAR_50);
 FUNC_6(VAR_49, VAR_41, VAR_42, 0);


 FUNC_4(VAR_49, VAR_40, VAR_17);
 FUNC_4(VAR_49, VAR_37, VAR_14);
 FUNC_4(VAR_49, VAR_39, VAR_16);
 FUNC_4(VAR_49, VAR_32, VAR_5);
 VAR_50 = FUNC_3(VAR_49, VAR_34);
 VAR_50 &= ~VAR_7;
 FUNC_4(VAR_49, VAR_34, VAR_50);


 FUNC_6(VAR_49, VAR_41, VAR_43,
     VAR_3);
 FUNC_6(VAR_49, VAR_41, VAR_44,
     VAR_4);

 if ((VAR_49->alc_flags & VAR_0) != 0) {

  VAR_50 = FUNC_5(VAR_49, VAR_47, VAR_45);
  VAR_50 |= VAR_18;
  FUNC_6(VAR_49, VAR_47, VAR_45, VAR_50);

  VAR_50 = FUNC_3(VAR_49, VAR_34);
  VAR_50 |= VAR_6;
  FUNC_4(VAR_49, VAR_34, VAR_50);

  VAR_50 = FUNC_5(VAR_49, VAR_47, VAR_46);
  VAR_50 |= VAR_19;
  FUNC_6(VAR_49, VAR_47, VAR_46, VAR_50);
 }
}
