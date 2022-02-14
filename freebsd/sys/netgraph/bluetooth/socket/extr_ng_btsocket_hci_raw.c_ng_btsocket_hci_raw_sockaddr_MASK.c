
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_hci {int hci_len; int hci_node; int hci_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_2__* ng_btsocket_hci_raw_pcb_p ;
struct TYPE_4__ {int hci_node; } ;
struct TYPE_5__ {int pcb_mtx; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_hci*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 TYPE_2__* FUNC_3 (struct socket*) ;
 struct sockaddr* FUNC_4 (struct sockaddr*,int ) ;
 int FUNC_5 (int ,int ,int) ;

int
FUNC_6(struct socket *VAR_5, struct sockaddr **VAR_6)
{
 ng_btsocket_hci_raw_pcb_p VAR_7 = FUNC_3(VAR_5);
 struct sockaddr_hci VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.hci_len = sizeof(VAR_8);
 VAR_8.hci_family = VAR_0;

 FUNC_1(&VAR_7->pcb_mtx);
 FUNC_5(VAR_8.hci_node, VAR_7->addr.hci_node, sizeof(VAR_8.hci_node));
 FUNC_2(&VAR_7->pcb_mtx);

 *VAR_6 = FUNC_4((struct sockaddr *) &VAR_8, VAR_3);

 return ((*VAR_6 == ((void*)0))? VAR_2 : 0);
}
