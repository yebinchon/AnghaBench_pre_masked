
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_eth_io_tx_cdesc {int dummy; } ;
struct ena_eth_io_rx_cdesc_base {int dummy; } ;
struct TYPE_2__ {int virt_addr; int mem_handle; int phys_addr; } ;
struct ena_com_io_cq {int cdesc_entry_size_in_bytes; scalar_t__ direction; size_t q_depth; int phase; scalar_t__ head; TYPE_1__ cdesc_addr; int bus; } ;
struct ena_com_dev {int dmadev; int bus; } ;
struct ena_com_create_io_ctx {int numa_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int ,int ,int ) ;
 int FUNC_1 (int ,size_t,int ,int ,int ,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_dev *VAR_2,
         struct ena_com_create_io_ctx *VAR_3,
         struct ena_com_io_cq *VAR_4)
{
 size_t VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_4->cdesc_addr, 0x0, sizeof(VAR_4->cdesc_addr));


 VAR_4->cdesc_entry_size_in_bytes =
  (VAR_4->direction == VAR_0) ?
  sizeof(struct ena_eth_io_tx_cdesc) :
  sizeof(struct ena_eth_io_rx_cdesc_base);

 VAR_5 = VAR_4->cdesc_entry_size_in_bytes * VAR_4->q_depth;
 VAR_4->bus = VAR_2->bus;

 FUNC_1(VAR_2->dmadev,
   VAR_5,
   VAR_4->cdesc_addr.virt_addr,
   VAR_4->cdesc_addr.phys_addr,
   VAR_4->cdesc_addr.mem_handle,
   VAR_3->numa_node,
   VAR_6);
 if (!VAR_4->cdesc_addr.virt_addr) {
  FUNC_0(VAR_2->dmadev,
           VAR_5,
           VAR_4->cdesc_addr.virt_addr,
           VAR_4->cdesc_addr.phys_addr,
           VAR_4->cdesc_addr.mem_handle);
 }

 if (!VAR_4->cdesc_addr.virt_addr) {
  FUNC_2("memory allocation failed\n");
  return VAR_1;
 }

 VAR_4->phase = 1;
 VAR_4->head = 0;

 return 0;
}
