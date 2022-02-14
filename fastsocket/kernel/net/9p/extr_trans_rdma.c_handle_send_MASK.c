
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct p9_trans_rdma {TYPE_1__* cm_id; } ;
struct p9_rdma_context {TYPE_3__* req; int busa; } ;
struct p9_client {int dummy; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_6__ {TYPE_2__* tc; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct p9_client *VAR_1, struct p9_trans_rdma *VAR_2,
     struct p9_rdma_context *VAR_3, enum ib_wc_status VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_2->cm_id->device,
       VAR_3->busa, VAR_3->req->tc->size,
       VAR_0);
}
