
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ena_tx_buffer {int print_once; int timestamp; } ;
struct TYPE_2__ {int missing_tx_comp; } ;
struct ena_ring {int ring_size; TYPE_1__ tx_stats; int qid; int first_interrupt; struct ena_tx_buffer* tx_buffer_info; } ;
struct ena_adapter {int missing_tx_timeout; int reset_reason; scalar_t__ missing_tx_threshold; int pdev; } ;
struct bintime {int dummy; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bintime*,int *) ;
 int FUNC_4 (struct bintime) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;
 int FUNC_7 (int ,char*,int ,int) ;
 int FUNC_8 (struct bintime*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct ena_adapter *VAR_5,
    struct ena_ring *VAR_6)
{
 struct bintime VAR_7, VAR_8;
 struct ena_tx_buffer *VAR_9;
 sbintime_t VAR_10;
 uint32_t VAR_11 = 0;
 int VAR_12, VAR_13 = 0;

 FUNC_8(&VAR_7);

 for (VAR_12 = 0; VAR_12 < VAR_6->ring_size; VAR_12++) {
  VAR_9 = &VAR_6->tx_buffer_info[VAR_12];

  if (FUNC_2(&VAR_9->timestamp) == 0)
   continue;

  VAR_8 = VAR_7;
  FUNC_3(&VAR_8, &VAR_9->timestamp);
  VAR_10 = FUNC_4(VAR_8);

  if (FUNC_10(!VAR_6->first_interrupt &&
      VAR_10 > 2 * VAR_5->missing_tx_timeout)) {




   FUNC_6(VAR_5->pdev,
       "Potential MSIX issue on Tx side Queue = %d. "
       "Reset the device\n", VAR_6->qid);
   if (FUNC_9(!FUNC_0(VAR_1,
       VAR_5))) {
    VAR_5->reset_reason =
        VAR_2;
    FUNC_1(VAR_1,
        VAR_5);
   }
   return (VAR_0);
  }


  if (FUNC_10(VAR_10 > VAR_5->missing_tx_timeout)) {

   if (!VAR_9->print_once)
    FUNC_7(VAR_4, "Found a Tx that wasn't "
        "completed on time, qid %d, index %d.\n",
        VAR_6->qid, VAR_12);

   VAR_9->print_once = 1;
   VAR_11++;
  }
 }

 if (FUNC_10(VAR_11 > VAR_5->missing_tx_threshold)) {
  FUNC_6(VAR_5->pdev,
      "The number of lost tx completion is above the threshold "
      "(%d > %d). Reset the device\n",
      VAR_11, VAR_5->missing_tx_threshold);
  if (FUNC_9(!FUNC_0(VAR_1, VAR_5))) {
   VAR_5->reset_reason = VAR_3;
   FUNC_1(VAR_1, VAR_5);
  }
  VAR_13 = VAR_0;
 }

 FUNC_5(VAR_6->tx_stats.missing_tx_comp, VAR_11);

 return (VAR_13);
}
