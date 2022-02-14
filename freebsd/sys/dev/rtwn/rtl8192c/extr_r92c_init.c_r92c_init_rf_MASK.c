
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int nrxchains; int * rf_prog; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; int * rf_chnlbw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct rtwn_softc*,int *,int) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int,int) ;
 int FUNC_6 (struct rtwn_softc*,int) ;
 int FUNC_7 (struct rtwn_softc*,int,int ) ;
 int FUNC_8 (struct rtwn_softc*,int ,int ,int) ;

void
FUNC_9(struct rtwn_softc *VAR_10)
{
 struct r92c_softc *VAR_11 = VAR_10->sc_priv;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 for (VAR_15 = 0, VAR_14 = 0; VAR_15 < VAR_10->nrxchains; VAR_15++, VAR_14++) {

  VAR_16 = VAR_15 / 2;
  VAR_17 = (VAR_15 % 2) * 16;
  VAR_12 = FUNC_4(VAR_10, FUNC_1(VAR_16));
  VAR_13 = (VAR_12 >> VAR_17) & 0x10;


  FUNC_5(VAR_10, FUNC_0(VAR_15),
      0, 0x100000);
  FUNC_6(VAR_10, 1);

  FUNC_5(VAR_10, FUNC_0(VAR_15),
      0, 0x10);
  FUNC_6(VAR_10, 1);

  FUNC_5(VAR_10, FUNC_2(VAR_15),
      VAR_3, 0);
  FUNC_6(VAR_10, 1);
  FUNC_5(VAR_10, FUNC_2(VAR_15),
      VAR_4, 0);
  FUNC_6(VAR_10, 1);


  VAR_14 += FUNC_3(VAR_10, &VAR_10->rf_prog[VAR_14], VAR_15);


  FUNC_5(VAR_10, FUNC_1(VAR_16),
      0x10 << VAR_17, VAR_13 << VAR_17);


  VAR_11->rf_chnlbw[VAR_15] = FUNC_7(VAR_10, VAR_15,
      VAR_7);
 }

 if ((VAR_11->chip & (VAR_1 | VAR_0)) ==
     VAR_1) {
  FUNC_8(VAR_10, 0, VAR_8, 0x30255);
  FUNC_8(VAR_10, 0, VAR_9, 0x50a00);
 }


 FUNC_5(VAR_10, VAR_2, 0, VAR_5);
 FUNC_5(VAR_10, VAR_2, 0, VAR_6);
}
