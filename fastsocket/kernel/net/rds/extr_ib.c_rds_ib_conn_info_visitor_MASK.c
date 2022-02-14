
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
struct rds_info_rdma_connection {int max_send_sge; int max_recv_wr; int max_send_wr; int dst_gid; int src_gid; int dst_addr; int src_addr; } ;
struct rds_ib_device {int max_sge; } ;
struct TYPE_10__ {int w_nr; } ;
struct TYPE_9__ {int w_nr; } ;
struct rds_ib_connection {TYPE_5__ i_recv_ring; TYPE_4__ i_send_ring; struct rds_ib_device* rds_ibdev; TYPE_3__* i_cm_id; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; int c_faddr; int c_laddr; int * c_trans; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_6__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {TYPE_2__ route; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rdma_dev_addr*,union ib_gid*) ;
 int FUNC_2 (struct rdma_dev_addr*,union ib_gid*) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (struct rds_ib_device*,struct rds_info_rdma_connection*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rds_connection *VAR_2,
        void *VAR_3)
{
 struct rds_info_rdma_connection *VAR_4 = VAR_3;
 struct rds_ib_connection *VAR_5;


 if (VAR_2->c_trans != &VAR_1)
  return 0;

 VAR_4->src_addr = VAR_2->c_laddr;
 VAR_4->dst_addr = VAR_2->c_faddr;

 FUNC_0(&VAR_4->src_gid, 0, sizeof(VAR_4->src_gid));
 FUNC_0(&VAR_4->dst_gid, 0, sizeof(VAR_4->dst_gid));
 if (FUNC_3(VAR_2) == VAR_0) {
  struct rds_ib_device *VAR_6;
  struct rdma_dev_addr *VAR_7;

  VAR_5 = VAR_2->c_transport_data;
  VAR_7 = &VAR_5->i_cm_id->route.addr.dev_addr;

  FUNC_2(VAR_7, (union ib_gid *) &VAR_4->src_gid);
  FUNC_1(VAR_7, (union ib_gid *) &VAR_4->dst_gid);

  VAR_6 = VAR_5->rds_ibdev;
  VAR_4->max_send_wr = VAR_5->i_send_ring.w_nr;
  VAR_4->max_recv_wr = VAR_5->i_recv_ring.w_nr;
  VAR_4->max_send_sge = VAR_6->max_sge;
  FUNC_4(VAR_6, VAR_4);
 }
 return 1;
}
