
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {char* name; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_1, uint8_t *VAR_2)
{
 struct r92c_softc *VAR_3 = VAR_1->sc_priv;

 if (VAR_3->chip & VAR_0)
  VAR_1->name = "RTL8192CE";
 else
  VAR_1->name = "RTL8188CE";
}
