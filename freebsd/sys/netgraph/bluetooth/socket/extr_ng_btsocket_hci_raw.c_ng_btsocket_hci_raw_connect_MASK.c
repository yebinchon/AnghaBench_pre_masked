
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sockaddr_hci*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;
 TYPE_1__* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_6, struct sockaddr *VAR_7,
  struct thread *VAR_8)
{
 ng_btsocket_hci_raw_pcb_p VAR_9 = FUNC_3(VAR_6);
 struct sockaddr_hci *VAR_10 = (struct sockaddr_hci *) VAR_7;

 if (VAR_9 == ((void*)0))
  return (VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_4);

 if (VAR_10 == ((void*)0))
  return (VAR_4);
 if (VAR_10->hci_family != VAR_0)
  return (VAR_2);
 if (VAR_10->hci_len != sizeof(*VAR_10))
  return (VAR_4);
 if (VAR_10->hci_node[0] == 0)
  return (VAR_3);

 FUNC_1(&VAR_9->pcb_mtx);

 if (FUNC_0(VAR_10, &VAR_9->addr, sizeof(VAR_9->addr)) != 0) {
  FUNC_2(&VAR_9->pcb_mtx);
  return (VAR_1);
 }

 FUNC_4(VAR_6);

 FUNC_2(&VAR_9->pcb_mtx);

 return (0);
}
