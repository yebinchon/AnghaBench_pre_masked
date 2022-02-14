
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {struct r92e_softc* sc_priv; } ;
struct r92e_softc {int crystalcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_3)
{
 struct r92e_softc *VAR_4 = VAR_3->sc_priv;
 uint32_t VAR_5;
 uint8_t VAR_6;

 VAR_6 = VAR_4->crystalcap & 0x3f;
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_1,
     FUNC_0(VAR_5, VAR_2, VAR_6 | VAR_6 << 6));
 FUNC_2(VAR_3, VAR_0, 0x000f81fb);
}
