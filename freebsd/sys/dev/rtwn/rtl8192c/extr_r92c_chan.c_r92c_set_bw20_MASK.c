
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ,int ) ;

void
FUNC_3(struct rtwn_softc *VAR_9, uint8_t VAR_10)
{
 struct r92c_softc *VAR_11 = VAR_9->sc_priv;

 FUNC_2(VAR_9, VAR_0, 0, VAR_1);

 FUNC_0(VAR_9, VAR_4, VAR_6, 0);
 FUNC_0(VAR_9, VAR_5, VAR_6, 0);

 FUNC_0(VAR_9, VAR_2, 0,
     VAR_3);


 FUNC_1(VAR_9, 0, VAR_7,
     (VAR_11->rf_chnlbw[0] & ~0xfff) | VAR_10 | VAR_8);
}
