
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int nrxchains; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int pa_setting; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int,int ,int) ;
 int FUNC_1 (struct rtwn_softc*,int,int,int) ;

void
FUNC_2(struct rtwn_softc *VAR_1)
{
 struct r92c_softc *VAR_2 = VAR_1->sc_priv;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nrxchains; VAR_3++) {
  if (VAR_2->pa_setting & (1 << VAR_3))
   continue;
  FUNC_0(VAR_1, VAR_3, VAR_0, 0x0f406);
  FUNC_0(VAR_1, VAR_3, VAR_0, 0x4f406);
  FUNC_0(VAR_1, VAR_3, VAR_0, 0x8f406);
  FUNC_0(VAR_1, VAR_3, VAR_0, 0xcf406);
 }
 if (!(VAR_2->pa_setting & 0x10))
  FUNC_1(VAR_1, 0x16, 0xf0, 0x90);
}
