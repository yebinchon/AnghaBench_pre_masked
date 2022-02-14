
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_dev_get_features_ctx {int dummy; } ;
struct ena_com_dev {int dummy; } ;
struct ena_calc_queue_size_ctx {scalar_t__ tx_queue_size; scalar_t__ rx_queue_size; int max_rx_sgl_size; int max_tx_sgl_size; int pdev; struct ena_com_dev_get_features_ctx* get_feat_ctx; struct ena_com_dev* ena_dev; int member_0; } ;
struct ena_adapter {scalar_t__ buf_ring_size; scalar_t__ tx_ring_size; scalar_t__ rx_ring_size; int num_queues; int max_rx_sgl_size; int max_tx_sgl_size; TYPE_1__* tx_ring; int pdev; struct ena_com_dev* ena_dev; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ buf_ring_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_3 (struct ena_adapter*,struct ena_calc_queue_size_ctx*) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (struct ena_adapter*) ;
 int FUNC_7 (struct ena_adapter*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct ena_adapter *VAR_3,
    struct ena_com_dev_get_features_ctx *VAR_4)
{
 struct ena_com_dev *VAR_5 = VAR_3->ena_dev;
 struct ena_calc_queue_size_ctx VAR_6 = { 0 };
 device_t VAR_7 = VAR_3->pdev;
 bool VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_6.ena_dev = VAR_5;
 VAR_6.get_feat_ctx = VAR_4;
 VAR_6.pdev = VAR_7;

 VAR_9 = FUNC_2(VAR_3, VAR_4);
 VAR_10 = FUNC_3(VAR_3, &VAR_6);
 if (FUNC_8(VAR_10 != 0 || VAR_9 <= 0))
  return VAR_0;

 if (VAR_3->tx_ring->buf_ring_size != VAR_3->buf_ring_size)
  VAR_8 = 1;

 if (FUNC_8(VAR_3->tx_ring_size > VAR_6.tx_queue_size ||
     VAR_3->rx_ring_size > VAR_6.rx_queue_size)) {
  FUNC_1(VAR_7,
      "Not enough resources to allocate requested queue sizes "
      "(TX,RX)=(%d,%d), falling back to queue sizes "
      "(TX,RX)=(%d,%d)\n",
      VAR_3->tx_ring_size,
      VAR_3->rx_ring_size,
      VAR_6.tx_queue_size,
      VAR_6.rx_queue_size);
  VAR_3->tx_ring_size = VAR_6.tx_queue_size;
  VAR_3->rx_ring_size = VAR_6.rx_queue_size;
  VAR_3->max_tx_sgl_size = VAR_6.max_tx_sgl_size;
  VAR_3->max_rx_sgl_size = VAR_6.max_rx_sgl_size;
  VAR_8 = 1;
 }

 if (FUNC_8(VAR_3->num_queues > VAR_9)) {
  FUNC_1(VAR_7,
      "Not enough resources to allocate %d queues, "
      "falling back to %d queues\n",
      VAR_3->num_queues, VAR_9);
  VAR_3->num_queues = VAR_9;
  if (FUNC_0(VAR_1, VAR_3)) {
   FUNC_4(VAR_5);
   VAR_10 = FUNC_7(VAR_3);
   if (FUNC_8(VAR_10 != 0) && (VAR_10 != VAR_2)) {
    FUNC_1(VAR_7, "Cannot init RSS rc: %d\n",
        VAR_10);
    return (VAR_10);
   }
  }
  VAR_8 = 1;
 }

 if (FUNC_8(VAR_8)) {
  FUNC_5(VAR_3);
  FUNC_6(VAR_3);
 }

 return (0);
}
