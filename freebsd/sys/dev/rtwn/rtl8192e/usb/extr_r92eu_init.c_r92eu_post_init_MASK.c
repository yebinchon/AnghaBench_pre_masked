
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int ) ;

void
FUNC_2(struct rtwn_softc *VAR_7)
{


 FUNC_0(VAR_7, VAR_1, 0x08, 0);


 FUNC_1(VAR_7, VAR_0, 0);

 FUNC_1(VAR_7, VAR_2, 0);


 if (VAR_7->sc_flags & VAR_3) {
  if (VAR_7->sc_ratectl_sysctl == VAR_4) {

   VAR_7->sc_ratectl = VAR_5;
  } else
   VAR_7->sc_ratectl = VAR_7->sc_ratectl_sysctl;
 } else

  VAR_7->sc_ratectl = VAR_6;
}
