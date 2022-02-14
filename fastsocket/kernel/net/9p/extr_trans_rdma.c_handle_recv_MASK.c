
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct p9_trans_rdma {int state; TYPE_1__* cm_id; } ;
struct p9_req_t {int status; int rc; } ;
struct p9_rdma_context {int rc; int busa; } ;
struct p9_client {int status; int msize; } ;
typedef int int16_t ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,struct p9_req_t*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_3 (int ,int *,int *,int *,int) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ) ;

__attribute__((used)) static void
FUNC_5(struct p9_client *VAR_6, struct p9_trans_rdma *VAR_7,
     struct p9_rdma_context *VAR_8, enum ib_wc_status VAR_9, u32 VAR_10)
{
 struct p9_req_t *VAR_11;
 int VAR_12 = 0;
 int16_t VAR_13;

 VAR_11 = ((void*)0);
 FUNC_1(VAR_7->cm_id->device, VAR_8->busa, VAR_6->msize,
        VAR_0);

 if (VAR_9 != VAR_2)
  goto err_out;

 VAR_12 = FUNC_3(VAR_8->rc, ((void*)0), ((void*)0), &VAR_13, 1);
 if (VAR_12)
  goto err_out;

 VAR_11 = FUNC_4(VAR_6, VAR_13);
 if (!VAR_11)
  goto err_out;

 VAR_11->rc = VAR_8->rc;
 VAR_11->status = VAR_5;
 FUNC_2(VAR_6, VAR_11);

 return;

 err_out:
 FUNC_0(VAR_3, "req %p err %d status %d\n",
     VAR_11, VAR_12, VAR_9);
 VAR_7->state = VAR_4;
 VAR_6->status = VAR_1;
 return;
}
