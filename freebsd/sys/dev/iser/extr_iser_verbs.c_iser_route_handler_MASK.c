
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_conn_param {int retry_count; int rnr_retry_count; int initiator_depth; int flags; int private_data_len; void* private_data; int responder_resources; } ;
struct rdma_cm_id {struct iser_conn* context; } ;
struct TYPE_2__ {int max_qp_rd_atom; } ;
struct iser_device {TYPE_1__ dev_attr; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {struct ib_conn ib_conn; } ;
struct iser_cm_hdr {int retry_count; int rnr_retry_count; int initiator_depth; int flags; int private_data_len; void* private_data; int responder_resources; } ;
typedef int req_hdr ;


 int FUNC_0 (char*,struct iser_conn*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct ib_conn*) ;
 int FUNC_3 (struct rdma_conn_param*,int ,int) ;
 int FUNC_4 (struct rdma_cm_id*,struct rdma_conn_param*) ;

__attribute__((used)) static void
FUNC_5(struct rdma_cm_id *VAR_2)
{
 struct rdma_conn_param VAR_3;
 int VAR_4;
 struct iser_cm_hdr VAR_5;
 struct iser_conn *VAR_6 = VAR_2->context;
 struct ib_conn *VAR_7 = &VAR_6->ib_conn;
 struct iser_device *VAR_8 = VAR_7->device;

 VAR_4 = FUNC_2(VAR_7);
 if (VAR_4)
  goto failure;

 FUNC_3(&VAR_3, 0, sizeof VAR_3);
 VAR_3.responder_resources = VAR_8->dev_attr.max_qp_rd_atom;
 VAR_3.retry_count = 7;
 VAR_3.rnr_retry_count = 6;




 VAR_3.initiator_depth = 1;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.flags = (VAR_1 |
   VAR_0);
 VAR_3.private_data = (void *)&VAR_5;
 VAR_3.private_data_len = sizeof(struct iser_cm_hdr);

 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_0("conn %p failure connecting: %d", VAR_6, VAR_4);
  goto failure;
 }

 return;
failure:
 FUNC_1(VAR_2);
}
