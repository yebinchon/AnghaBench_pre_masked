
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int* rf_chnlbw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ,int ) ;

void
FUNC_3(struct rtwn_softc *VAR_7, uint8_t VAR_8)
{
 struct r92c_softc *VAR_9 = VAR_7->sc_priv;

 FUNC_2(VAR_7, VAR_1, 0, VAR_2);

 FUNC_0(VAR_7, VAR_3, VAR_5, 0);
 FUNC_0(VAR_7, VAR_4, VAR_5, 0);


 FUNC_1(VAR_7, 0, VAR_6,
     (VAR_9->rf_chnlbw[0] & ~0xfff) | VAR_8 | VAR_0);
}
