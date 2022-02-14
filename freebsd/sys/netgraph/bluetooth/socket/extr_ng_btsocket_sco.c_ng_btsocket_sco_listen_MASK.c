
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
typedef TYPE_1__* ng_btsocket_sco_pcb_p ;
typedef int bdaddr_t ;
struct TYPE_3__ {int pcb_mtx; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*) ;

int
FUNC_8(struct socket *VAR_4, int VAR_5, struct thread *VAR_6)
{
 ng_btsocket_sco_pcb_p VAR_7 = FUNC_5(VAR_4);
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 if (VAR_3 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_4);
 FUNC_3(&VAR_7->pcb_mtx);

 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8 != 0)
  goto out;






 FUNC_6(VAR_4, VAR_5);
out:
 FUNC_4(&VAR_7->pcb_mtx);
 FUNC_1(VAR_4);

 return (VAR_8);
}
