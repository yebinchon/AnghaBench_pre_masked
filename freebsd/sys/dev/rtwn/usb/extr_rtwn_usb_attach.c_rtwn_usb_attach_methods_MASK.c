
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int bcn_check_interval; int sc_beacon_unload; void* sc_beacon_update_end; void* sc_beacon_update_begin; int sc_drop_incorrect_tx; int sc_set_desc_addr; int sc_get_qmap; int sc_fw_write_block; int sc_abort_xfers; int sc_reset_lists; int sc_start_xfers; int sc_tx_start; int sc_delay; int sc_read_4; int sc_read_2; int sc_read_1; int sc_write_4; int sc_write_2; int sc_write_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_17)
{
 VAR_17->sc_write_1 = VAR_14;
 VAR_17->sc_write_2 = VAR_15;
 VAR_17->sc_write_4 = VAR_16;
 VAR_17->sc_read_1 = VAR_8;
 VAR_17->sc_read_2 = VAR_9;
 VAR_17->sc_read_4 = VAR_10;
 VAR_17->sc_delay = VAR_4;
 VAR_17->sc_tx_start = VAR_13;
 VAR_17->sc_start_xfers = VAR_12;
 VAR_17->sc_reset_lists = VAR_11;
 VAR_17->sc_abort_xfers = VAR_3;
 VAR_17->sc_fw_write_block = VAR_6;
 VAR_17->sc_get_qmap = VAR_7;
 VAR_17->sc_set_desc_addr = VAR_0;
 VAR_17->sc_drop_incorrect_tx = VAR_5;
 VAR_17->sc_beacon_update_begin = VAR_2;
 VAR_17->sc_beacon_update_end = VAR_2;
 VAR_17->sc_beacon_unload = VAR_1;

 VAR_17->bcn_check_interval = 100;
}
