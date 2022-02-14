
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rs_length; } ;
struct rpcrdma_read_chunk {scalar_t__ rc_discrim; TYPE_1__ rc_target; } ;



void FUNC_0(struct rpcrdma_read_chunk *VAR_0,
          int *VAR_1, int *VAR_2)
{

 *VAR_2 = 0;
 *VAR_1 = 0;
 for (; VAR_0->rc_discrim != 0; VAR_0++) {
  *VAR_2 = *VAR_2 + VAR_0->rc_target.rs_length;
  *VAR_1 = *VAR_1 + 1;
 }
}
