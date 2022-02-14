
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int rs_c2h_timeout; scalar_t__ rs_c2h_pending; scalar_t__ rs_c2h_paused; int rs_c2h_report; } ;


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
 int FUNC_0 (int *) ;
 int VAR_26 ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int) ;
 int FUNC_6 (struct rtwn_softc*,int ,int) ;
 int FUNC_7 (struct rtwn_softc*,int ,int ) ;

void
FUNC_8(struct rtwn_softc *VAR_27)
{

 struct r92c_softc *VAR_28 = VAR_27->sc_priv;


 FUNC_0(&VAR_28->rs_c2h_report);
 VAR_28->rs_c2h_paused = 0;
 VAR_28->rs_c2h_pending = 0;
 VAR_28->rs_c2h_timeout = VAR_26;




 FUNC_7(VAR_27, VAR_15, 0);
 FUNC_7(VAR_27, VAR_14, 0);


 FUNC_5(VAR_27, VAR_23, VAR_24);


 FUNC_5(VAR_27, VAR_18, 0);


 FUNC_3(VAR_27, VAR_21, 0, VAR_22);
 FUNC_3(VAR_27, VAR_21, VAR_22, 0);


 FUNC_4(VAR_27, VAR_4,
     VAR_7 | VAR_6 |
     VAR_13 | VAR_11 | VAR_10 |
     VAR_12 | VAR_9 | VAR_8 |
     VAR_5,
     0);



 if (FUNC_2(VAR_27, VAR_16) & VAR_17)
  FUNC_1(VAR_27, VAR_25);



 FUNC_6(VAR_27, VAR_0, 0x80);
 FUNC_5(VAR_27, VAR_20, 0x23);
 FUNC_5(VAR_27, VAR_1, 0x0e);
 FUNC_5(VAR_27, VAR_19, 0x0e);
 FUNC_5(VAR_27, VAR_2, VAR_3);
}
