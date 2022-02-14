
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcrdma_write_array {int wc_nchunks; TYPE_3__* wc_array; scalar_t__ wc_discrim; } ;
struct TYPE_4__ {int * rm_chunks; } ;
struct rpcrdma_msg {TYPE_1__ rm_body; } ;
struct TYPE_5__ {int rs_length; } ;
struct TYPE_6__ {TYPE_2__ wc_target; } ;


 size_t FUNC_0 (int ) ;

int FUNC_1(struct rpcrdma_msg *VAR_0)
{
 struct rpcrdma_write_array *VAR_1;




 VAR_1 = (struct rpcrdma_write_array *)
  &VAR_0->rm_body.rm_chunks[1];
 if (VAR_1->wc_discrim)
  VAR_1 = (struct rpcrdma_write_array *)
   &VAR_1->wc_array[FUNC_0(VAR_1->wc_nchunks)].
   wc_target.rs_length;
 else
  VAR_1 = (struct rpcrdma_write_array *)
   &VAR_1->wc_nchunks;


 if (VAR_1->wc_discrim)
  VAR_1 = (struct rpcrdma_write_array *)
   &VAR_1->wc_array[FUNC_0(VAR_1->wc_nchunks)];
 else
  VAR_1 = (struct rpcrdma_write_array *)
   &VAR_1->wc_nchunks;

 return (unsigned long) VAR_1 - (unsigned long) VAR_0;
}
