
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ena_tx_buffer {int * mbuf; } ;
struct TYPE_2__ {int bad_req_id; } ;
struct ena_ring {size_t ring_size; TYPE_1__ tx_stats; struct ena_tx_buffer* tx_buffer_info; struct ena_adapter* adapter; } ;
struct ena_adapter {int reset_reason; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int
FUNC_4(struct ena_ring *VAR_3, uint16_t VAR_4)
{
 struct ena_adapter *VAR_5 = VAR_3->adapter;
 struct ena_tx_buffer *VAR_6 = ((void*)0);

 if (FUNC_3(VAR_4 < VAR_3->ring_size)) {
  VAR_6 = &VAR_3->tx_buffer_info[VAR_4];
  if (VAR_6->mbuf != ((void*)0))
   return (0);
  FUNC_2(VAR_5->pdev,
      "tx_info doesn't have valid mbuf\n");
 }

 FUNC_2(VAR_5->pdev, "Invalid req_id: %hu\n", VAR_4);
 FUNC_1(VAR_3->tx_stats.bad_req_id, 1);


 VAR_5->reset_reason = VAR_2;
 FUNC_0(VAR_1, VAR_5);

 return (VAR_0);
}
