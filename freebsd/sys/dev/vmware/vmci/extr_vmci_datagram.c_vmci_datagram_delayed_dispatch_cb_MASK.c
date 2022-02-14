
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ payload_size; } ;
struct vmci_delayed_datagram_info {TYPE_2__ msg; TYPE_1__* entry; } ;
struct TYPE_3__ {int resource; int client_data; int (* recv_cb ) (int ,TYPE_2__*) ;} ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (struct vmci_delayed_datagram_info*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct vmci_delayed_datagram_info *VAR_1;

 VAR_1 = (struct vmci_delayed_datagram_info *)VAR_0;

 FUNC_0(VAR_0);

 VAR_1->entry->recv_cb(VAR_1->entry->client_data, &VAR_1->msg);

 FUNC_3(&VAR_1->entry->resource);

 FUNC_2(VAR_1, sizeof(*VAR_1) +
     (size_t)VAR_1->msg.payload_size);
}
