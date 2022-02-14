
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_queue_pair_alloc_msg {int flags; int num_ppns; int consume_size; int produce_size; int peer; int handle; TYPE_1__ hdr; } ;
struct vmci_datagram {int dummy; } ;
struct TYPE_4__ {int flags; int consume_size; int produce_size; int peer; int handle; } ;
struct qp_guest_endpoint {int num_ppns; int ppn_set; TYPE_2__ qp; } ;
typedef int PPN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vmci_queue_pair_alloc_msg* FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct vmci_queue_pair_alloc_msg*,size_t) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct vmci_datagram*) ;

__attribute__((used)) static int
FUNC_6(const struct qp_guest_endpoint *VAR_9)
{
 struct vmci_queue_pair_alloc_msg *VAR_10;
 size_t VAR_11;
 int VAR_12;

 if (!VAR_9 || VAR_9->num_ppns <= 2)
  return (VAR_2);

 FUNC_0(!(VAR_9->qp.flags & VAR_6));

 VAR_11 = sizeof(*VAR_10) + (size_t)VAR_9->num_ppns * sizeof(PPN);
 VAR_10 = FUNC_2(VAR_11, VAR_5);
 if (!VAR_10)
  return (VAR_3);

 VAR_10->hdr.dst = FUNC_1(VAR_4,
     VAR_7);
 VAR_10->hdr.src = VAR_0;
 VAR_10->hdr.payload_size = VAR_11 - VAR_1;
 VAR_10->handle = VAR_9->qp.handle;
 VAR_10->peer = VAR_9->qp.peer;
 VAR_10->flags = VAR_9->qp.flags;
 VAR_10->produce_size = VAR_9->qp.produce_size;
 VAR_10->consume_size = VAR_9->qp.consume_size;
 VAR_10->num_ppns = VAR_9->num_ppns;
 VAR_12 = FUNC_4((uint8_t *)VAR_10 +
     sizeof(*VAR_10), &VAR_9->ppn_set);
 if (VAR_12 == VAR_8)
  VAR_12 = FUNC_5((struct vmci_datagram *)VAR_10);
 FUNC_3(VAR_10, VAR_11);

 return (VAR_12);
}
