
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int* rf_read_delay; int rs_set_rom_opts; int rs_tx_setup_macid; int rs_tx_setup_hwseq; int rs_tx_enable_ampdu; int rs_set_gain; int rs_get_txpower; int rs_set_bw20; int * rs_txpwr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r92c_softc* FUNC_0 (int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_11)
{
 struct r92c_softc *VAR_12;

 VAR_12 = FUNC_0(sizeof(struct r92c_softc), VAR_0, VAR_1 | VAR_2);

 VAR_12->rs_txpwr = &VAR_10;

 VAR_12->rs_set_bw20 = VAR_4;
 VAR_12->rs_get_txpower = VAR_3;
 VAR_12->rs_set_gain = VAR_5;
 VAR_12->rs_tx_enable_ampdu = VAR_6;
 VAR_12->rs_tx_setup_hwseq = VAR_7;
 VAR_12->rs_tx_setup_macid = VAR_8;
 VAR_12->rs_set_rom_opts = VAR_9;

 VAR_12->rf_read_delay[0] = 1000;
 VAR_12->rf_read_delay[1] = 1000;
 VAR_12->rf_read_delay[2] = 1000;

 VAR_11->sc_priv = VAR_12;

}
