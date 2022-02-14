
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_sge; int max_wr; } ;
struct ibv_xrcd_init_attr {int comp_mask; int fd; int oflags; scalar_t__ pd; void* cq; scalar_t__ xrcd; int srq_type; TYPE_1__ attr; } ;
struct ibv_srq_init_attr_ex {int comp_mask; int fd; int oflags; scalar_t__ pd; void* cq; scalar_t__ xrcd; int srq_type; TYPE_1__ attr; } ;
struct ibv_port_attr {scalar_t__ link_layer; int lid; } ;
struct TYPE_4__ {int size; int fd; int srq; int context; scalar_t__ pd; void* recv_cq; scalar_t__ xrcd; int num_clients; void* send_cq; scalar_t__ use_event; int * channel; int mr; struct ibv_xrcd_init_attr* buf; int lid; int ib_port; void* rem_dest; void* send_qp; void* recv_qp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,void**,int *,int ) ;
 int FUNC_6 (int ,struct ibv_xrcd_init_attr*) ;
 scalar_t__ FUNC_7 (int ,struct ibv_xrcd_init_attr*) ;
 int FUNC_8 (scalar_t__,struct ibv_xrcd_init_attr*,int,int ) ;
 scalar_t__ FUNC_9 (void*,int ) ;
 struct ibv_xrcd_init_attr* FUNC_10 (int ,int) ;
 int FUNC_11 (struct ibv_xrcd_init_attr*,int ,int) ;
 int FUNC_12 (char*,int,int) ;
 scalar_t__ FUNC_13 (char*) ;
 int VAR_15 ;
 scalar_t__ FUNC_14 (int ,int ,struct ibv_port_attr*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_15(char *VAR_17)
{
 struct ibv_srq_init_attr_ex VAR_18;
 struct ibv_xrcd_init_attr VAR_19;
 struct ibv_port_attr VAR_20;

 VAR_13.recv_qp = FUNC_0(VAR_13.num_clients, sizeof *VAR_13.recv_qp);
 VAR_13.send_qp = FUNC_0(VAR_13.num_clients, sizeof *VAR_13.send_qp);
 VAR_13.rem_dest = FUNC_0(VAR_13.num_clients, sizeof *VAR_13.rem_dest);
 if (!VAR_13.recv_qp || !VAR_13.send_qp || !VAR_13.rem_dest)
  return 1;

 if (FUNC_13(VAR_17)) {
  FUNC_2(VAR_16, "Failed to open device\n");
  return 1;
 }

 if (FUNC_14(VAR_13.context, VAR_13.ib_port, &VAR_20)) {
  FUNC_2(VAR_16, "Failed to get port info\n");
  return 1;
 }

 VAR_13.lid = VAR_20.lid;
 if (VAR_20.link_layer != VAR_1 && !VAR_13.lid) {
  FUNC_2(VAR_16, "Couldn't get local LID\n");
  return 1;
 }

 VAR_13.buf = FUNC_10(VAR_15, VAR_13.size);
 if (!VAR_13.buf) {
  FUNC_2(VAR_16, "Couldn't allocate work buf.\n");
  return 1;
 }

 FUNC_11(VAR_13.buf, 0, VAR_13.size);

 if (VAR_13.use_event) {
  VAR_13.channel = FUNC_4(VAR_13.context);
  if (!VAR_13.channel) {
   FUNC_2(VAR_16, "Couldn't create completion channel\n");
   return 1;
  }
 }

 VAR_13.pd = FUNC_3(VAR_13.context);
 if (!VAR_13.pd) {
  FUNC_2(VAR_16, "Couldn't allocate PD\n");
  return 1;
 }

 VAR_13.mr = FUNC_8(VAR_13.pd, VAR_13.buf, VAR_13.size, VAR_0);
 if (!VAR_13.mr) {
  FUNC_2(VAR_16, "Couldn't register MR\n");
  return 1;
 }

 VAR_13.fd = FUNC_12("/tmp/xrc_domain", VAR_10 | VAR_9, VAR_12 | VAR_11);
 if (VAR_13.fd < 0) {
  FUNC_2(VAR_16,
   "Couldn't create the file for the XRC Domain "
   "but not stopping %d\n", VAR_14);
  VAR_13.fd = -1;
 }

 FUNC_11(&VAR_19, 0, sizeof VAR_19);
 VAR_19.comp_mask = VAR_7 | VAR_8;
 VAR_19.fd = VAR_13.fd;
 VAR_19.oflags = VAR_9;
 VAR_13.xrcd = FUNC_7(VAR_13.context, &VAR_19);
 if (!VAR_13.xrcd) {
  FUNC_2(VAR_16, "Couldn't Open the XRC Domain %d\n", VAR_14);
  return 1;
 }

 VAR_13.recv_cq = FUNC_5(VAR_13.context, VAR_13.num_clients, &VAR_13.recv_cq,
        VAR_13.channel, 0);
 if (!VAR_13.recv_cq) {
  FUNC_2(VAR_16, "Couldn't create recv CQ\n");
  return 1;
 }

 if (VAR_13.use_event) {
  if (FUNC_9(VAR_13.recv_cq, 0)) {
   FUNC_2(VAR_16, "Couldn't request CQ notification\n");
   return 1;
  }
 }

 VAR_13.send_cq = FUNC_5(VAR_13.context, VAR_13.num_clients, ((void*)0), ((void*)0), 0);
 if (!VAR_13.send_cq) {
  FUNC_2(VAR_16, "Couldn't create send CQ\n");
  return 1;
 }

 FUNC_11(&VAR_18, 0, sizeof VAR_18);
 VAR_18.attr.max_wr = VAR_13.num_clients;
 VAR_18.attr.max_sge = 1;
 VAR_18.comp_mask = VAR_5 | VAR_6 |
    VAR_3 | VAR_4;
 VAR_18.srq_type = VAR_2;
 VAR_18.xrcd = VAR_13.xrcd;
 VAR_18.cq = VAR_13.recv_cq;
 VAR_18.pd = VAR_13.pd;

 VAR_13.srq = FUNC_6(VAR_13.context, &VAR_18);
 if (!VAR_13.srq) {
  FUNC_2(VAR_16, "Couldn't create SRQ\n");
  return 1;
 }

 if (FUNC_1())
  return 1;

 return 0;
}
