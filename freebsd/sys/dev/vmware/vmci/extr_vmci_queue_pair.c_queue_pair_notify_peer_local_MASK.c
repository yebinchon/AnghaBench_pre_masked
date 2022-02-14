
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vmci_id ;
struct vmci_handle {int dummy; } ;
struct vmci_event_payload_qp {struct vmci_handle handle; int peer_id; } ;
struct TYPE_4__ {int event; } ;
struct TYPE_3__ {int payload_size; void* src; void* dst; } ;
struct vmci_event_msg {TYPE_2__ event_data; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vmci_datagram*) ;
 struct vmci_event_payload_qp* FUNC_2 (struct vmci_event_msg*) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(bool VAR_5, struct vmci_handle VAR_6)
{
 struct vmci_event_msg *VAR_7;
 struct vmci_event_payload_qp *VAR_8;

 vmci_id VAR_9;
 VAR_9 = FUNC_3();
 char VAR_10[sizeof(*VAR_7) + sizeof(*VAR_8)];

 VAR_7 = (struct vmci_event_msg *)VAR_10;
 VAR_8 = FUNC_2(VAR_7);

 VAR_7->hdr.dst = FUNC_0(VAR_9, VAR_1);
 VAR_7->hdr.src = FUNC_0(VAR_4,
     VAR_0);
 VAR_7->hdr.payload_size = sizeof(*VAR_7) + sizeof(*VAR_8) -
     sizeof(VAR_7->hdr);
 VAR_7->event_data.event = VAR_5 ? VAR_2 :
     VAR_3;
 VAR_8->peer_id = VAR_9;
 VAR_8->handle = VAR_6;

 return (FUNC_1((struct vmci_datagram *)VAR_7));
}
