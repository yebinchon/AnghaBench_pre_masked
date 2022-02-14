
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svcxprt_rdma {int sc_dma_used; TYPE_1__* sc_cm_id; } ;
struct TYPE_12__ {int * pages; scalar_t__ buflen; scalar_t__ len; int * tail; int * head; } ;
struct svc_rqst {TYPE_4__ rq_arg; int * rq_respages; } ;
struct svc_rdma_req_map {TYPE_7__* ch; TYPE_6__* sge; } ;
struct TYPE_11__ {int page_len; int * pages; scalar_t__ buflen; scalar_t__ len; scalar_t__ page_base; int * tail; int * head; } ;
struct svc_rdma_op_ctxt {size_t count; size_t hdr_count; TYPE_3__ arg; int * pages; struct svc_rdma_fastreg_mr* frmr; } ;
struct svc_rdma_fastreg_mr {int access_flags; int map_len; int page_list_len; scalar_t__ kva; TYPE_2__* page_list; int direction; } ;
struct TYPE_16__ {scalar_t__ rs_length; } ;
struct rpcrdma_read_chunk {TYPE_8__ rc_target; } ;
struct TYPE_13__ {int * rm_chunks; } ;
struct rpcrdma_msg {TYPE_5__ rm_body; } ;
struct TYPE_15__ {int count; int start; } ;
struct TYPE_14__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct TYPE_10__ {int * page_list; } ;
struct TYPE_9__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct svc_rdma_fastreg_mr*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,struct svcxprt_rdma*) ;
 int FUNC_7 (struct svcxprt_rdma*,struct svc_rdma_fastreg_mr*) ;
 struct svc_rdma_fastreg_mr* FUNC_8 (struct svcxprt_rdma*) ;
 int FUNC_9 (struct svcxprt_rdma*,struct svc_rdma_fastreg_mr*) ;

__attribute__((used)) static int FUNC_10(struct svcxprt_rdma *VAR_7,
    struct svc_rqst *VAR_8,
    struct svc_rdma_op_ctxt *VAR_9,
    struct rpcrdma_msg *VAR_10,
    struct svc_rdma_req_map *VAR_11,
    struct svc_rdma_req_map *VAR_12,
    int VAR_13,
    int VAR_14)
{
 int VAR_15;
 int VAR_16;
 u32 VAR_17;
 struct rpcrdma_read_chunk *VAR_18;
 struct svc_rdma_fastreg_mr *VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_8(VAR_7);
 if (FUNC_0(VAR_19))
  return -VAR_2;

 VAR_9->frmr = VAR_19;
 VAR_9->arg.head[0] = VAR_8->rq_arg.head[0];
 VAR_9->arg.tail[0] = VAR_8->rq_arg.tail[0];
 VAR_9->arg.pages = &VAR_9->pages[VAR_9->count];
 VAR_9->hdr_count = VAR_9->count;
 VAR_9->arg.page_base = 0;
 VAR_9->arg.page_len = VAR_14;
 VAR_9->arg.len = VAR_8->rq_arg.len + VAR_14;
 VAR_9->arg.buflen = VAR_8->rq_arg.buflen + VAR_14;


 VAR_19->kva = FUNC_5(VAR_8->rq_arg.pages[0]);
 VAR_19->direction = VAR_0;
 VAR_19->access_flags = (VAR_3|VAR_4);
 VAR_19->map_len = VAR_14;
 VAR_19->page_list_len = FUNC_1(VAR_14) >> VAR_5;
 for (VAR_15 = 0; VAR_15 < VAR_19->page_list_len; VAR_15++) {
  VAR_19->page_list->page_list[VAR_15] =
   FUNC_3(VAR_7->sc_cm_id->device,
     VAR_8->rq_arg.pages[VAR_15], 0,
     VAR_6, VAR_0);
  if (FUNC_4(VAR_7->sc_cm_id->device,
      VAR_19->page_list->page_list[VAR_15]))
   goto fatal_err;
  FUNC_2(&VAR_7->sc_dma_used);
  VAR_9->arg.pages[VAR_15] = VAR_8->rq_arg.pages[VAR_15];
 }
 VAR_9->count += VAR_15;


 VAR_8->rq_respages = &VAR_8->rq_arg.pages[VAR_15];


 VAR_17 = 0;
 VAR_18 = (struct rpcrdma_read_chunk *)&VAR_10->rm_body.rm_chunks[0];
 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  VAR_11->sge[VAR_16].iov_base = VAR_19->kva + VAR_17;
  VAR_11->sge[VAR_16].iov_len = VAR_18->rc_target.rs_length;
  VAR_12->ch[VAR_16].count = 1;
  VAR_12->ch[VAR_16].start = VAR_16;
  VAR_17 += VAR_18->rc_target.rs_length;
  VAR_18++;
 }

 VAR_20 = FUNC_7(VAR_7, VAR_19);
 if (VAR_20)
  goto fatal_err;

 return VAR_16;

 fatal_err:
 FUNC_6("svcrdma: error fast registering xdr for xprt %p", VAR_7);
 FUNC_9(VAR_7, VAR_19);
 return -VAR_1;
}
