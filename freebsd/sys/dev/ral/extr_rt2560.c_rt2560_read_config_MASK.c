
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct rt2560_softc {int rf_rev; int hw_radio; int led_mode; int rx_ant; int tx_ant; int nb_ant; int* txpow; int rssi_corr; TYPE_1__* bbp_prom; } ;
struct TYPE_2__ {int reg; int val; } ;


 int FUNC_0 (struct rt2560_softc*,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct rt2560_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct rt2560_softc *VAR_5)
{
 uint16_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 VAR_5->rf_rev = (VAR_6 >> 11) & 0x7;
 VAR_5->hw_radio = (VAR_6 >> 10) & 0x1;
 VAR_5->led_mode = (VAR_6 >> 6) & 0x7;
 VAR_5->rx_ant = (VAR_6 >> 4) & 0x3;
 VAR_5->tx_ant = (VAR_6 >> 2) & 0x3;
 VAR_5->nb_ant = VAR_6 & 0x3;


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  VAR_6 = FUNC_1(VAR_5, VAR_1 + VAR_7);
  if (VAR_6 == 0 || VAR_6 == 0xffff)
   continue;

  VAR_5->bbp_prom[VAR_7].reg = VAR_6 >> 8;
  VAR_5->bbp_prom[VAR_7].val = VAR_6 & 0xff;
 }


 for (VAR_7 = 0; VAR_7 < 14 / 2; VAR_7++) {
  VAR_6 = FUNC_1(VAR_5, VAR_4 + VAR_7);
  VAR_5->txpow[VAR_7 * 2] = VAR_6 & 0xff;
  VAR_5->txpow[VAR_7 * 2 + 1] = VAR_6 >> 8;
 }
 for (VAR_7 = 0; VAR_7 < 14; ++VAR_7) {
  if (VAR_5->txpow[VAR_7] > 31)
   VAR_5->txpow[VAR_7] = 24;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if ((VAR_6 & 0xff) == 0xff)
  VAR_5->rssi_corr = VAR_0;
 else
  VAR_5->rssi_corr = VAR_6 & 0xff;
 FUNC_0(VAR_5, "rssi correction %d, calibrate 0x%02x\n",
   VAR_5->rssi_corr, VAR_6);
}
