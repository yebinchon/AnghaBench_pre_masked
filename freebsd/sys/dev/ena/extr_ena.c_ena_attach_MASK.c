
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_stats_dev {int dummy; } ;
struct ena_llq_configurations {int dummy; } ;
struct ena_hw_stats {int dummy; } ;
struct TYPE_4__ {int max_mtu; int mac_addr; } ;
struct TYPE_3__ {int tx; } ;
struct ena_com_dev_get_features_ctx {TYPE_2__ dev_attr; TYPE_1__ offload; int llq; } ;
struct ena_com_dev {scalar_t__ tx_mem_queue_type; struct ena_com_dev* bus; void* dmadev; } ;
struct ena_calc_queue_size_ctx {int tx_queue_size; int rx_queue_size; int max_rx_sgl_size; int max_tx_sgl_size; void* pdev; struct ena_com_dev_get_features_ctx* get_feat_ctx; struct ena_com_dev* ena_dev; int member_0; } ;
struct ena_bus {scalar_t__ reg_bar_h; int reg_bar_t; } ;
struct ena_adapter {int num_queues; struct ena_com_dev* ena_dev; int ifp; int hw_stats; int dev_stats; void* pdev; int reset_tq; int reset_task; int buf_ring_size; int max_rx_sgl_size; int max_tx_sgl_size; int rx_ring_size; int tx_ring_size; int reset_reason; int max_mtu; int mac_addr; int tx_offload_cap; int keep_alive_timestamp; int wd_active; int * registers; int * memory; int missing_tx_threshold; int missing_tx_max_queues; int missing_tx_timeout; int keep_alive_timeout; int global_mtx; int timer_service; int ioctl_sx; } ;
typedef void* device_t ;
typedef int counter_u64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int *,int ,int ,struct ena_adapter*) ;
 int * FUNC_5 (void*,int ,int*,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (void*) ;
 struct ena_adapter* FUNC_8 (void*) ;
 int FUNC_9 (void*,char*,...) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_12 (struct ena_adapter*,struct ena_calc_queue_size_ctx*) ;
 int FUNC_13 (struct ena_com_dev*) ;
 int FUNC_14 (struct ena_com_dev*) ;
 int FUNC_15 (struct ena_com_dev*,int ) ;
 int FUNC_16 (struct ena_com_dev*) ;
 int FUNC_17 (struct ena_adapter*,void*,struct ena_com_dev_get_features_ctx*,int *) ;
 int FUNC_18 (struct ena_adapter*) ;
 int FUNC_19 (struct ena_adapter*,int) ;
 int FUNC_20 (struct ena_adapter*) ;
 int FUNC_21 (struct ena_adapter*) ;
 int FUNC_22 (struct ena_adapter*) ;
 int FUNC_23 (struct ena_adapter*) ;
 int FUNC_24 (struct ena_adapter*) ;
 int FUNC_25 (struct ena_adapter*) ;
 int FUNC_26 (struct ena_adapter*) ;
 int VAR_24 ;
 int FUNC_27 (void*,struct ena_com_dev*,int *,struct ena_llq_configurations*) ;
 int FUNC_28 (void*,struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_29 (struct ena_adapter*) ;
 int FUNC_30 (struct ena_adapter*) ;
 int FUNC_31 (struct ena_adapter*) ;
 int VAR_25 ;
 int FUNC_32 (int ) ;
 int FUNC_33 (struct ena_com_dev*,int ) ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int ,int ) ;
 void* FUNC_36 (int,int ,int) ;
 int FUNC_37 (int ,int ,int ) ;
 int FUNC_38 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (struct ena_llq_configurations*) ;
 int FUNC_42 (int *,char*) ;
 int FUNC_43 (char*,int,int ,int *) ;
 int FUNC_44 (int *,int,int ,char*,int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_45 (int) ;

__attribute__((used)) static int
FUNC_46(device_t VAR_27)
{
 struct ena_com_dev_get_features_ctx VAR_28;
 struct ena_llq_configurations VAR_29;
 struct ena_calc_queue_size_ctx VAR_30 = { 0 };
 static int VAR_31;
 struct ena_adapter *VAR_32;
 struct ena_com_dev *VAR_33 = ((void*)0);
 const char *VAR_34;
 int VAR_35;
 int VAR_36, VAR_37;

 VAR_32 = FUNC_8(VAR_27);
 VAR_32->pdev = VAR_27;

 FUNC_38(&VAR_32->global_mtx, "ENA global mtx", ((void*)0), VAR_17);
 FUNC_42(&VAR_32->ioctl_sx, "ENA ioctl sx");


 FUNC_6(&VAR_32->timer_service, &VAR_32->global_mtx, 0);
 VAR_32->keep_alive_timeout = VAR_0;
 VAR_32->missing_tx_timeout = VAR_2;
 VAR_32->missing_tx_max_queues = VAR_3;
 VAR_32->missing_tx_threshold = VAR_1;

 if (VAR_31++ == 0)
  FUNC_9(VAR_27, "%s\n", VAR_25);


 VAR_33 = FUNC_36(sizeof(struct ena_com_dev), VAR_18,
     VAR_19 | VAR_20);

 VAR_32->ena_dev = VAR_33;
 VAR_33->dmadev = VAR_27;

 VAR_36 = FUNC_3(VAR_11);
 VAR_32->memory = ((void*)0);
 VAR_32->registers = FUNC_5(VAR_27, VAR_23,
     &VAR_36, VAR_22);
 if (FUNC_45(VAR_32->registers == ((void*)0))) {
  FUNC_9(VAR_27,
      "unable to allocate bus resource: registers!\n");
  VAR_37 = VAR_12;
  goto err_dev_free;
 }

 VAR_33->bus = FUNC_36(sizeof(struct ena_bus), VAR_18,
     VAR_19 | VAR_20);


 ((struct ena_bus*)(VAR_33->bus))->reg_bar_t =
     FUNC_40(VAR_32->registers);
 ((struct ena_bus*)(VAR_33->bus))->reg_bar_h =
     FUNC_39(VAR_32->registers);

 if (FUNC_45(((struct ena_bus*)(VAR_33->bus))->reg_bar_h == 0)) {
  FUNC_9(VAR_27, "failed to pmap registers bar\n");
  VAR_37 = VAR_13;
  goto err_bus_free;
 }

 VAR_33->tx_mem_queue_type = VAR_5;


 FUNC_2(VAR_32);


 VAR_37 = FUNC_17(VAR_32, VAR_27, &VAR_28, &VAR_32->wd_active);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27, "ENA device init failed! (err: %d)\n", VAR_37);
  VAR_37 = VAR_13;
  goto err_bus_free;
 }

 FUNC_41(&VAR_29);

 VAR_37 = FUNC_27(VAR_27, VAR_33, &VAR_28.llq,
      &VAR_29);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27, "failed to set placement policy\n");
  goto err_com_free;
 }

 if (VAR_33->tx_mem_queue_type == VAR_5)
  VAR_34 = "Regular";
 else
  VAR_34 = "Low Latency";
 FUNC_9(VAR_27, "Placement policy: %s\n", VAR_34);

 VAR_32->keep_alive_timestamp = FUNC_34();

 VAR_32->tx_offload_cap = VAR_28.offload.tx;

 FUNC_37(VAR_32->mac_addr, VAR_28.dev_attr.mac_addr,
     VAR_14);

 VAR_30.ena_dev = VAR_33;
 VAR_30.get_feat_ctx = &VAR_28;
 VAR_30.pdev = VAR_27;


 VAR_35 = FUNC_11(VAR_32, &VAR_28);

 FUNC_0(VAR_35 > 0, "Invalid queue number: %d\n",
     VAR_35);
 VAR_32->num_queues = VAR_35;

 VAR_32->max_mtu = VAR_28.dev_attr.max_mtu;

 VAR_32->rx_ring_size = VAR_7;

 VAR_37 = FUNC_12(VAR_32, &VAR_30);
 if (FUNC_45((VAR_37 != 0) || (VAR_35 <= 0))) {
  VAR_37 = VAR_4;
  goto err_com_free;
 }

 VAR_32->reset_reason = VAR_10;

 VAR_32->tx_ring_size = VAR_30.tx_queue_size;
 VAR_32->rx_ring_size = VAR_30.rx_queue_size;

 VAR_32->max_tx_sgl_size = VAR_30.max_tx_sgl_size;
 VAR_32->max_rx_sgl_size = VAR_30.max_rx_sgl_size;

 VAR_32->buf_ring_size = VAR_6;


 VAR_37 = FUNC_30(VAR_32);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27, "Failed to create TX DMA tag\n");
  goto err_com_free;
 }

 VAR_37 = FUNC_29(VAR_32);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27, "Failed to create RX DMA tag\n");
  goto err_tx_tag_free;
 }


 FUNC_9(VAR_27,
     "Creating %d io queues. Rx queue size: %d, Tx queue size: %d\n",
     VAR_35,
     VAR_30.rx_queue_size,
     VAR_30.tx_queue_size);
 FUNC_25(VAR_32);

 VAR_37 = FUNC_19(VAR_32, VAR_35);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27,
      "Failed to enable and set the admin interrupts\n");
  goto err_io_free;
 }


 VAR_37 = FUNC_28(VAR_27, VAR_32, &VAR_28);
 if (FUNC_45(VAR_37 != 0)) {
  FUNC_9(VAR_27, "Error with network interface setup\n");
  goto err_msix_free;
 }


 FUNC_4(&VAR_32->reset_task, 0, VAR_24, VAR_32);
 VAR_32->reset_tq = FUNC_43("ena_reset_enqueue",
     VAR_19 | VAR_20, VAR_26, &VAR_32->reset_tq);
 FUNC_44(&VAR_32->reset_tq, 1, VAR_21,
     "%s rstq", FUNC_7(VAR_32->pdev));


 FUNC_10((counter_u64_t *)&VAR_32->dev_stats,
     sizeof(struct ena_stats_dev));
 FUNC_10((counter_u64_t *)&VAR_32->hw_stats,
     sizeof(struct ena_hw_stats));
 FUNC_31(VAR_32);
 FUNC_35(VAR_32->ifp, VAR_15, VAR_16);
 FUNC_1(VAR_8, VAR_32);

 return (0);





err_msix_free:
 FUNC_15(VAR_32->ena_dev, VAR_9);
 FUNC_21(VAR_32);
 FUNC_18(VAR_32);
err_io_free:
 FUNC_20(VAR_32);
 FUNC_23(VAR_32);
err_tx_tag_free:
 FUNC_24(VAR_32);
err_com_free:
 FUNC_13(VAR_33);
 FUNC_14(VAR_33);
 FUNC_16(VAR_33);
err_bus_free:
 FUNC_33(VAR_33->bus, VAR_18);
 FUNC_22(VAR_32);
err_dev_free:
 FUNC_33(VAR_33, VAR_18);

 return (VAR_37);
}
