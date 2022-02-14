
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long jiffies_init; int rx_frames; int tx_frames; int matches; int total_rx_match_ratio; int rx_frames_delta; int current_rx_match_ratio; int matches_delta; scalar_t__ current_tx_rate; int tx_frames_delta; scalar_t__ current_rx_rate; scalar_t__ max_tx_rate; scalar_t__ max_rx_rate; int max_rx_match_ratio; void* total_rx_rate; void* total_tx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long,int,int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;

void FUNC_4(unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_4;


 if (VAR_5)
  FUNC_1();


 if (VAR_7 < VAR_2.jiffies_init)
  FUNC_1();


 if (VAR_2.rx_frames > (VAR_1 / VAR_0))
  FUNC_1();


 if (VAR_2.tx_frames > (VAR_1 / VAR_0))
  FUNC_1();


 if (VAR_2.matches > (VAR_1 / 100))
  FUNC_1();


 if (VAR_2.rx_frames)
  VAR_2.total_rx_match_ratio = (VAR_2.matches * 100) /
   VAR_2.rx_frames;

 VAR_2.total_tx_rate = FUNC_0(VAR_2.jiffies_init, VAR_7,
         VAR_2.tx_frames);
 VAR_2.total_rx_rate = FUNC_0(VAR_2.jiffies_init, VAR_7,
         VAR_2.rx_frames);


 if (VAR_2.rx_frames_delta)
  VAR_2.current_rx_match_ratio =
   (VAR_2.matches_delta * 100) /
   VAR_2.rx_frames_delta;

 VAR_2.current_tx_rate = FUNC_0(0, VAR_0, VAR_2.tx_frames_delta);
 VAR_2.current_rx_rate = FUNC_0(0, VAR_0, VAR_2.rx_frames_delta);


 if (VAR_2.max_tx_rate < VAR_2.current_tx_rate)
  VAR_2.max_tx_rate = VAR_2.current_tx_rate;

 if (VAR_2.max_rx_rate < VAR_2.current_rx_rate)
  VAR_2.max_rx_rate = VAR_2.current_rx_rate;

 if (VAR_2.max_rx_match_ratio < VAR_2.current_rx_match_ratio)
  VAR_2.max_rx_match_ratio = VAR_2.current_rx_match_ratio;


 VAR_2.tx_frames_delta = 0;
 VAR_2.rx_frames_delta = 0;
 VAR_2.matches_delta = 0;


 FUNC_2(&VAR_3, FUNC_3(VAR_4 + VAR_0));
}
