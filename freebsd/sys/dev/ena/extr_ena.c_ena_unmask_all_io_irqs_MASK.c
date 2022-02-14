
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ena_eth_io_intr_reg {int dummy; } ;
struct ena_com_io_cq {int dummy; } ;
struct ena_adapter {int num_queues; TYPE_1__* ena_dev; } ;
struct TYPE_2__ {struct ena_com_io_cq* io_cq_queues; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (struct ena_com_io_cq*,struct ena_eth_io_intr_reg*) ;
 int FUNC_2 (struct ena_eth_io_intr_reg*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ena_adapter *VAR_0)
{
 struct ena_com_io_cq* VAR_1;
 struct ena_eth_io_intr_reg VAR_2;
 uint16_t VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0->num_queues; VAR_4++) {
  VAR_3 = FUNC_0(VAR_4);
  VAR_1 = &VAR_0->ena_dev->io_cq_queues[VAR_3];
  FUNC_2(&VAR_2, 0, 0, 1);
  FUNC_1(VAR_1, &VAR_2);
 }
}
