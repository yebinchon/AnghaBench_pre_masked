
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcrdma_write_array {TYPE_2__* wc_array; int wc_nchunks; int wc_discrim; } ;
struct TYPE_6__ {void** rm_chunks; } ;
struct rpcrdma_msg {TYPE_3__ rm_body; } ;
struct TYPE_4__ {void* rs_length; void* rs_handle; } ;
struct TYPE_5__ {TYPE_1__ wc_target; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;

void FUNC_1(struct rpcrdma_msg *VAR_2, int VAR_3)
{
 struct rpcrdma_write_array *VAR_4;


 VAR_2->rm_body.rm_chunks[0] = VAR_1;


 VAR_4 = (struct rpcrdma_write_array *)
  &VAR_2->rm_body.rm_chunks[1];
 VAR_4->wc_discrim = VAR_0;
 VAR_4->wc_nchunks = FUNC_0(VAR_3);


 VAR_4->wc_array[VAR_3].wc_target.rs_handle = VAR_1;


 VAR_4->wc_array[VAR_3].wc_target.rs_length = VAR_1;
}
