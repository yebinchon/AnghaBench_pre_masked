
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_2__* tk_rqstp; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ rq_snd_buf; } ;



__attribute__((used)) static inline int
FUNC_0(struct rpc_task *VAR_0)
{
 return VAR_0->tk_rqstp->rq_snd_buf.len == 0;
}
