
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int* ic_macaddr; } ;
struct ural_softc {int rf_rev; int hw_radio; int led_mode; int rx_ant; int tx_ant; int nb_ant; int* bbp_prom; int* txpow; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ural_softc*,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 uint16_t VAR_6;

 FUNC_1(VAR_4, VAR_2, &VAR_6, 2);
 VAR_6 = FUNC_0(VAR_6);
 VAR_4->rf_rev = (VAR_6 >> 11) & 0x7;
 VAR_4->hw_radio = (VAR_6 >> 10) & 0x1;
 VAR_4->led_mode = (VAR_6 >> 6) & 0x7;
 VAR_4->rx_ant = (VAR_6 >> 4) & 0x3;
 VAR_4->tx_ant = (VAR_6 >> 2) & 0x3;
 VAR_4->nb_ant = VAR_6 & 0x3;


 FUNC_1(VAR_4, VAR_0, VAR_5->ic_macaddr, 6);


 FUNC_1(VAR_4, VAR_1, VAR_4->bbp_prom, 2 * 16);


 FUNC_1(VAR_4, VAR_3, VAR_4->txpow, 14);
}
