
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rpcrdma_write_array {TYPE_1__* wc_array; } ;
struct rpcrdma_segment {int rs_offset; void* rs_length; void* rs_handle; } ;
struct TYPE_2__ {struct rpcrdma_segment wc_target; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct rpcrdma_write_array *VAR_0,
         int VAR_1,
         u32 VAR_2, u64 VAR_3,
         u32 VAR_4)
{
 struct rpcrdma_segment *VAR_5 = &VAR_0->wc_array[VAR_1].wc_target;
 VAR_5->rs_handle = FUNC_0(VAR_2);
 VAR_5->rs_length = FUNC_0(VAR_4);
 FUNC_1((u32 *) &VAR_5->rs_offset, VAR_3);
}
