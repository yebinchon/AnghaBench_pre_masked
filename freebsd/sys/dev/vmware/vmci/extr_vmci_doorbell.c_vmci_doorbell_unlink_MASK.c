
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmci_id ;
typedef int unlink_msg ;
struct vmci_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_doorbell_unlink_msg {struct vmci_handle handle; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;


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
FUNC_4(struct vmci_handle VAR_5, bool VAR_6)
{
 struct vmci_doorbell_unlink_msg VAR_7;
 vmci_id VAR_8;

 FUNC_0(!FUNC_1(VAR_5));

 if (VAR_6)
  VAR_8 = VAR_2;
 else {
  FUNC_0(0);
  return (VAR_3);
 }

 VAR_7.hdr.dst = FUNC_2(VAR_4,
     VAR_8);
 VAR_7.hdr.src = VAR_0;
 VAR_7.hdr.payload_size = sizeof(VAR_7) - VAR_1;
 VAR_7.handle = VAR_5;

 return (FUNC_3((struct vmci_datagram *)&VAR_7));
}
