
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct svcxprt_rdma {int sc_max_sge; } ;
struct TYPE_12__ {int page_len; TYPE_5__* tail; TYPE_3__* head; } ;
struct svc_rqst {TYPE_6__ rq_res; } ;
struct svc_rdma_req_map {TYPE_2__* frmr; } ;
struct rpcrdma_write_array {int wc_nchunks; TYPE_4__* wc_array; } ;
struct rpcrdma_segment {int rs_length; int rs_handle; int rs_offset; } ;
struct TYPE_7__ {int * rm_chunks; } ;
struct rpcrdma_msg {TYPE_1__ rm_body; } ;
struct TYPE_11__ {int iov_len; } ;
struct TYPE_10__ {struct rpcrdma_segment wc_target; } ;
struct TYPE_9__ {int iov_len; } ;
struct TYPE_8__ {int map_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct svcxprt_rdma*,struct svc_rqst*,int ,scalar_t__,int,int,struct svc_rdma_req_map*) ;
 struct rpcrdma_write_array* FUNC_4 (struct rpcrdma_msg*) ;
 int FUNC_5 (struct rpcrdma_write_array*,int,int ,scalar_t__,int) ;
 int FUNC_6 (struct rpcrdma_msg*,int) ;

__attribute__((used)) static int FUNC_7(struct svcxprt_rdma *VAR_2,
        struct rpcrdma_msg *VAR_3,
        struct rpcrdma_msg *VAR_4,
        struct svc_rqst *VAR_5,
        struct svc_rdma_req_map *VAR_6)
{
 u32 VAR_7 = VAR_5->rq_res.page_len + VAR_5->rq_res.tail[0].iov_len;
 int VAR_8;
 int VAR_9;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;
 struct rpcrdma_write_array *VAR_13;
 struct rpcrdma_write_array *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(VAR_3);
 if (!VAR_13)
  return 0;
 VAR_14 = (struct rpcrdma_write_array *)
  &VAR_4->rm_body.rm_chunks[1];

 if (VAR_6->frmr)
  VAR_9 = VAR_6->frmr->map_len;
 else
  VAR_9 = VAR_2->sc_max_sge * VAR_1;


 for (VAR_10 = VAR_5->rq_res.head[0].iov_len, VAR_12 = 0;
      VAR_7 && VAR_12 < VAR_13->wc_nchunks;
      VAR_12++) {
  struct rpcrdma_segment *VAR_16;
  u64 VAR_17;

  VAR_16 = &VAR_13->wc_array[VAR_12].wc_target;
  VAR_8 = FUNC_2(VAR_7, VAR_16->rs_length);



  VAR_17 = FUNC_1(&(VAR_16->rs_offset));
  FUNC_5(VAR_14, VAR_12,
         VAR_16->rs_handle,
         VAR_17,
         VAR_8);
  VAR_11 = 0;
  while (VAR_8) {
   int VAR_18;
   VAR_18 = FUNC_2(VAR_8, VAR_9);
   VAR_15 = FUNC_3(VAR_2, VAR_5,
      VAR_16->rs_handle,
      VAR_17 + VAR_11,
      VAR_10,
      VAR_18,
      VAR_6);
   if (VAR_15) {
    FUNC_0("svcrdma: RDMA_WRITE failed, ret=%d\n",
     VAR_15);
    return -VAR_0;
   }
   VAR_11 += VAR_18;
   VAR_10 += VAR_18;
   VAR_7 -= VAR_18;
   VAR_8 -= VAR_18;
  }
 }

 FUNC_6(VAR_4, VAR_12);

 return VAR_5->rq_res.page_len + VAR_5->rq_res.tail[0].iov_len;
}
