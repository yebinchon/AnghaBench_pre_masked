
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; } ;
struct TYPE_3__ {int * p_decode; } ;



__attribute__((used)) static inline int FUNC_0(struct rpc_task *VAR_0)
{
 return (VAR_0->tk_msg.rpc_proc != ((void*)0)) &&
  (VAR_0->tk_msg.rpc_proc->p_decode != ((void*)0));
}
