
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtwn_softc*,int ) ;

void
FUNC_2(struct rtwn_softc *VAR_9, uint32_t VAR_10)
{
 struct r92c_softc *VAR_11 = VAR_9->sc_priv;

 if (VAR_10 & VAR_7) {
  VAR_11->chip |= VAR_0;

  if (FUNC_0(FUNC_1(VAR_9, VAR_3),
      VAR_4) ==
      VAR_5)
   VAR_11->chip |= VAR_1;
 }
 if (VAR_10 & VAR_8) {
  if (FUNC_0(VAR_10, VAR_6) == 0)
   VAR_11->chip |= VAR_2;
 }
}
