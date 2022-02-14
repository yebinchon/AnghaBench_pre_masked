
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf {int* rf_nrssi_table; int rf_idle_tssi0; int rf_idle_tssi; int rf_txpower_map; int rf_txpower_map0; scalar_t__ rf_rx_gain; scalar_t__ rf_lo_gain; void** rf_nrssi; scalar_t__ rf_nrssi_slope; int rf_lo_used; int rf_lo; int rf_flags; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct bwi_rf *VAR_3)
{
 int VAR_4;

 VAR_3->rf_flags &= ~VAR_2;
 FUNC_1(VAR_3->rf_lo, sizeof(VAR_3->rf_lo));
 FUNC_1(VAR_3->rf_lo_used, sizeof(VAR_3->rf_lo_used));

 VAR_3->rf_nrssi_slope = 0;
 VAR_3->rf_nrssi[0] = VAR_0;
 VAR_3->rf_nrssi[1] = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  VAR_3->rf_nrssi_table[VAR_4] = VAR_4;

 VAR_3->rf_lo_gain = 0;
 VAR_3->rf_rx_gain = 0;

 FUNC_0(VAR_3->rf_txpower_map0, VAR_3->rf_txpower_map,
       sizeof(VAR_3->rf_txpower_map));
 VAR_3->rf_idle_tssi = VAR_3->rf_idle_tssi0;
}
