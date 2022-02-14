
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int ic_macaddr; } ;
struct rtwn_softc {int ntxchains; TYPE_2__ sc_ic; int thermal_meter; struct r92e_softc* sc_priv; } ;
struct r92e_tx_pwr_diff_2g {TYPE_3__* diff123; int ht20_ofdm; } ;
struct r92e_tx_pwr_2g {int * cck; int * ht40; } ;
struct r92e_softc {int regulatory; void*** bw40_tx_pwr_diff_2g; void*** bw20_tx_pwr_diff_2g; void*** ofdm_tx_pwr_diff_2g; void*** cck_tx_pwr_diff_2g; scalar_t__** cck_tx_pwr; scalar_t__** ht40_tx_pwr_2g; scalar_t__ crystalcap; } ;
struct r92e_rom {int macaddr; int rf_board_opt; TYPE_1__* tx_pwr; int crystalcap; int thermal_meter; } ;
struct TYPE_6__ {int ht40_ht20; int ofdm_cck; } ;
struct TYPE_4__ {struct r92e_tx_pwr_diff_2g pwr_diff_2g; struct r92e_tx_pwr_2g pwr_2g; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

void
FUNC_5(struct rtwn_softc *VAR_8, uint8_t *VAR_9)
{
 struct r92e_softc *VAR_10 = VAR_8->sc_priv;
 struct r92e_rom *VAR_11 = (struct r92e_rom *)VAR_9;
 uint8_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_8->thermal_meter = VAR_11->thermal_meter;
 VAR_10->crystalcap = FUNC_2(VAR_11->crystalcap,
     VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_8->ntxchains; VAR_13++) {
  struct r92e_tx_pwr_2g *VAR_16 = &VAR_11->tx_pwr[VAR_13].pwr_2g;
  struct r92e_tx_pwr_diff_2g *VAR_17 =
      &VAR_11->tx_pwr[VAR_13].pwr_diff_2g;

  for (VAR_14 = 0; VAR_14 < VAR_6 - 1; VAR_14++) {
   VAR_10->cck_tx_pwr[VAR_13][VAR_14] =
       FUNC_2(VAR_16->cck[VAR_14],
    VAR_3);
   VAR_10->ht40_tx_pwr_2g[VAR_13][VAR_14] =
       FUNC_2(VAR_16->ht40[VAR_14],
    VAR_3);
  }
  VAR_10->cck_tx_pwr[VAR_13][VAR_14] = FUNC_2(VAR_16->cck[VAR_14],
      VAR_3);

  VAR_10->cck_tx_pwr_diff_2g[VAR_13][0] = 0;
  VAR_10->ofdm_tx_pwr_diff_2g[VAR_13][0] = FUNC_3(
      FUNC_1(VAR_17->ht20_ofdm, VAR_1));
  VAR_10->bw20_tx_pwr_diff_2g[VAR_13][0] = FUNC_3(
      FUNC_1(VAR_17->ht20_ofdm, VAR_0));
  VAR_10->bw40_tx_pwr_diff_2g[VAR_13][0] = 0;
  VAR_12 = FUNC_2(VAR_17->ht20_ofdm,
      VAR_5);
  if (VAR_12 != VAR_5) {
   VAR_10->ofdm_tx_pwr_diff_2g[VAR_13][0] = FUNC_3(
       FUNC_1(VAR_17->ht20_ofdm, VAR_1));
   VAR_10->bw20_tx_pwr_diff_2g[VAR_13][0] = FUNC_3(
       FUNC_1(VAR_17->ht20_ofdm, VAR_0));
  } else {
   VAR_10->ofdm_tx_pwr_diff_2g[VAR_13][0] =
   VAR_10->bw20_tx_pwr_diff_2g[VAR_13][0] = VAR_12;
  }

  for (VAR_14 = 1, VAR_15 = 0; VAR_15 < FUNC_4(VAR_17->diff123); VAR_14++, VAR_15++) {
   VAR_12 = FUNC_2(
       VAR_17->diff123[VAR_15].ofdm_cck,
       VAR_4);
   if (VAR_12 != VAR_4) {
    VAR_10->cck_tx_pwr_diff_2g[VAR_13][VAR_14] = FUNC_3(
        FUNC_1(VAR_17->diff123[VAR_15].ofdm_cck,
        VAR_1));
    VAR_10->ofdm_tx_pwr_diff_2g[VAR_13][VAR_14] = FUNC_3(
        FUNC_1(VAR_17->diff123[VAR_15].ofdm_cck,
        VAR_0));
   } else {
    VAR_10->cck_tx_pwr_diff_2g[VAR_13][VAR_14] =
    VAR_10->ofdm_tx_pwr_diff_2g[VAR_13][VAR_14] = VAR_12;
   }
   VAR_12 = FUNC_2(
       VAR_17->diff123[VAR_15].ht40_ht20,
       VAR_4);
   if (VAR_12 != VAR_4) {
    VAR_10->bw20_tx_pwr_diff_2g[VAR_13][VAR_14] = FUNC_3(
        FUNC_1(VAR_17->diff123[VAR_15].ht40_ht20,
        VAR_1));
    VAR_10->bw40_tx_pwr_diff_2g[VAR_13][VAR_14] = FUNC_3(
        FUNC_1(VAR_17->diff123[VAR_15].ht40_ht20,
        VAR_0));
   } else {
    VAR_10->bw20_tx_pwr_diff_2g[VAR_13][VAR_14] =
    VAR_10->bw40_tx_pwr_diff_2g[VAR_13][VAR_14] = VAR_12;
   }
  }
 }

 VAR_10->regulatory = FUNC_1(VAR_11->rf_board_opt, VAR_2);


 FUNC_0(VAR_8->sc_ic.ic_macaddr, VAR_11->macaddr);
}
