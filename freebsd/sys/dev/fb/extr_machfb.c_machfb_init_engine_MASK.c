
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct machfb_softc {int sc_width; int sc_depth; int sc_height; } ;


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
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_0 (struct machfb_softc*) ;
 int FUNC_1 (struct machfb_softc*,int ) ;
 int FUNC_2 (struct machfb_softc*,int ,int) ;
 int FUNC_3 (struct machfb_softc*,int) ;
 int FUNC_4 (struct machfb_softc*) ;

__attribute__((used)) static void
FUNC_5(struct machfb_softc *VAR_51)
{
 uint32_t VAR_52;

 VAR_52 = VAR_51->sc_width;

 if (VAR_51->sc_depth == 24)
  VAR_52 *= 3;

 FUNC_0(VAR_51);

 FUNC_3(VAR_51, 14);

 FUNC_2(VAR_51, VAR_3, 0xffffffff);

 FUNC_2(VAR_51, VAR_24, (VAR_52 / 8) << 22);

 FUNC_2(VAR_51, VAR_27, 0);
 FUNC_2(VAR_51, VAR_22, 0);
 FUNC_2(VAR_51, VAR_19, 0);
 FUNC_2(VAR_51, VAR_20, 0);
 FUNC_2(VAR_51, VAR_18, 0);

 FUNC_2(VAR_51, VAR_21, VAR_23 | VAR_25 |
     VAR_26);

 FUNC_2(VAR_51, VAR_48, (VAR_52 / 8) << 22);

 FUNC_2(VAR_51, VAR_49, 0);
 FUNC_2(VAR_51, VAR_45, 1);
 FUNC_2(VAR_51, VAR_50, 0);
 FUNC_2(VAR_51, VAR_46, 1);

 FUNC_2(VAR_51, VAR_44, VAR_47);

 FUNC_3(VAR_51, 13);
 FUNC_2(VAR_51, VAR_32, 0);

 FUNC_2(VAR_51, VAR_36, 0);
 FUNC_2(VAR_51, VAR_37, 0);
 FUNC_2(VAR_51, VAR_35, 0);

 FUNC_2(VAR_51, VAR_39, 0);
 FUNC_2(VAR_51, VAR_41, 0);
 FUNC_2(VAR_51, VAR_38, VAR_51->sc_height - 1);
 FUNC_2(VAR_51, VAR_40, VAR_52 - 1);

 FUNC_2(VAR_51, VAR_7, 0);
 FUNC_2(VAR_51, VAR_11, 0xffffffff);
 FUNC_2(VAR_51, VAR_15, 0xffffffff);
 FUNC_2(VAR_51, VAR_12, (VAR_34 << 16) | VAR_33);

 FUNC_2(VAR_51, VAR_14, VAR_28);

 FUNC_3(VAR_51, 3);
 FUNC_2(VAR_51, VAR_0, 0);
 FUNC_2(VAR_51, VAR_2, 0xffffffff);
 FUNC_2(VAR_51, VAR_1, 0);

 FUNC_3(VAR_51, 2);
 switch (VAR_51->sc_depth) {
 case 8:
  FUNC_2(VAR_51, VAR_13, VAR_31 | VAR_43 | VAR_17);
  FUNC_2(VAR_51, VAR_10, VAR_9);
  FUNC_2(VAR_51, VAR_6, FUNC_1(VAR_51, VAR_6) | VAR_5);
  break;







 }

 FUNC_3(VAR_51, 2);
 FUNC_2(VAR_51, VAR_4, FUNC_1(VAR_51, VAR_4) & ~0x20);
 FUNC_2(VAR_51, VAR_29, VAR_25 | VAR_26);

 FUNC_4(VAR_51);
}
