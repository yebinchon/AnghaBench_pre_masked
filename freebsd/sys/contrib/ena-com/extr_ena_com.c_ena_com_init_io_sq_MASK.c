
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ena_eth_io_tx_desc {int dummy; } ;
struct ena_eth_io_rx_desc {int dummy; } ;
struct TYPE_9__ {int desc_list_entry_size; scalar_t__ max_entries_in_tx_burst; int descs_num_before_header; } ;
struct TYPE_7__ {int descs_left_in_line; TYPE_2__* curr_bounce_buf; } ;
struct TYPE_11__ {size_t buffer_size; size_t buffers_num; int base_buffer; scalar_t__ next_to_use; } ;
struct TYPE_8__ {int virt_addr; int mem_handle; int phys_addr; } ;
struct ena_com_io_sq {int desc_entry_size; scalar_t__ direction; size_t q_depth; scalar_t__ mem_queue_type; scalar_t__ entries_in_tx_burst_left; int phase; scalar_t__ next_to_comp; scalar_t__ tail; TYPE_3__ llq_info; TYPE_1__ llq_buf_ctrl; TYPE_6__ bounce_buf_ctrl; TYPE_2__ desc_addr; int bus; scalar_t__ dma_addr_bits; } ;
struct TYPE_10__ {size_t desc_list_entry_size; } ;
struct ena_com_dev {TYPE_4__ llq_info; int dmadev; int bus; scalar_t__ dma_addr_bits; } ;
struct ena_com_create_io_ctx {int numa_node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t,int ,int ,int ) ;
 int FUNC_2 (int ,size_t,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,size_t,int ,int ,int) ;
 TYPE_2__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_7 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_8(struct ena_com_dev *VAR_5,
         struct ena_com_create_io_ctx *VAR_6,
         struct ena_com_io_sq *VAR_7)
{
 size_t VAR_8;
 int VAR_9 = 0;

 FUNC_7(&VAR_7->desc_addr, 0x0, sizeof(VAR_7->desc_addr));

 VAR_7->dma_addr_bits = (u8)VAR_5->dma_addr_bits;
 VAR_7->desc_entry_size =
  (VAR_7->direction == VAR_3) ?
  sizeof(struct ena_eth_io_tx_desc) :
  sizeof(struct ena_eth_io_rx_desc);

 VAR_8 = VAR_7->desc_entry_size * VAR_7->q_depth;
 VAR_7->bus = VAR_5->bus;

 if (VAR_7->mem_queue_type == VAR_1) {
  FUNC_2(VAR_5->dmadev,
         VAR_8,
         VAR_7->desc_addr.virt_addr,
         VAR_7->desc_addr.phys_addr,
         VAR_7->desc_addr.mem_handle,
         VAR_6->numa_node,
         VAR_9);
  if (!VAR_7->desc_addr.virt_addr) {
   FUNC_1(VAR_5->dmadev,
            VAR_8,
            VAR_7->desc_addr.virt_addr,
            VAR_7->desc_addr.phys_addr,
            VAR_7->desc_addr.mem_handle);
  }

  if (!VAR_7->desc_addr.virt_addr) {
   FUNC_5("memory allocation failed\n");
   return VAR_4;
  }
 }

 if (VAR_7->mem_queue_type == VAR_0) {

  VAR_7->bounce_buf_ctrl.buffer_size =
   VAR_5->llq_info.desc_list_entry_size;
  VAR_7->bounce_buf_ctrl.buffers_num =
   VAR_2;
  VAR_7->bounce_buf_ctrl.next_to_use = 0;

  VAR_8 = VAR_7->bounce_buf_ctrl.buffer_size *
   VAR_7->bounce_buf_ctrl.buffers_num;

  FUNC_3(VAR_5->dmadev,
       VAR_8,
       VAR_7->bounce_buf_ctrl.base_buffer,
       VAR_6->numa_node,
       VAR_9);
  if (!VAR_7->bounce_buf_ctrl.base_buffer)
   VAR_7->bounce_buf_ctrl.base_buffer = FUNC_0(VAR_5->dmadev, VAR_8);

  if (!VAR_7->bounce_buf_ctrl.base_buffer) {
   FUNC_5("bounce buffer memory allocation failed\n");
   return VAR_4;
  }

  FUNC_6(&VAR_7->llq_info, &VAR_5->llq_info,
         sizeof(VAR_7->llq_info));


  VAR_7->llq_buf_ctrl.curr_bounce_buf =
   FUNC_4(&VAR_7->bounce_buf_ctrl);
  FUNC_7(VAR_7->llq_buf_ctrl.curr_bounce_buf,
         0x0, VAR_7->llq_info.desc_list_entry_size);
  VAR_7->llq_buf_ctrl.descs_left_in_line =
   VAR_7->llq_info.descs_num_before_header;

  if (VAR_7->llq_info.max_entries_in_tx_burst > 0)
   VAR_7->entries_in_tx_burst_left =
    VAR_7->llq_info.max_entries_in_tx_burst;
 }

 VAR_7->tail = 0;
 VAR_7->next_to_comp = 0;
 VAR_7->phase = 1;

 return 0;
}
