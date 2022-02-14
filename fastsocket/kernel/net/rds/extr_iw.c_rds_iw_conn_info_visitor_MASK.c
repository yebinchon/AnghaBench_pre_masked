
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct rds_iw_device {int max_sge; } ;
struct TYPE_10__ {int w_nr; } ;
struct TYPE_9__ {int w_nr; } ;
struct rds_iw_connection {TYPE_5__ i_recv_ring; TYPE_4__ i_send_ring; TYPE_3__* i_cm_id; } ;
struct rds_info_rdma_connection {int max_send_sge; int max_recv_wr; int max_send_wr; int dst_gid; int src_gid; int dst_addr; int src_addr; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; int c_faddr; int c_laddr; int * c_trans; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_6__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {int device; TYPE_2__ route; } ;


 scalar_t__ VAR_0 ;
 struct rds_iw_device* FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rdma_dev_addr*,union ib_gid*) ;
 int FUNC_3 (struct rdma_dev_addr*,union ib_gid*) ;
 scalar_t__ FUNC_4 (struct rds_connection*) ;
 int VAR_1 ;
 int FUNC_5 (struct rds_iw_device*,struct rds_info_rdma_connection*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct rds_connection *VAR_3,
        void *VAR_4)
{
 struct rds_info_rdma_connection *VAR_5 = VAR_4;
 struct rds_iw_connection *VAR_6;


 if (VAR_3->c_trans != &VAR_2)
  return 0;

 VAR_5->src_addr = VAR_3->c_laddr;
 VAR_5->dst_addr = VAR_3->c_faddr;

 FUNC_1(&VAR_5->src_gid, 0, sizeof(VAR_5->src_gid));
 FUNC_1(&VAR_5->dst_gid, 0, sizeof(VAR_5->dst_gid));
 if (FUNC_4(VAR_3) == VAR_0) {
  struct rds_iw_device *VAR_7;
  struct rdma_dev_addr *VAR_8;

  VAR_6 = VAR_3->c_transport_data;
  VAR_8 = &VAR_6->i_cm_id->route.addr.dev_addr;

  FUNC_3(VAR_8, (union ib_gid *) &VAR_5->src_gid);
  FUNC_2(VAR_8, (union ib_gid *) &VAR_5->dst_gid);

  VAR_7 = FUNC_0(VAR_6->i_cm_id->device, &VAR_1);
  VAR_5->max_send_wr = VAR_6->i_send_ring.w_nr;
  VAR_5->max_recv_wr = VAR_6->i_recv_ring.w_nr;
  VAR_5->max_send_sge = VAR_7->max_sge;
  FUNC_5(VAR_7, VAR_5);
 }
 return 1;
}
