
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int ntxchains; int nrxchains; int sc_ant; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct rtwn_softc*,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_5 (struct rtwn_softc*,int ,int,int) ;

void
FUNC_6(struct rtwn_softc *VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2->ntxchains != 1 || VAR_2->nrxchains != 1)
  return;

 FUNC_5(VAR_2, VAR_1, 0, 0x80);
 FUNC_4(VAR_2, FUNC_2(0), 0, 0x2000);
 VAR_3 = FUNC_3(VAR_2, FUNC_1(0));
 VAR_2->sc_ant = FUNC_0(VAR_3, VAR_0);
 FUNC_5(VAR_2, VAR_1, 0x80, 0);
}
