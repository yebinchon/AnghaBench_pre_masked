
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int port_num; int sl; int dlid; } ;
struct ibv_qp_attr {int min_rnr_timer; int timeout; int retry_cnt; int rnr_retry; int sq_psn; void* qp_state; TYPE_4__ ah_attr; int rq_psn; int path_mtu; int dest_qp_num; } ;
struct TYPE_11__ {int * send_qp; TYPE_3__* rem_dest; int ib_port; int sl; int mtu; int * recv_qp; } ;
struct TYPE_7__ {scalar_t__ interface_id; } ;
struct TYPE_8__ {TYPE_1__ global; } ;
struct TYPE_9__ {int recv_psn; TYPE_2__ gid; int lid; int send_psn; int recv_qpn; int send_qpn; } ;


 void* VAR_0 ;
 void* VAR_1 ;
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
 TYPE_5__ VAR_14 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,struct ibv_qp_attr*,int) ;
 int FUNC_2 (struct ibv_qp_attr*,int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_4(int VAR_16)
{
 struct ibv_qp_attr VAR_17;

 FUNC_2(&VAR_17, 0, sizeof VAR_17);
 VAR_17.qp_state = VAR_0;
 VAR_17.dest_qp_num = VAR_14.rem_dest[VAR_16].send_qpn;
 VAR_17.path_mtu = VAR_14.mtu;
 VAR_17.rq_psn = VAR_14.rem_dest[VAR_16].send_psn;
 VAR_17.min_rnr_timer = 12;
 VAR_17.ah_attr.dlid = VAR_14.rem_dest[VAR_16].lid;
 VAR_17.ah_attr.sl = VAR_14.sl;
 VAR_17.ah_attr.port_num = VAR_14.ib_port;

 if (VAR_14.rem_dest[VAR_16].gid.global.interface_id)
  FUNC_3(&VAR_17.ah_attr, &VAR_14, VAR_16);

 if (FUNC_1(VAR_14.recv_qp[VAR_16], &VAR_17,
     VAR_12 | VAR_2 | VAR_7 |
     VAR_3 | VAR_10 |
     VAR_4 | VAR_6)) {
  FUNC_0(VAR_15, "Failed to modify recv QP[%d] to RTR\n", VAR_16);
  return 1;
 }

 FUNC_2(&VAR_17, 0, sizeof VAR_17);
 VAR_17.qp_state = VAR_1;
 VAR_17.timeout = 14;
 VAR_17.sq_psn = VAR_14.rem_dest[VAR_16].recv_psn;

 if (FUNC_1(VAR_14.recv_qp[VAR_16], &VAR_17,
     VAR_12 | VAR_13 | VAR_11)) {
  FUNC_0(VAR_15, "Failed to modify recv QP[%d] to RTS\n", VAR_16);
  return 1;
 }

 FUNC_2(&VAR_17, 0, sizeof VAR_17);
 VAR_17.qp_state = VAR_0;
 VAR_17.dest_qp_num = VAR_14.rem_dest[VAR_16].recv_qpn;
 VAR_17.path_mtu = VAR_14.mtu;
 VAR_17.rq_psn = VAR_14.rem_dest[VAR_16].send_psn;
 VAR_17.ah_attr.dlid = VAR_14.rem_dest[VAR_16].lid;
 VAR_17.ah_attr.sl = VAR_14.sl;
 VAR_17.ah_attr.port_num = VAR_14.ib_port;

 if (VAR_14.rem_dest[VAR_16].gid.global.interface_id)
  FUNC_3(&VAR_17.ah_attr, &VAR_14, VAR_16);

 if (FUNC_1(VAR_14.send_qp[VAR_16], &VAR_17,
     VAR_12 | VAR_2 | VAR_7 |
     VAR_3 | VAR_10)) {
  FUNC_0(VAR_15, "Failed to modify send QP[%d] to RTR\n", VAR_16);
  return 1;
 }

 FUNC_2(&VAR_17, 0, sizeof VAR_17);
 VAR_17.qp_state = VAR_1;
 VAR_17.timeout = 14;
 VAR_17.retry_cnt = 7;
 VAR_17.rnr_retry = 7;
 VAR_17.sq_psn = VAR_14.rem_dest[VAR_16].recv_psn;

 if (FUNC_1(VAR_14.send_qp[VAR_16], &VAR_17,
     VAR_12 | VAR_13 | VAR_11 |
     VAR_8 | VAR_9 | VAR_5)) {
  FUNC_0(VAR_15, "Failed to modify send QP[%d] to RTS\n", VAR_16);
  return 1;
 }

 return 0;
}
