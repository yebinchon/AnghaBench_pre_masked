
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_handle {int dummy; } ;
struct TYPE_2__ {int payload_size; int src; int dst; } ;
struct vmci_queue_pair_detach_msg {struct vmci_handle handle; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;
typedef int handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct vmci_datagram*) ;

int
FUNC_2(struct vmci_handle VAR_3)
{
 struct vmci_queue_pair_detach_msg VAR_4;

 VAR_4.hdr.dst = FUNC_0(VAR_1,
     VAR_2);
 VAR_4.hdr.src = VAR_0;
 VAR_4.hdr.payload_size = sizeof(VAR_3);
 VAR_4.handle = VAR_3;

 return (FUNC_1((struct vmci_datagram *)&VAR_4));
}
