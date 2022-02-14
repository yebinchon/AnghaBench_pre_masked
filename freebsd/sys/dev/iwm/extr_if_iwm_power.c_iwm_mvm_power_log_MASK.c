
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_mac_power_cmd {int flags; int keep_alive_seconds; int skip_dtim_periods; int tx_data_timeout; int rx_data_timeout; int id_and_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct iwm_softc *VAR_5, struct iwm_mac_power_cmd *VAR_6)
{
 FUNC_0(VAR_5, VAR_1 | VAR_0,
     "Sending power table command on mac id 0x%X for "
     "power level %d, flags = 0x%X\n",
     VAR_6->id_and_color, VAR_4, FUNC_2(VAR_6->flags));
 FUNC_0(VAR_5, VAR_1 | VAR_0,
     "Keep alive = %u sec\n", FUNC_2(VAR_6->keep_alive_seconds));

 if (!(VAR_6->flags & FUNC_1(VAR_2))) {
  FUNC_0(VAR_5, VAR_1 | VAR_0,
      "Disable power management\n");
  return;
 }

 FUNC_0(VAR_5, VAR_1 | VAR_0,
     "Rx timeout = %u usec\n", FUNC_3(VAR_6->rx_data_timeout));
 FUNC_0(VAR_5, VAR_1 | VAR_0,
     "Tx timeout = %u usec\n", FUNC_3(VAR_6->tx_data_timeout));
 if (VAR_6->flags & FUNC_1(VAR_3))
  FUNC_0(VAR_5, VAR_1 | VAR_0,
      "DTIM periods to skip = %u\n", VAR_6->skip_dtim_periods);
}
