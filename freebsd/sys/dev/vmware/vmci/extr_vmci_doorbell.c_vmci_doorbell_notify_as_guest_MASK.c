
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmci_privilege_flags ;
struct vmci_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_doorbell_notify_msg {struct vmci_handle handle; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;
typedef int notify_msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vmci_datagram*) ;

__attribute__((used)) static int
FUNC_2(struct vmci_handle VAR_4,
    vmci_privilege_flags VAR_5)
{
 struct vmci_doorbell_notify_msg VAR_6;

 VAR_6.hdr.dst = FUNC_0(VAR_3,
     VAR_2);
 VAR_6.hdr.src = VAR_0;
 VAR_6.hdr.payload_size = sizeof(VAR_6) - VAR_1;
 VAR_6.handle = VAR_4;

 return (FUNC_1((struct vmci_datagram *)&VAR_6));
}
