
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
typedef TYPE_1__* ng_btsocket_hci_raw_pcb_p ;
struct TYPE_3__ {int pcb_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_2)
{
 ng_btsocket_hci_raw_pcb_p VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_3->pcb_mtx);
 FUNC_3(VAR_2);
 FUNC_1(&VAR_3->pcb_mtx);

 return (0);
}
