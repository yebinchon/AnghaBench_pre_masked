
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gem_softc {int sc_flags; int sc_ifp; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gem_softc*,int ,int const) ;
 int VAR_3 ;
 int FUNC_1 (struct gem_softc*,int ) ;
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
 int const VAR_41 ;
 int* FUNC_2 (int ) ;
 int VAR_42 ;

__attribute__((used)) static void
FUNC_3(struct gem_softc *VAR_43)
{
 const u_char *VAR_44 = FUNC_2(VAR_43->sc_ifp);

 FUNC_1(VAR_43, VAR_42);


 if ((VAR_43->sc_flags & VAR_3) == 0) {

  FUNC_0(VAR_43, VAR_23, 0);
  FUNC_0(VAR_43, VAR_24, 8);
  FUNC_0(VAR_43, VAR_25, 4);


  FUNC_0(VAR_43, VAR_29, VAR_1);

  FUNC_0(VAR_43, VAR_28,
      (VAR_0 + VAR_2) | (0x2000 << 16));


  FUNC_0(VAR_43, VAR_32, 0x7);
  FUNC_0(VAR_43, VAR_26, 0x4);
  FUNC_0(VAR_43, VAR_18, 0x10);
  FUNC_0(VAR_43, VAR_19, 0x8808);


  FUNC_0(VAR_43, VAR_33,
      ((VAR_44[5] << 8) | VAR_44[4]) & 0x3ff);


  FUNC_0(VAR_43, VAR_7, 0);
  FUNC_0(VAR_43, VAR_8, 0);
  FUNC_0(VAR_43, VAR_9, 0);


  FUNC_0(VAR_43, VAR_10, 0x0001);
  FUNC_0(VAR_43, VAR_11, 0xc200);
  FUNC_0(VAR_43, VAR_12, 0x0180);


  FUNC_0(VAR_43, VAR_13, 0);
  FUNC_0(VAR_43, VAR_14, 0);
  FUNC_0(VAR_43, VAR_15, 0);
  FUNC_0(VAR_43, VAR_17, 0);
  FUNC_0(VAR_43, VAR_16, 0);

  VAR_43->sc_flags |= VAR_3;
 }


 FUNC_0(VAR_43, VAR_30, 0);
 FUNC_0(VAR_43, VAR_22, 0);
 FUNC_0(VAR_43, VAR_21, 0);
 FUNC_0(VAR_43, VAR_27, 0);
 FUNC_0(VAR_43, VAR_20, 0);
 FUNC_0(VAR_43, VAR_31, 0);
 FUNC_0(VAR_43, VAR_37, 0);
 FUNC_0(VAR_43, VAR_38, 0);
 FUNC_0(VAR_43, VAR_34, 0);
 FUNC_0(VAR_43, VAR_36, 0);
 FUNC_0(VAR_43, VAR_35, 0);


 FUNC_0(VAR_43, VAR_39, 0x1BF0);


 FUNC_0(VAR_43, VAR_4, (VAR_44[4] << 8) | VAR_44[5]);
 FUNC_0(VAR_43, VAR_5, (VAR_44[2] << 8) | VAR_44[3]);
 FUNC_0(VAR_43, VAR_6, (VAR_44[0] << 8) | VAR_44[1]);


 FUNC_0(VAR_43, VAR_40, VAR_41);
}
