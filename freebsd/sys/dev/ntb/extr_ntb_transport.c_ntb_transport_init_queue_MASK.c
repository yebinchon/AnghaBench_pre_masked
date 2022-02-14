
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef size_t uint64_t ;
struct ntb_transport_qp {unsigned int qp_num; int client_ready; scalar_t__ tx_mw_phys; size_t tx_max_frame; size_t tx_max_entry; int tx_free_q; int rx_pend_q; int rx_post_q; int rxc_tq; int rxc_db_work; int tx_lock; int ntb_tx_free_q_lock; int ntb_rx_q_lock; int rx_full; int link_work; int * tx_mw; void* rx_info; int * event_handler; int dev; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_mw {scalar_t__ phys_addr; unsigned int tx_size; int * vbase; } ;
struct ntb_transport_ctx {unsigned int mw_count; unsigned int qp_count; int dev; struct ntb_transport_qp* qp_vec; struct ntb_transport_mw* mw_vec; } ;
struct ntb_rx_info {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct ntb_transport_ctx*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,struct ntb_transport_qp*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (struct ntb_transport_qp*) ;
 int VAR_4 ;
 size_t FUNC_8 (int ,size_t) ;
 int FUNC_9 (char*,int ,int ,int *) ;
 int FUNC_10 (int *,int,int ,char*,int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_11(struct ntb_transport_ctx *VAR_7, unsigned int VAR_8)
{
 struct ntb_transport_mw *VAR_9;
 struct ntb_transport_qp *VAR_10;
 vm_paddr_t VAR_11;
 uint64_t VAR_12;
 size_t VAR_13;
 unsigned VAR_14, VAR_15, VAR_16;

 VAR_16 = VAR_7->mw_count;
 VAR_15 = FUNC_1(VAR_7, VAR_8);
 VAR_9 = &VAR_7->mw_vec[VAR_15];

 VAR_10 = &VAR_7->qp_vec[VAR_8];
 VAR_10->qp_num = VAR_8;
 VAR_10->transport = VAR_7;
 VAR_10->dev = VAR_7->dev;
 VAR_10->client_ready = 0;
 VAR_10->event_handler = ((void*)0);
 FUNC_7(VAR_10);

 if (VAR_15 < VAR_7->qp_count % VAR_16)
  VAR_14 = VAR_7->qp_count / VAR_16 + 1;
 else
  VAR_14 = VAR_7->qp_count / VAR_16;

 VAR_11 = VAR_9->phys_addr;

 VAR_13 = VAR_9->tx_size / VAR_14;
 VAR_12 = VAR_13 * (VAR_8 / VAR_16);

 VAR_10->tx_mw = VAR_9->vbase + VAR_12;
 FUNC_0(VAR_10->tx_mw != ((void*)0), ("uh oh?"));


 VAR_10->tx_mw_phys = VAR_11 + VAR_12;
 FUNC_0(VAR_10->tx_mw_phys != 0, ("uh oh?"));

 VAR_13 -= sizeof(struct ntb_rx_info);
 VAR_10->rx_info = (void *)(VAR_10->tx_mw + VAR_13);


 VAR_10->tx_max_frame = FUNC_8(VAR_6, VAR_13 / 2);
 VAR_10->tx_max_entry = VAR_13 / VAR_10->tx_max_frame;

 FUNC_4(&VAR_10->link_work, 0);
 FUNC_4(&VAR_10->rx_full, 1);

 FUNC_6(&VAR_10->ntb_rx_q_lock, "ntb rx q", ((void*)0), VAR_1);
 FUNC_6(&VAR_10->ntb_tx_free_q_lock, "ntb tx free q", ((void*)0), VAR_1);
 FUNC_6(&VAR_10->tx_lock, "ntb transport tx", ((void*)0), VAR_0);
 FUNC_3(&VAR_10->rxc_db_work, 0, VAR_4, VAR_10);
 VAR_10->rxc_tq = FUNC_9("ntbt_rx", VAR_2,
     VAR_5, &VAR_10->rxc_tq);
 FUNC_10(&VAR_10->rxc_tq, 1, VAR_3, "%s rx%d",
     FUNC_5(VAR_7->dev), VAR_8);

 FUNC_2(&VAR_10->rx_post_q);
 FUNC_2(&VAR_10->rx_pend_q);
 FUNC_2(&VAR_10->tx_free_q);
}
