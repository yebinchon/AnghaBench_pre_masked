
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_hci {scalar_t__ hci_family; int hci_len; scalar_t__* hci_node; } ;
struct sockaddr {int dummy; } ;
typedef TYPE_1__* ng_btsocket_hci_raw_pcb_p ;
struct TYPE_3__ {int pcb_mtx; int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_hci*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_4, struct sockaddr *VAR_5,
  struct thread *VAR_6)
{
 ng_btsocket_hci_raw_pcb_p VAR_7 = FUNC_3(VAR_4);
 struct sockaddr_hci *VAR_8 = (struct sockaddr_hci *) VAR_5;

 if (VAR_7 == ((void*)0))
  return (VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_2);

 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (VAR_8->hci_family != VAR_0)
  return (VAR_1);
 if (VAR_8->hci_len != sizeof(*VAR_8))
  return (VAR_2);
 if (VAR_8->hci_node[0] == 0)
  return (VAR_2);

 FUNC_1(&VAR_7->pcb_mtx);
 FUNC_0(VAR_8, &VAR_7->addr, sizeof(VAR_7->addr));
 FUNC_2(&VAR_7->pcb_mtx);

 return (0);
}
