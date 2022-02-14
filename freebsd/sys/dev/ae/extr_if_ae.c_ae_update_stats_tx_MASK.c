
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int tx_underrun; int tx_abortcol; int tx_latecol; int tx_multicol; int tx_singlecol; int tx_excdefer; int tx_defer; int tx_ctrl; int tx_pause; int tx_mcast; int tx_bcast; } ;
typedef TYPE_1__ ae_stats_t ;


 int VAR_0 ;
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

__attribute__((used)) static void
FUNC_0(uint16_t VAR_11, ae_stats_t *VAR_12)
{

 if ((VAR_11 & VAR_1) != 0)
  VAR_12->tx_bcast++;
 if ((VAR_11 & VAR_6) != 0)
  VAR_12->tx_mcast++;
 if ((VAR_11 & VAR_8) != 0)
  VAR_12->tx_pause++;
 if ((VAR_11 & VAR_2) != 0)
  VAR_12->tx_ctrl++;
 if ((VAR_11 & VAR_3) != 0)
  VAR_12->tx_defer++;
 if ((VAR_11 & VAR_4) != 0)
  VAR_12->tx_excdefer++;
 if ((VAR_11 & VAR_9) != 0)
  VAR_12->tx_singlecol++;
 if ((VAR_11 & VAR_7) != 0)
  VAR_12->tx_multicol++;
 if ((VAR_11 & VAR_5) != 0)
  VAR_12->tx_latecol++;
 if ((VAR_11 & VAR_0) != 0)
  VAR_12->tx_abortcol++;
 if ((VAR_11 & VAR_10) != 0)
  VAR_12->tx_underrun++;
}
