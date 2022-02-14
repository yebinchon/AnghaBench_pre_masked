
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {unsigned int tx_index; unsigned int tx_max_entry; TYPE_1__* remote_rx_info; } ;
struct TYPE_2__ {unsigned int entry; } ;



unsigned int
FUNC_0(struct ntb_transport_qp *VAR_0)
{
 unsigned int VAR_1 = VAR_0->tx_index;
 unsigned int VAR_2 = VAR_0->remote_rx_info->entry;

 return (VAR_2 >= VAR_1 ? VAR_2 - VAR_1 : VAR_0->tx_max_entry + VAR_2 - VAR_1);
}
