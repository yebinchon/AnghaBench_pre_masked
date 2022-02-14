
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int chip; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_2, uint32_t VAR_3)
{
 struct r12a_softc *VAR_4 = VAR_2->sc_priv;

 if (FUNC_0(VAR_3, VAR_1) == 1)
  VAR_4->chip |= VAR_0;
}
