
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int crystalcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ) ;

void
FUNC_3(struct rtwn_softc *VAR_2)
{
 struct r12a_softc *VAR_3 = VAR_2->sc_priv;
 uint32_t VAR_4;
 uint8_t VAR_5;

 VAR_5 = VAR_3->crystalcap & 0x3f;
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_4, VAR_0, VAR_5 | (VAR_5 << 6));
 FUNC_2(VAR_2, VAR_1, VAR_4);
}
