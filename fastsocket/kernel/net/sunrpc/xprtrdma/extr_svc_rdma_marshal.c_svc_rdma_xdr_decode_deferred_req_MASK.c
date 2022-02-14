
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


typedef int u32 ;
struct TYPE_12__ {TYPE_5__* head; } ;
struct svc_rqst {TYPE_6__ rq_arg; } ;
struct rpcrdma_write_array {scalar_t__ wc_discrim; size_t wc_nchunks; TYPE_4__* wc_array; } ;
struct rpcrdma_read_chunk {scalar_t__ rc_discrim; int rc_position; } ;
struct TYPE_7__ {int* rm_pempty; } ;
struct TYPE_8__ {int* rm_chunks; TYPE_1__ rm_padded; } ;
struct rpcrdma_msg {scalar_t__ rm_type; TYPE_2__ rm_body; } ;
struct TYPE_11__ {int* iov_base; int iov_len; } ;
struct TYPE_9__ {int rs_length; } ;
struct TYPE_10__ {TYPE_3__ wc_target; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct svc_rqst*) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct svc_rqst *VAR_2)
{
 struct rpcrdma_msg *VAR_3 = ((void*)0);
 struct rpcrdma_read_chunk *VAR_4;
 struct rpcrdma_write_array *VAR_5;
 u32 *VAR_6;
 u32 VAR_7;

 FUNC_0("svcrdma: processing deferred RDMA header on rqstp=%p\n",
  VAR_2);
 VAR_3 = (struct rpcrdma_msg *)VAR_2->rq_arg.head[0].iov_base;


 if (VAR_3->rm_type == VAR_0) {
  VAR_6 = &VAR_3->rm_body.rm_padded.rm_pempty[4];
  VAR_2->rq_arg.head[0].iov_base = VAR_6;
  VAR_7 = (u32)((unsigned long)VAR_6 - (unsigned long)VAR_3);
  VAR_2->rq_arg.head[0].iov_len -= VAR_7;
  return VAR_7;
 }




 VAR_6 = &VAR_3->rm_body.rm_chunks[0];


 for (VAR_4 = (struct rpcrdma_read_chunk *)VAR_6;
      VAR_4->rc_discrim != VAR_1; VAR_4++);
 VAR_6 = (u32 *)&VAR_4->rc_position;


 VAR_5 = (struct rpcrdma_write_array *)VAR_6;
 if (VAR_5->wc_discrim == VAR_1)
  VAR_6 = (u32 *)&VAR_5->wc_nchunks;
 else




  VAR_6 = (u32 *)&VAR_5->wc_array[VAR_5->wc_nchunks].wc_target.rs_length;


 VAR_5 = (struct rpcrdma_write_array *)VAR_6;
 if (VAR_5->wc_discrim == VAR_1)
  VAR_6 = (u32 *)&VAR_5->wc_nchunks;
 else
  VAR_6 = (u32 *)&VAR_5->wc_array[VAR_5->wc_nchunks];

 VAR_2->rq_arg.head[0].iov_base = VAR_6;
 VAR_7 = (unsigned long)VAR_6 - (unsigned long)VAR_3;
 VAR_2->rq_arg.head[0].iov_len -= VAR_7;

 return VAR_7;
}
