
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int rs_c2h_timeout; scalar_t__ rs_c2h_pending; scalar_t__ rs_c2h_paused; int rs_c2h_report; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_0 (int *) ;
 int VAR_48 ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_6 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_7 (struct rtwn_softc*,scalar_t__,int) ;
 int FUNC_8 (struct rtwn_softc*,int ,int) ;
 int FUNC_9 (struct rtwn_softc*,int ,int) ;

void
FUNC_10(struct rtwn_softc *VAR_49)
{

 struct r92c_softc *VAR_50 = VAR_49->sc_priv;

 uint32_t VAR_51;
 int VAR_52;



 FUNC_0(&VAR_50->rs_c2h_report);
 VAR_50->rs_c2h_paused = 0;
 VAR_50->rs_c2h_pending = 0;
 VAR_50->rs_c2h_timeout = VAR_48;



 VAR_52 = FUNC_7(VAR_49, VAR_45, VAR_46);
 if (VAR_52 == VAR_0)
  return;


 FUNC_5(VAR_49, 0, 0, 0);

 FUNC_7(VAR_49, VAR_3, VAR_4);


 FUNC_7(VAR_49, VAR_29,
     VAR_35 | VAR_34 |
     VAR_30);
 FUNC_7(VAR_49, VAR_29,
     VAR_35 | VAR_34);





 if (FUNC_2(VAR_49, VAR_18) & VAR_19) {

  FUNC_7(VAR_49, VAR_18, 0);


  FUNC_1(VAR_49, VAR_47);
 }



 FUNC_7(VAR_49, VAR_29 + 1,
     (VAR_31 |
      VAR_32 |
      VAR_33) >> 8);


 FUNC_7(VAR_49, VAR_18, 0);


 FUNC_8(VAR_49, VAR_22,
     VAR_25 |
     VAR_24 |
     VAR_26 |
     VAR_23 |
     VAR_28 |
     VAR_27 |
     0x4000);


 FUNC_7(VAR_49, VAR_1, 0x80);


 FUNC_8(VAR_49, VAR_2, 0x880F);


 FUNC_7(VAR_49, VAR_36,
     VAR_41 |
     VAR_42 |
     VAR_43 |
     VAR_40 |
     VAR_38 |
     VAR_37);





 FUNC_8(VAR_49, VAR_9, 0x0000);

 VAR_51 = FUNC_4(VAR_49, VAR_11) & ~0x0000ff00;
 VAR_51 |= ((VAR_51 << 8) & 0x0000ff00) | 0x00ff0000;
 FUNC_9(VAR_49, VAR_11, VAR_51);


 FUNC_7(VAR_49, VAR_17, 0x00);

 VAR_51 = FUNC_3(VAR_49, VAR_10) & ~0x00f0;
 VAR_51 |= (((VAR_51 & 0x000f) << 4) | 0x0780);
 FUNC_8(VAR_49, VAR_10, VAR_51);


 FUNC_8(VAR_49, VAR_16, 0x8080);





 FUNC_8(VAR_49, VAR_22,
     VAR_25 |
     VAR_24 |
     VAR_26 |
     VAR_23 |
     VAR_28 |
     VAR_27 |
     0x4000);


 FUNC_7(VAR_49, VAR_36 + 1,
     (VAR_39 |
      VAR_44) >> 8);





 FUNC_7(VAR_49, VAR_12, VAR_13);

 FUNC_6(VAR_49, VAR_14,
     VAR_15, 0);


 FUNC_7(VAR_49, VAR_21, 0x23);


 FUNC_8(VAR_49, VAR_5,
     VAR_7 |
     VAR_6 |
     VAR_8);


 FUNC_7(VAR_49, VAR_20, 0x0E);
}
