
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct r92c_softc*,int ) ;

void
FUNC_1(struct rtwn_softc *VAR_1)
{
 struct r92c_softc *VAR_2 = VAR_1->sc_priv;

 FUNC_0(VAR_2, VAR_0);
}
