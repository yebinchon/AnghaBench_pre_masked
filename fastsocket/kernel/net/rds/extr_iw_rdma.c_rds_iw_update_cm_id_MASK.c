
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; } ;
struct rds_sock {int rs_conn_port; int rs_conn_addr; int rs_bound_port; int rs_bound_addr; } ;
struct rds_iw_device {int dummy; } ;
struct TYPE_4__ {int dst_addr; int src_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; } ;


 int FUNC_0 (struct rds_iw_device*,struct rdma_cm_id*) ;
 int FUNC_1 (struct rds_sock*,struct rds_iw_device**,struct rdma_cm_id**) ;
 int FUNC_2 (struct rds_iw_device*,struct rdma_cm_id*) ;

int FUNC_3(struct rds_iw_device *VAR_0, struct rdma_cm_id *VAR_1)
{
 struct sockaddr_in *VAR_2, *VAR_3;
 struct rds_iw_device *VAR_4;
 struct rds_sock VAR_5;
 struct rdma_cm_id *VAR_6;
 int VAR_7;

 VAR_2 = (struct sockaddr_in *)&VAR_1->route.addr.src_addr;
 VAR_3 = (struct sockaddr_in *)&VAR_1->route.addr.dst_addr;

 VAR_5.rs_bound_addr = VAR_2->sin_addr.s_addr;
 VAR_5.rs_bound_port = VAR_2->sin_port;
 VAR_5.rs_conn_addr = VAR_3->sin_addr.s_addr;
 VAR_5.rs_conn_port = VAR_3->sin_port;

 VAR_7 = FUNC_1(&VAR_5, &VAR_4, &VAR_6);
 if (VAR_7)
  FUNC_2(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
