
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct cas_softc {int sc_flags; int sc_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct cas_softc*,int ) ;
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
 int const VAR_44 ;
 int FUNC_1 (struct cas_softc*,int,int const) ;
 int VAR_45 ;
 int const VAR_46 ;
 int VAR_47 ;
 int* FUNC_2 (int ) ;
 int VAR_48 ;

__attribute__((used)) static void
FUNC_3(struct cas_softc *VAR_49)
{
 int VAR_50;
 const u_char *VAR_51 = FUNC_2(VAR_49->sc_ifp);

 FUNC_0(VAR_49, VAR_48);


 if ((VAR_49->sc_flags & VAR_0) == 0) {

  FUNC_1(VAR_49, VAR_23, 0);
  FUNC_1(VAR_49, VAR_24, 8);
  FUNC_1(VAR_49, VAR_25, 4);


  FUNC_1(VAR_49, VAR_31, VAR_46);

  FUNC_1(VAR_49, VAR_28,
      ((VAR_45 + VAR_47) <<
      VAR_30) |
      (0x2000 << VAR_29));


  FUNC_1(VAR_49, VAR_34, 0x7);
  FUNC_1(VAR_49, VAR_26, 0x4);
  FUNC_1(VAR_49, VAR_15, 0x10);
  FUNC_1(VAR_49, VAR_16, 0x8808);


  FUNC_1(VAR_49, VAR_35,
      ((VAR_51[5] << 8) | VAR_51[4]) & 0x3ff);


  for (VAR_50 = VAR_4; VAR_50 <= VAR_6;
      VAR_50 += VAR_5 - VAR_4)
   FUNC_1(VAR_49, VAR_50, 0);


  FUNC_1(VAR_49, VAR_7, 0x0001);
  FUNC_1(VAR_49, VAR_8, 0xc200);
  FUNC_1(VAR_49, VAR_9, 0x0180);


  FUNC_1(VAR_49, VAR_10, 0);
  FUNC_1(VAR_49, VAR_11, 0);
  FUNC_1(VAR_49, VAR_12, 0);
  FUNC_1(VAR_49, VAR_14, 0);
  FUNC_1(VAR_49, VAR_13, 0);


  for (VAR_50 = VAR_20; VAR_50 <= VAR_22;
      VAR_50 += VAR_21 - VAR_20)
   FUNC_1(VAR_49, VAR_50, 0);

  VAR_49->sc_flags |= VAR_0;
 }


 FUNC_1(VAR_49, VAR_32, 0);
 FUNC_1(VAR_49, VAR_19, 0);
 FUNC_1(VAR_49, VAR_18, 0);
 FUNC_1(VAR_49, VAR_27, 0);
 FUNC_1(VAR_49, VAR_17, 0);
 FUNC_1(VAR_49, VAR_33, 0);
 FUNC_1(VAR_49, VAR_39, 0);
 FUNC_1(VAR_49, VAR_40, 0);
 FUNC_1(VAR_49, VAR_36, 0);
 FUNC_1(VAR_49, VAR_38, 0);
 FUNC_1(VAR_49, VAR_37, 0);


 FUNC_1(VAR_49, VAR_41, 0x1BF0 << VAR_42);


 FUNC_1(VAR_49, VAR_1, (VAR_51[4] << 8) | VAR_51[5]);
 FUNC_1(VAR_49, VAR_2, (VAR_51[2] << 8) | VAR_51[3]);
 FUNC_1(VAR_49, VAR_3, (VAR_51[0] << 8) | VAR_51[1]);


 FUNC_1(VAR_49, VAR_43, VAR_44);
}
