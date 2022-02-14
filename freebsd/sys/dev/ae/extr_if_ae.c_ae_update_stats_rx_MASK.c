
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int rx_align; int rx_trunc; int rx_frag; int rx_runt; int rx_codeerr; int rx_crcerr; int rx_ctrl; int rx_pause; int rx_mcast; int rx_bcast; } ;
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

__attribute__((used)) static void
FUNC_0(uint16_t VAR_10, ae_stats_t *VAR_11)
{

 if ((VAR_10 & VAR_1) != 0)
  VAR_11->rx_bcast++;
 if ((VAR_10 & VAR_6) != 0)
  VAR_11->rx_mcast++;
 if ((VAR_10 & VAR_7) != 0)
  VAR_11->rx_pause++;
 if ((VAR_10 & VAR_4) != 0)
  VAR_11->rx_ctrl++;
 if ((VAR_10 & VAR_3) != 0)
  VAR_11->rx_crcerr++;
 if ((VAR_10 & VAR_2) != 0)
  VAR_11->rx_codeerr++;
 if ((VAR_10 & VAR_8) != 0)
  VAR_11->rx_runt++;
 if ((VAR_10 & VAR_5) != 0)
  VAR_11->rx_frag++;
 if ((VAR_10 & VAR_9) != 0)
  VAR_11->rx_trunc++;
 if ((VAR_10 & VAR_0) != 0)
  VAR_11->rx_align++;
}
