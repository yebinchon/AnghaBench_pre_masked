
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ len; TYPE_3__* head; } ;
struct svc_rqst {TYPE_4__ rq_arg; } ;
struct TYPE_5__ {scalar_t__ rm_align; scalar_t__ rm_thresh; int* rm_pempty; } ;
struct TYPE_6__ {int* rm_chunks; TYPE_1__ rm_padded; } ;
struct rpcrdma_msg {scalar_t__ rm_xid; scalar_t__ rm_vers; scalar_t__ rm_credit; scalar_t__ rm_type; TYPE_2__ rm_body; } ;
struct TYPE_7__ {int* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* FUNC_0 (int*,int*) ;
 int* FUNC_1 (int*,int*) ;
 int* FUNC_2 (int*,int*) ;
 int FUNC_3 (char*,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;

int FUNC_5(struct rpcrdma_msg **VAR_5,
       struct svc_rqst *VAR_6)
{
 struct rpcrdma_msg *VAR_7 = ((void*)0);
 u32 *VAR_8;
 u32 *VAR_9;
 u32 VAR_10;

 VAR_7 = (struct rpcrdma_msg *)VAR_6->rq_arg.head[0].iov_base;


 if (VAR_6->rq_arg.len <= VAR_3) {
  FUNC_3("svcrdma: header too short = %d\n",
   VAR_6->rq_arg.len);
  return -VAR_0;
 }


 VAR_7->rm_xid = FUNC_4(VAR_7->rm_xid);
 VAR_7->rm_vers = FUNC_4(VAR_7->rm_vers);
 VAR_7->rm_credit = FUNC_4(VAR_7->rm_credit);
 VAR_7->rm_type = FUNC_4(VAR_7->rm_type);

 if (VAR_7->rm_vers != VAR_4)
  return -VAR_1;


 if (VAR_7->rm_type == VAR_2) {
  int VAR_11;
  VAR_7->rm_body.rm_padded.rm_align =
   FUNC_4(VAR_7->rm_body.rm_padded.rm_align);
  VAR_7->rm_body.rm_padded.rm_thresh =
   FUNC_4(VAR_7->rm_body.rm_padded.rm_thresh);

  VAR_8 = &VAR_7->rm_body.rm_padded.rm_pempty[4];
  VAR_6->rq_arg.head[0].iov_base = VAR_8;
  VAR_11 = (u32)((unsigned long)VAR_8 - (unsigned long)VAR_7);
  VAR_6->rq_arg.head[0].iov_len -= VAR_11;
  if (VAR_11 > VAR_6->rq_arg.len)
   return -VAR_0;
  return VAR_11;
 }




 VAR_8 = &VAR_7->rm_body.rm_chunks[0];
 VAR_9 = (u32 *)((unsigned long)VAR_7 + VAR_6->rq_arg.len);
 VAR_8 = FUNC_0(VAR_8, VAR_9);
 if (!VAR_8)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_8, VAR_9);
 if (!VAR_8)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_8, VAR_9);
 if (!VAR_8)
  return -VAR_0;

 VAR_6->rq_arg.head[0].iov_base = VAR_8;
 VAR_10 = (unsigned long)VAR_8 - (unsigned long)VAR_7;
 VAR_6->rq_arg.head[0].iov_len -= VAR_10;

 *VAR_5 = VAR_7;
 return VAR_10;
}
