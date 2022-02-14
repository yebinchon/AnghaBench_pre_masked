
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*,int ,int) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int ) ;
 int FUNC_5 (struct rtwn_softc*,scalar_t__,int) ;

void
FUNC_6(struct rtwn_softc *VAR_7)
{


 FUNC_3(VAR_7, VAR_2, 0, VAR_1);


 FUNC_5(VAR_7, VAR_0, 0xffffffff);
 FUNC_5(VAR_7, VAR_0 + 4, 0xffffffff);
 FUNC_1(VAR_7, VAR_4, 1);


 FUNC_0(VAR_7);

 FUNC_2(VAR_7);

 FUNC_4(VAR_7, VAR_3, 0);

 if (VAR_7->sc_ratectl_sysctl == VAR_5) {

  VAR_7->sc_ratectl = VAR_6;
 } else
  VAR_7->sc_ratectl = VAR_7->sc_ratectl_sysctl;
}
