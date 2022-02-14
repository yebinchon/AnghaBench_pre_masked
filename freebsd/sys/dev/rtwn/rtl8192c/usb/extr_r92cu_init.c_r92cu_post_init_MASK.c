
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int rs_c2h_timeout; int rs_c2h_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ,struct rtwn_softc*) ;
 int VAR_5 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_softc*,int,int) ;
 int FUNC_5 (struct rtwn_softc*,int ,int) ;

void
FUNC_6(struct rtwn_softc *VAR_6)
{

 FUNC_5(VAR_6, VAR_0, 0x5);


 FUNC_1(VAR_6);

 FUNC_2(VAR_6);


 FUNC_4(VAR_6, 0xfe40, 0xe0);
 FUNC_4(VAR_6, 0xfe41, 0x8d);
 FUNC_4(VAR_6, 0xfe42, 0x80);

 FUNC_3(VAR_6);


 FUNC_4(VAR_6, 0x15, 0xe9);


 if (VAR_6->sc_flags & VAR_1) {
  struct r92c_softc *VAR_7 = VAR_6->sc_priv;

  if (VAR_6->sc_ratectl_sysctl == VAR_2) {

   VAR_6->sc_ratectl = VAR_3;
  } else
   VAR_6->sc_ratectl = VAR_6->sc_ratectl_sysctl;


  FUNC_0(&VAR_7->rs_c2h_report, VAR_7->rs_c2h_timeout,
      VAR_5, VAR_6);
 } else

  VAR_6->sc_ratectl = VAR_4;
}
