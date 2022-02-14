
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct TYPE_9__ {int qp_type; int create_flags; int port_num; int event_handler; struct mlx4_ib_demux_pv_ctx* qp_context; TYPE_1__ cap; int sq_sig_type; int recv_cq; int send_cq; } ;
struct mlx4_ib_qp_tunnel_init_attr {int port; size_t slave; int proxy_qp_type; int port_num; scalar_t__ sq_psn; int qp_state; int qkey; int pkey_index; TYPE_4__ init_attr; } ;
struct mlx4_ib_demux_pv_qp {int * qp; } ;
struct mlx4_ib_demux_pv_ctx {int port; size_t slave; int ib_dev; int pd; int cq; struct mlx4_ib_demux_pv_qp* qp; } ;
struct ib_qp_attr {int port; size_t slave; int proxy_qp_type; int port_num; scalar_t__ sq_psn; int qp_state; int qkey; int pkey_index; TYPE_4__ init_attr; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef enum ib_qp_create_flags { ____Placeholder_ib_qp_create_flags } ib_qp_create_flags ;
struct TYPE_7__ {int *** virt2phys_pkey; } ;
struct TYPE_8__ {TYPE_2__ pkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,size_t,int,int ,int *) ;
 int * FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mlx4_ib_qp_tunnel_init_attr*,int) ;
 int FUNC_6 (struct mlx4_ib_qp_tunnel_init_attr*,int ,int) ;
 int FUNC_7 (struct mlx4_ib_demux_pv_ctx*,struct mlx4_ib_demux_pv_qp*,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_17 ;
 TYPE_3__* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct mlx4_ib_demux_pv_ctx *VAR_18,
       enum ib_qp_type VAR_19, int VAR_20)
{
 int VAR_21, VAR_22;
 struct mlx4_ib_demux_pv_qp *VAR_23;
 struct mlx4_ib_qp_tunnel_init_attr VAR_24;
 struct ib_qp_attr VAR_25;
 int VAR_26;

 if (VAR_19 > VAR_6)
  return -VAR_0;

 VAR_23 = &VAR_18->qp[VAR_19];

 FUNC_6(&VAR_24, 0, sizeof VAR_24);
 VAR_24.init_attr.send_cq = VAR_18->cq;
 VAR_24.init_attr.recv_cq = VAR_18->cq;
 VAR_24.init_attr.sq_sig_type = VAR_13;
 VAR_24.init_attr.cap.max_send_wr = VAR_16;
 VAR_24.init_attr.cap.max_recv_wr = VAR_16;
 VAR_24.init_attr.cap.max_send_sge = 1;
 VAR_24.init_attr.cap.max_recv_sge = 1;
 if (VAR_20) {
  VAR_24.init_attr.qp_type = VAR_7;
  VAR_24.init_attr.create_flags =
      (enum ib_qp_create_flags)VAR_15;
  VAR_24.port = VAR_18->port;
  VAR_24.slave = VAR_18->slave;
  VAR_24.proxy_qp_type = VAR_19;
  VAR_26 = VAR_12 | VAR_8 |
      VAR_10 | VAR_9;
 } else {
  VAR_24.init_attr.qp_type = VAR_19;
  VAR_24.init_attr.create_flags =
      (enum ib_qp_create_flags)VAR_14;
  VAR_26 = VAR_12 | VAR_8 | VAR_10;
 }
 VAR_24.init_attr.port_num = VAR_18->port;
 VAR_24.init_attr.qp_context = VAR_18;
 VAR_24.init_attr.event_handler = VAR_17;
 VAR_23->qp = FUNC_3(VAR_18->pd, &VAR_24.init_attr);
 if (FUNC_0(VAR_23->qp)) {
  VAR_22 = FUNC_1(VAR_23->qp);
  VAR_23->qp = ((void*)0);
  FUNC_8("Couldn't create %s QP (%d)\n",
         VAR_20 ? "tunnel" : "special", VAR_22);
  return VAR_22;
 }

 FUNC_6(&VAR_25, 0, sizeof VAR_25);
 VAR_25.qp_state = VAR_3;
 VAR_22 = 0;
 if (VAR_20)
  VAR_22 = FUNC_2(FUNC_9(VAR_18->ib_dev), VAR_18->slave,
           VAR_18->port, VAR_1,
           &VAR_25.pkey_index);
 if (VAR_22 || !VAR_20)
  VAR_25.pkey_index =
   FUNC_9(VAR_18->ib_dev)->pkeys.virt2phys_pkey[VAR_18->slave][VAR_18->port - 1][0];
 VAR_25.qkey = VAR_2;
 VAR_25.port_num = VAR_18->port;
 VAR_22 = FUNC_5(VAR_23->qp, &VAR_25, VAR_26);
 if (VAR_22) {
  FUNC_8("Couldn't change %s qp state to INIT (%d)\n",
         VAR_20 ? "tunnel" : "special", VAR_22);
  goto err_qp;
 }
 VAR_25.qp_state = VAR_4;
 VAR_22 = FUNC_5(VAR_23->qp, &VAR_25, VAR_12);
 if (VAR_22) {
  FUNC_8("Couldn't change %s qp state to RTR (%d)\n",
         VAR_20 ? "tunnel" : "special", VAR_22);
  goto err_qp;
 }
 VAR_25.qp_state = VAR_5;
 VAR_25.sq_psn = 0;
 VAR_22 = FUNC_5(VAR_23->qp, &VAR_25, VAR_12 | VAR_11);
 if (VAR_22) {
  FUNC_8("Couldn't change %s qp state to RTS (%d)\n",
         VAR_20 ? "tunnel" : "special", VAR_22);
  goto err_qp;
 }

 for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
  VAR_22 = FUNC_7(VAR_18, VAR_23, VAR_21);
  if (VAR_22) {
   FUNC_8(" mlx4_ib_post_pv_buf error"
          " (err = %d, i = %d)\n", VAR_22, VAR_21);
   goto err_qp;
  }
 }
 return 0;

err_qp:
 FUNC_4(VAR_23->qp);
 VAR_23->qp = ((void*)0);
 return VAR_22;
}
