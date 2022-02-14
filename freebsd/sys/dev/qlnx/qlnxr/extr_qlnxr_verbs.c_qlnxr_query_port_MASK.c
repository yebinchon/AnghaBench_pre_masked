
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct qlnxr_dev {TYPE_2__* ha; int * rdma_ctx; } ;
struct ib_port_attr {int phys_state; int gid_tbl_len; int pkey_tbl_len; int max_vl_num; int max_msg_sz; int active_width; int active_speed; int state; scalar_t__ qkey_viol_cntr; int bad_pkey_cntr; scalar_t__ port_cap_flags; scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lmc; scalar_t__ lid; int active_mtu; int max_mtu; } ;
struct ib_device {int dummy; } ;
struct ecore_rdma_port {scalar_t__ port_state; int link_speed; int max_msg_size; int pkey_bad_counter; } ;
struct TYPE_5__ {TYPE_1__* ifp; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_4__ {int if_mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 struct ecore_rdma_port* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;
 struct qlnxr_dev* FUNC_4 (struct ib_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ib_port_attr*,int ,int) ;

int
FUNC_7(struct ib_device *VAR_7, uint8_t VAR_8,
 struct ib_port_attr *VAR_9)
{
 struct qlnxr_dev *VAR_10;
 struct ecore_rdma_port *VAR_11;
 qlnx_host_t *VAR_12;

 VAR_10 = FUNC_4(VAR_7);
 VAR_12 = VAR_10->ha;

 FUNC_1(VAR_12, "enter\n");

 if (VAR_8 > 1) {
  FUNC_1(VAR_12, "port [%d] > 1 \n", VAR_8);
  return -VAR_1;
 }

 if (VAR_10->rdma_ctx == ((void*)0)) {
  FUNC_1(VAR_12, "rdma_ctx == NULL\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_2(VAR_10->rdma_ctx);
 FUNC_6(VAR_9, 0, sizeof *VAR_9);

 if (VAR_11->port_state == VAR_0) {
  VAR_9->state = VAR_3;
  VAR_9->phys_state = 5;
 } else {
  VAR_9->state = VAR_4;
  VAR_9->phys_state = 3;
 }

 VAR_9->max_mtu = VAR_2;
 VAR_9->active_mtu = FUNC_5(VAR_10->ha->ifp->if_mtu);
 VAR_9->lid = 0;
 VAR_9->lmc = 0;
 VAR_9->sm_lid = 0;
 VAR_9->sm_sl = 0;
 VAR_9->port_cap_flags = 0;

 if (FUNC_0(VAR_10)) {
  VAR_9->gid_tbl_len = 1;
  VAR_9->pkey_tbl_len = 1;
 } else {
  VAR_9->gid_tbl_len = VAR_5;
  VAR_9->pkey_tbl_len = VAR_6;
 }

 VAR_9->bad_pkey_cntr = VAR_11->pkey_bad_counter;
 VAR_9->qkey_viol_cntr = 0;

 FUNC_3(VAR_11->link_speed,
     &VAR_9->active_speed, &VAR_9->active_width);

 VAR_9->max_msg_sz = VAR_11->max_msg_size;
 VAR_9->max_vl_num = 4;

 FUNC_1(VAR_12, "state = %d phys_state = %d "
  " link_speed = %d active_speed = %d active_width = %d"
  " attr->gid_tbl_len = %d attr->pkey_tbl_len = %d"
  " max_msg_sz = 0x%x max_vl_num = 0x%x \n",
  VAR_9->state, VAR_9->phys_state,
  VAR_11->link_speed, VAR_9->active_speed,
  VAR_9->active_width, VAR_9->gid_tbl_len, VAR_9->pkey_tbl_len,
  VAR_9->max_msg_sz, VAR_9->max_vl_num);

 FUNC_1(VAR_12, "exit\n");
 return 0;
}
