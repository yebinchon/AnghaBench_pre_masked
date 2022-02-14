
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_msghc {int mh_xact; } ;
struct hypercall_postmsg_in {void* hc_data; } ;


 struct hypercall_postmsg_in* FUNC_0 (int ) ;

void *
FUNC_1(struct vmbus_msghc *VAR_0)
{
 struct hypercall_postmsg_in *VAR_1;

 VAR_1 = FUNC_0(VAR_0->mh_xact);
 return (VAR_1->hc_data);
}
