
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int* ic_macaddr; } ;
struct rum_softc {int rf_rev; int hw_radio; int rx_ant; int tx_ant; int nb_ant; int ext_5ghz_lna; int ext_2ghz_lna; int rssi_2ghz_corr; int rssi_5ghz_corr; int rffreq; int* txpow; int* bbp_prom; TYPE_1__ sc_ic; } ;
typedef void* int8_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (struct rum_softc*,int ,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct rum_softc *VAR_8)
{
 uint16_t VAR_9;





 FUNC_3(VAR_8, VAR_0, VAR_8->sc_ic.ic_macaddr, 6);

 FUNC_3(VAR_8, VAR_1, &VAR_9, 2);
 VAR_9 = FUNC_1(VAR_9);
 VAR_8->rf_rev = (VAR_9 >> 11) & 0x1f;
 VAR_8->hw_radio = (VAR_9 >> 10) & 0x1;
 VAR_8->rx_ant = (VAR_9 >> 4) & 0x3;
 VAR_8->tx_ant = (VAR_9 >> 2) & 0x3;
 VAR_8->nb_ant = VAR_9 & 0x3;

 FUNC_0("RF revision=%d\n", VAR_8->rf_rev);

 FUNC_3(VAR_8, VAR_3, &VAR_9, 2);
 VAR_9 = FUNC_1(VAR_9);
 VAR_8->ext_5ghz_lna = (VAR_9 >> 6) & 0x1;
 VAR_8->ext_2ghz_lna = (VAR_9 >> 4) & 0x1;

 FUNC_0("External 2GHz LNA=%d\nExternal 5GHz LNA=%d\n",
     VAR_8->ext_2ghz_lna, VAR_8->ext_5ghz_lna);

 FUNC_3(VAR_8, VAR_5, &VAR_9, 2);
 VAR_9 = FUNC_1(VAR_9);
 if ((VAR_9 & 0xff) != 0xff)
  VAR_8->rssi_2ghz_corr = (int8_t)(VAR_9 & 0xff);


 if (VAR_8->rssi_2ghz_corr < -10 || VAR_8->rssi_2ghz_corr > 10)
  VAR_8->rssi_2ghz_corr = 0;

 FUNC_3(VAR_8, VAR_6, &VAR_9, 2);
 VAR_9 = FUNC_1(VAR_9);
 if ((VAR_9 & 0xff) != 0xff)
  VAR_8->rssi_5ghz_corr = (int8_t)(VAR_9 & 0xff);


 if (VAR_8->rssi_5ghz_corr < -10 || VAR_8->rssi_5ghz_corr > 10)
  VAR_8->rssi_5ghz_corr = 0;

 if (VAR_8->ext_2ghz_lna)
  VAR_8->rssi_2ghz_corr -= 14;
 if (VAR_8->ext_5ghz_lna)
  VAR_8->rssi_5ghz_corr -= 14;

 FUNC_0("RSSI 2GHz corr=%d\nRSSI 5GHz corr=%d\n",
     VAR_8->rssi_2ghz_corr, VAR_8->rssi_5ghz_corr);

 FUNC_3(VAR_8, VAR_4, &VAR_9, 2);
 VAR_9 = FUNC_1(VAR_9);
 if ((VAR_9 & 0xff) != 0xff)
  VAR_8->rffreq = VAR_9 & 0xff;

 FUNC_0("RF freq=%d\n", VAR_8->rffreq);


 FUNC_3(VAR_8, VAR_7, VAR_8->txpow, 14);

 FUNC_2(VAR_8->txpow + 14, 24, sizeof (VAR_8->txpow) - 14);






 FUNC_3(VAR_8, VAR_2, VAR_8->bbp_prom, 2 * 16);
}
