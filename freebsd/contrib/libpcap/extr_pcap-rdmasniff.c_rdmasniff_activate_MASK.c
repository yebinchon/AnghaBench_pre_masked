
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pcap_rdmasniff {void* oneshot_buffer; scalar_t__ context; scalar_t__ pd; TYPE_6__* channel; scalar_t__ cq; scalar_t__ qp; scalar_t__ flow; scalar_t__ mr; int port_num; int rdma_device; } ;
struct TYPE_9__ {int max_recv_wr; int max_recv_sge; } ;
struct ibv_qp_init_attr {int size; int port; int type; int qp_state; int port_num; int qp_type; TYPE_1__ cap; scalar_t__ recv_cq; scalar_t__ send_cq; } ;
struct ibv_qp_attr {int size; int port; int type; int qp_state; int port_num; int qp_type; TYPE_1__ cap; scalar_t__ recv_cq; scalar_t__ send_cq; } ;
struct ibv_port_attr {scalar_t__ link_layer; } ;
struct ibv_flow_attr {int size; int port; int type; int qp_state; int port_num; int qp_type; TYPE_1__ cap; scalar_t__ recv_cq; scalar_t__ send_cq; } ;
struct TYPE_10__ {int device; } ;
struct TYPE_11__ {int bufsize; int snapshot; int selectable_fd; int oneshot_callback; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int * setdirection_op; int setfilter_op; int cleanup_op; int stats_op; int read_op; scalar_t__ offset; int linktype; TYPE_2__ opt; int errbuf; void* buffer; struct pcap_rdmasniff* priv; } ;
typedef TYPE_3__ pcap_t ;
struct TYPE_12__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_6__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int *,TYPE_6__*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,struct ibv_qp_init_attr*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct ibv_qp_init_attr*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,struct ibv_qp_init_attr*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int ,struct ibv_port_attr*) ;
 scalar_t__ FUNC_16 (scalar_t__,void*,int,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int VAR_14 ;
 void* FUNC_18 (int) ;
 int FUNC_19 (struct ibv_qp_init_attr*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_20 (int ,int ,char*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_21 (TYPE_3__*,int) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_22(pcap_t *VAR_21)
{
 struct pcap_rdmasniff *VAR_22 = VAR_21->priv;
 struct ibv_qp_init_attr VAR_23;
 struct ibv_qp_attr VAR_24;
 struct ibv_flow_attr VAR_25;
 struct ibv_port_attr VAR_26;
 int VAR_27;

 VAR_22->context = FUNC_14(VAR_22->rdma_device);
 if (!VAR_22->context) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to open device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_22->pd = FUNC_1(VAR_22->context);
 if (!VAR_22->pd) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to alloc PD for device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_22->channel = FUNC_3(VAR_22->context);
 if (!VAR_22->channel) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to create comp channel for device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_22->cq = FUNC_4(VAR_22->context, VAR_12,
     ((void*)0), VAR_22->channel, 0);
 if (!VAR_22->cq) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to create CQ for device %s", VAR_21->opt.device);
  goto error;
 }

 FUNC_17(VAR_22->cq, 0);

 FUNC_19(&VAR_23, 0, sizeof VAR_23);
 VAR_23.send_cq = VAR_23.recv_cq = VAR_22->cq;
 VAR_23.cap.max_recv_wr = VAR_12;
 VAR_23.cap.max_recv_sge = 1;
 VAR_23.qp_type = VAR_7;
 VAR_22->qp = FUNC_6(VAR_22->pd, &VAR_23);
 if (!VAR_22->qp) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to create QP for device %s", VAR_21->opt.device);
  goto error;
 }

 FUNC_19(&VAR_24, 0, sizeof VAR_24);
 VAR_24.qp_state = VAR_5;
 VAR_24.port_num = VAR_22->port_num;
 if (FUNC_13(VAR_22->qp, &VAR_24, VAR_9 | VAR_8)) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to modify QP to INIT for device %s", VAR_21->opt.device);
  goto error;
 }

 FUNC_19(&VAR_24, 0, sizeof VAR_24);
 VAR_24.qp_state = VAR_6;
 if (FUNC_13(VAR_22->qp, &VAR_24, VAR_9)) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to modify QP to RTR for device %s", VAR_21->opt.device);
  goto error;
 }

 FUNC_19(&VAR_25, 0, sizeof VAR_25);
 VAR_25.type = VAR_3;
 VAR_25.size = sizeof VAR_25;
 VAR_25.port = VAR_22->port_num;
 VAR_22->flow = FUNC_5(VAR_22->qp, &VAR_25);
 if (!VAR_22->flow) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to create flow for device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_21->bufsize = VAR_12 * VAR_13;
 VAR_21->buffer = FUNC_18(VAR_21->bufsize);
 if (!VAR_21->buffer) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to allocate receive buffer for device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_22->oneshot_buffer = FUNC_18(VAR_13);
 if (!VAR_22->oneshot_buffer) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to allocate oneshot buffer for device %s", VAR_21->opt.device);
  goto error;
 }

 VAR_22->mr = FUNC_16(VAR_22->pd, VAR_21->buffer, VAR_21->bufsize, VAR_2);
 if (!VAR_22->mr) {
  FUNC_20(VAR_21->errbuf, VAR_10,
         "Failed to register MR for device %s", VAR_21->opt.device);
  goto error;
 }


 for (VAR_27 = 0; VAR_27 < VAR_12; ++VAR_27) {
  FUNC_21(VAR_21, VAR_27);
 }

 if (!FUNC_15(VAR_22->context, VAR_22->port_num, &VAR_26) &&
     VAR_26.link_layer == VAR_4) {
  VAR_21->linktype = VAR_1;
 } else {
  VAR_21->linktype = VAR_0;
 }

 if (VAR_21->snapshot <= 0 || VAR_21->snapshot > VAR_13)
  VAR_21->snapshot = VAR_13;

 VAR_21->offset = 0;
 VAR_21->read_op = VAR_19;
 VAR_21->stats_op = VAR_20;
 VAR_21->cleanup_op = VAR_17;
 VAR_21->setfilter_op = VAR_14;
 VAR_21->setdirection_op = ((void*)0);
 VAR_21->set_datalink_op = ((void*)0);
 VAR_21->getnonblock_op = VAR_15;
 VAR_21->setnonblock_op = VAR_16;
 VAR_21->oneshot_callback = VAR_18;
 VAR_21->selectable_fd = VAR_22->channel->fd;

 return 0;

error:
 if (VAR_22->mr) {
  FUNC_8(VAR_22->mr);
 }

 if (VAR_22->flow) {
  FUNC_11(VAR_22->flow);
 }

 if (VAR_22->qp) {
  FUNC_12(VAR_22->qp);
 }

 if (VAR_22->cq) {
  FUNC_10(VAR_22->cq);
 }

 if (VAR_22->channel) {
  FUNC_9(VAR_22->channel);
 }

 if (VAR_22->pd) {
  FUNC_7(VAR_22->pd);
 }

 if (VAR_22->context) {
  FUNC_2(VAR_22->context);
 }

 if (VAR_22->oneshot_buffer) {
  FUNC_0(VAR_22->oneshot_buffer);
 }

 return VAR_11;
}
