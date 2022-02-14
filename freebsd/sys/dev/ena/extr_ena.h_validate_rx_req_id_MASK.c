
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int bad_req_id; } ;
struct ena_ring {scalar_t__ ring_size; TYPE_2__* adapter; TYPE_1__ rx_stats; } ;
struct TYPE_5__ {int reset_reason; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int
FUNC_5(struct ena_ring *VAR_3, uint16_t VAR_4)
{
 if (FUNC_4(VAR_4 < VAR_3->ring_size))
  return (0);

 FUNC_3(VAR_3->adapter->pdev, "Invalid rx req_id: %hu\n",
     VAR_4);
 FUNC_2(VAR_3->rx_stats.bad_req_id, 1);


 if (FUNC_4(!FUNC_0(VAR_1, VAR_3->adapter))) {
  VAR_3->adapter->reset_reason = VAR_2;
  FUNC_1(VAR_1, VAR_3->adapter);
 }

 return (VAR_0);
}
