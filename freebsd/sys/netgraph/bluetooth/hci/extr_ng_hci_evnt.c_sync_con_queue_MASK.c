
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ng_mesg {scalar_t__ data; } ;
typedef TYPE_1__* ng_hci_unit_p ;
typedef TYPE_2__* ng_hci_unit_con_p ;
struct TYPE_8__ {int completed; int con_handle; } ;
typedef TYPE_3__ ng_hci_sync_con_queue_ep ;
typedef int * hook_p ;
struct TYPE_7__ {scalar_t__ link_type; int con_handle; } ;
struct TYPE_6__ {int node; int * sco; int * acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(ng_hci_unit_p VAR_6, ng_hci_unit_con_p VAR_7, int VAR_8)
{
 hook_p VAR_9 = ((void*)0);
 struct ng_mesg *VAR_10 = ((void*)0);
 ng_hci_sync_con_queue_ep *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_9 = (VAR_7->link_type != VAR_5)? VAR_6->acl : VAR_6->sco;
 if (VAR_9 == ((void*)0) || FUNC_0(VAR_9))
  return (VAR_1);

 FUNC_1(VAR_10, VAR_3, VAR_4,
  sizeof(*VAR_11), VAR_2);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 VAR_11 = (ng_hci_sync_con_queue_ep *)(VAR_10->data);
 VAR_11->con_handle = VAR_7->con_handle;
 VAR_11->completed = VAR_8;

 FUNC_2(VAR_12, VAR_6->node, VAR_10, VAR_9, 0);

 return (VAR_12);
}
