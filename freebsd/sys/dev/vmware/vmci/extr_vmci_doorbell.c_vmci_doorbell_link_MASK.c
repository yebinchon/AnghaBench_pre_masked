
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmci_id ;
typedef int uint32_t ;
struct vmci_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_doorbell_link_msg {int notify_idx; struct vmci_handle handle; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;
typedef int link_msg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vmci_handle) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vmci_datagram*) ;

__attribute__((used)) static int
FUNC_4(struct vmci_handle VAR_5, bool VAR_6,
    uint32_t VAR_7)
{
 struct vmci_doorbell_link_msg VAR_8;
 vmci_id VAR_9;

 FUNC_0(!FUNC_1(VAR_5));

 if (VAR_6)
  VAR_9 = VAR_2;
 else {
  FUNC_0(0);
  return (VAR_3);
 }

 VAR_8.hdr.dst = FUNC_2(VAR_4,
     VAR_9);
 VAR_8.hdr.src = VAR_0;
 VAR_8.hdr.payload_size = sizeof(VAR_8) - VAR_1;
 VAR_8.handle = VAR_5;
 VAR_8.notify_idx = VAR_7;

 return (FUNC_3((struct vmci_datagram *)&VAR_8));
}
