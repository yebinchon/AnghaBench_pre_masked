
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int rs_c2h_timeout; int rs_c2h_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,int ,struct rtwn_softc*) ;
 int VAR_7 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_softc*,int,int) ;
 int FUNC_5 (struct rtwn_softc*,int ,int) ;

void
FUNC_6(struct rtwn_softc *VAR_8)
{
 FUNC_5(VAR_8, VAR_1,
     0x1f00 | VAR_2);

 FUNC_4(VAR_8, VAR_0, 0xff);


 FUNC_3(VAR_8);

 FUNC_1(VAR_8);

 FUNC_2(VAR_8);


 FUNC_4(VAR_8, 0x15, 0xe9);


 if (VAR_8->sc_flags & VAR_3) {
  struct r92c_softc *VAR_9 = VAR_8->sc_priv;

  if (VAR_8->sc_ratectl_sysctl == VAR_4) {

   VAR_8->sc_ratectl = VAR_5;
  } else
   VAR_8->sc_ratectl = VAR_8->sc_ratectl_sysctl;


  FUNC_0(&VAR_9->rs_c2h_report, VAR_9->rs_c2h_timeout,
      VAR_7, VAR_8);
 } else

  VAR_8->sc_ratectl = VAR_6;
}
