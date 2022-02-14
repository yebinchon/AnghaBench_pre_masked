
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktgen_dev {int flags; scalar_t__ cur_queue_map; scalar_t__ queue_map_min; scalar_t__ queue_map_max; TYPE_1__* odev; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct pktgen_dev *VAR_2)
{

 if (VAR_2->flags & VAR_0)
  VAR_2->cur_queue_map = FUNC_1();

 else if (VAR_2->queue_map_min <= VAR_2->queue_map_max) {
  __u16 VAR_3;
  if (VAR_2->flags & VAR_1) {
   VAR_3 = FUNC_0() %
    (VAR_2->queue_map_max -
     VAR_2->queue_map_min + 1)
    + VAR_2->queue_map_min;
  } else {
   VAR_3 = VAR_2->cur_queue_map + 1;
   if (VAR_3 > VAR_2->queue_map_max)
    VAR_3 = VAR_2->queue_map_min;
  }
  VAR_2->cur_queue_map = VAR_3;
 }
 VAR_2->cur_queue_map = VAR_2->cur_queue_map % VAR_2->odev->real_num_tx_queues;
}
