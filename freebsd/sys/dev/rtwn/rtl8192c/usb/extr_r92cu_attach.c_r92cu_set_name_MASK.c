
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {char* name; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_3, uint8_t *VAR_4)
{
 struct r92c_softc *VAR_5 = VAR_3->sc_priv;

 if (!(VAR_5->chip & VAR_2)) {
  if (VAR_5->board_type == VAR_0)
   VAR_3->name = "RTL8188RU";
  else if (VAR_5->board_type == VAR_1)
   VAR_3->name = "RTL8188CU-VAU";
  else
   VAR_3->name = "RTL8188CUS";
 } else
  VAR_3->name = "RTL8192CU";
}
