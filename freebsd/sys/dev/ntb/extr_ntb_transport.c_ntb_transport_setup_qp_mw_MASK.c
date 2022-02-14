
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {size_t rx_max_frame; size_t rx_max_entry; scalar_t__ tx_index; scalar_t__ tx_pkts; scalar_t__ rx_pkts; int * rx_buff; TYPE_1__* remote_rx_info; scalar_t__ rx_index; } ;
struct ntb_transport_mw {unsigned int rx_size; int * virt_addr; } ;
struct ntb_transport_ctx {unsigned int mw_count; unsigned int qp_count; struct ntb_transport_mw* mw_vec; struct ntb_transport_qp* qp_vec; } ;
struct ntb_rx_info {int dummy; } ;
struct ntb_payload_header {int dummy; } ;
typedef int ntb_q_idx_t ;
struct TYPE_2__ {int entry; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ntb_transport_ctx*,unsigned int) ;
 int FUNC_1 (void*,int ,int) ;
 size_t FUNC_2 (int ,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ntb_transport_ctx *VAR_2, unsigned int VAR_3)
{
 struct ntb_transport_qp *VAR_4 = &VAR_2->qp_vec[VAR_3];
 struct ntb_transport_mw *VAR_5;
 void *VAR_6;
 ntb_q_idx_t VAR_7;
 size_t VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_2->mw_count;
 VAR_10 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = &VAR_2->mw_vec[VAR_10];

 if (VAR_5->virt_addr == ((void*)0))
  return (VAR_0);

 if (VAR_10 < VAR_2->qp_count % VAR_11)
  VAR_9 = VAR_2->qp_count / VAR_11 + 1;
 else
  VAR_9 = VAR_2->qp_count / VAR_11;

 VAR_8 = VAR_5->rx_size / VAR_9;
 VAR_4->rx_buff = VAR_5->virt_addr + VAR_8 * (VAR_3 / VAR_11);
 VAR_8 -= sizeof(struct ntb_rx_info);

 VAR_4->remote_rx_info = (void*)(VAR_4->rx_buff + VAR_8);


 VAR_4->rx_max_frame = FUNC_2(VAR_1, VAR_8 / 2);
 VAR_4->rx_max_entry = VAR_8 / VAR_4->rx_max_frame;
 VAR_4->rx_index = 0;

 VAR_4->remote_rx_info->entry = VAR_4->rx_max_entry - 1;


 for (VAR_7 = 0; VAR_7 < VAR_4->rx_max_entry; VAR_7++) {
  VAR_6 = (void *)(VAR_4->rx_buff + VAR_4->rx_max_frame * (VAR_7 + 1) -
      sizeof(struct ntb_payload_header));
  FUNC_1(VAR_6, 0, sizeof(struct ntb_payload_header));
 }

 VAR_4->rx_pkts = 0;
 VAR_4->tx_pkts = 0;
 VAR_4->tx_index = 0;

 return (0);
}
