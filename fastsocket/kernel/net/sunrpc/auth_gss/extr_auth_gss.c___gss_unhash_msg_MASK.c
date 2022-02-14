
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int errno; } ;
struct gss_upcall_msg {int count; int waitqueue; TYPE_1__ msg; int rpc_waitqueue; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct gss_upcall_msg *VAR_0)
{
 FUNC_1(&VAR_0->list);
 FUNC_2(&VAR_0->rpc_waitqueue, VAR_0->msg.errno);
 FUNC_3(&VAR_0->waitqueue);
 FUNC_0(&VAR_0->count);
}
