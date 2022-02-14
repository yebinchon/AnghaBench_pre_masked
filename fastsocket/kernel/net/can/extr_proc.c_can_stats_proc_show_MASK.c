
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {scalar_t__ user_reset; scalar_t__ stats_reset; scalar_t__ rcv_entries_max; scalar_t__ rcv_entries; } ;
struct TYPE_5__ {scalar_t__ max_rx_rate; scalar_t__ max_tx_rate; scalar_t__ max_rx_match_ratio; scalar_t__ current_rx_rate; scalar_t__ current_tx_rate; scalar_t__ current_rx_match_ratio; scalar_t__ total_rx_rate; scalar_t__ total_tx_rate; scalar_t__ total_rx_match_ratio; scalar_t__ matches; scalar_t__ rx_frames; scalar_t__ tx_frames; } ;
struct TYPE_4__ {scalar_t__ function; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 FUNC_1(VAR_4, '\n');
 FUNC_0(VAR_4, " %8ld transmitted frames (TXF)\n", VAR_2.tx_frames);
 FUNC_0(VAR_4, " %8ld received frames (RXF)\n", VAR_2.rx_frames);
 FUNC_0(VAR_4, " %8ld matched frames (RXMF)\n", VAR_2.matches);

 FUNC_1(VAR_4, '\n');

 if (VAR_3.function == VAR_1) {
  FUNC_0(VAR_4, " %8ld %% total match ratio (RXMR)\n",
    VAR_2.total_rx_match_ratio);

  FUNC_0(VAR_4, " %8ld frames/s total tx rate (TXR)\n",
    VAR_2.total_tx_rate);
  FUNC_0(VAR_4, " %8ld frames/s total rx rate (RXR)\n",
    VAR_2.total_rx_rate);

  FUNC_1(VAR_4, '\n');

  FUNC_0(VAR_4, " %8ld %% current match ratio (CRXMR)\n",
    VAR_2.current_rx_match_ratio);

  FUNC_0(VAR_4, " %8ld frames/s current tx rate (CTXR)\n",
    VAR_2.current_tx_rate);
  FUNC_0(VAR_4, " %8ld frames/s current rx rate (CRXR)\n",
    VAR_2.current_rx_rate);

  FUNC_1(VAR_4, '\n');

  FUNC_0(VAR_4, " %8ld %% max match ratio (MRXMR)\n",
    VAR_2.max_rx_match_ratio);

  FUNC_0(VAR_4, " %8ld frames/s max tx rate (MTXR)\n",
    VAR_2.max_tx_rate);
  FUNC_0(VAR_4, " %8ld frames/s max rx rate (MRXR)\n",
    VAR_2.max_rx_rate);

  FUNC_1(VAR_4, '\n');
 }

 FUNC_0(VAR_4, " %8ld current receive list entries (CRCV)\n",
   VAR_0.rcv_entries);
 FUNC_0(VAR_4, " %8ld maximum receive list entries (MRCV)\n",
   VAR_0.rcv_entries_max);

 if (VAR_0.stats_reset)
  FUNC_0(VAR_4, "\n %8ld statistic resets (STR)\n",
    VAR_0.stats_reset);

 if (VAR_0.user_reset)
  FUNC_0(VAR_4, " %8ld user statistic resets (USTR)\n",
    VAR_0.user_reset);

 FUNC_1(VAR_4, '\n');
 return 0;
}
