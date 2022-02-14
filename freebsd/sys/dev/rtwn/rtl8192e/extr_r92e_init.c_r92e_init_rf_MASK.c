
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int nrxchains; int * rf_prog; struct r92e_softc* sc_priv; } ;
struct r92e_softc {int * rf_chnlbw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct rtwn_softc*,int *,int) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_6 (struct rtwn_softc*,int) ;
 int FUNC_7 (struct rtwn_softc*,int,int ) ;

void
FUNC_8(struct rtwn_softc *VAR_6)
{
 struct r92e_softc *VAR_7 = VAR_6->sc_priv;
 uint32_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_11 = 0, VAR_10 = 0; VAR_11 < VAR_6->nrxchains; VAR_11++, VAR_10++) {

  VAR_12 = VAR_11 / 2;
  VAR_13 = (VAR_11 % 2) * 16;
  VAR_8 = FUNC_4(VAR_6, FUNC_1(VAR_12));
  VAR_9 = (VAR_8 >> VAR_13) & 0x10;


  FUNC_5(VAR_6, FUNC_0(VAR_11),
      0, 0x100000);
  FUNC_6(VAR_6, 1);

  FUNC_5(VAR_6, FUNC_0(VAR_11),
      0, 0x10);
  FUNC_6(VAR_6, 1);

  FUNC_5(VAR_6, FUNC_2(VAR_11),
      VAR_1, 0);
  FUNC_6(VAR_6, 1);
  FUNC_5(VAR_6, FUNC_2(VAR_11),
      VAR_2, 0);
  FUNC_6(VAR_6, 1);


  VAR_10 += FUNC_3(VAR_6, &VAR_6->rf_prog[VAR_10], VAR_11);


  VAR_7->rf_chnlbw[VAR_11] = FUNC_7(VAR_6, VAR_11, VAR_5);
 }


 FUNC_5(VAR_6, VAR_0, 0, VAR_3);
 FUNC_5(VAR_6, VAR_0, 0, VAR_4);
}
