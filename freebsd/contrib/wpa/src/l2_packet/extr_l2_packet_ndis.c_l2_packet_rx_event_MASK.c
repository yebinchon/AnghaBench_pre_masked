
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2_packet_data {int rx_written; int rx_overlapped; int rx_avail; } ;
struct TYPE_2__ {int refcount; int rx_processed; struct l2_packet_data** l2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (struct l2_packet_data*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, void *VAR_4)
{
 struct l2_packet_data *VAR_5 = VAR_3;

 if (VAR_2)
  VAR_5 = VAR_2->l2[VAR_2->refcount - 1];

 FUNC_2(VAR_5->rx_avail);


 if (!FUNC_1(FUNC_4(),
     &VAR_5->rx_overlapped, &VAR_5->rx_written, VAR_0)) {
  FUNC_6(VAR_1, "L2(NDISUIO): GetOverlappedResult "
      "failed: %d", (int) FUNC_0());
  return;
 }


 FUNC_5(VAR_5);




}
