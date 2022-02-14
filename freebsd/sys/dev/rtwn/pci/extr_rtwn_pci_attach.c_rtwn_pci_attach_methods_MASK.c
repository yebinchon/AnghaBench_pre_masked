
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int bcn_check_interval; int sc_beacon_unload; int sc_beacon_update_end; int sc_beacon_update_begin; void* sc_drop_incorrect_tx; int sc_set_desc_addr; int sc_get_qmap; int sc_fw_write_block; void* sc_abort_xfers; int sc_reset_lists; int sc_tx_start; int sc_delay; int sc_read_4; int sc_read_2; int sc_read_1; int sc_write_4; int sc_write_2; int sc_write_1; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_16)
{
 VAR_16->sc_write_1 = VAR_13;
 VAR_16->sc_write_2 = VAR_14;
 VAR_16->sc_write_4 = VAR_15;
 VAR_16->sc_read_1 = VAR_6;
 VAR_16->sc_read_2 = VAR_7;
 VAR_16->sc_read_4 = VAR_8;
 VAR_16->sc_delay = VAR_3;
 VAR_16->sc_tx_start = VAR_12;
 VAR_16->sc_reset_lists = VAR_10;
 VAR_16->sc_abort_xfers = VAR_0;
 VAR_16->sc_fw_write_block = VAR_4;
 VAR_16->sc_get_qmap = VAR_5;
 VAR_16->sc_set_desc_addr = VAR_11;
 VAR_16->sc_drop_incorrect_tx = VAR_0;
 VAR_16->sc_beacon_update_begin = VAR_1;
 VAR_16->sc_beacon_update_end = VAR_2;
 VAR_16->sc_beacon_unload = VAR_9;

 VAR_16->bcn_check_interval = 25000;
}
