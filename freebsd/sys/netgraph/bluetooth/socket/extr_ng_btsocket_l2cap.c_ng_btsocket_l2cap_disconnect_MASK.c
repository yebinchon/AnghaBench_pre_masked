
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct socket {int dummy; } ;
typedef TYPE_1__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_6__ {scalar_t__ state; int flags; int pcb_mtx; int token; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_5 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_6)
{
 ng_btsocket_l2cap_pcb_p VAR_7 = FUNC_5(VAR_6);
 int VAR_8 = 0;

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_7->pcb_mtx);

 if (VAR_7->state == VAR_3) {
  FUNC_1(&VAR_7->pcb_mtx);
  return (VAR_0);
 }

 if (VAR_7->state != VAR_2) {

  if (VAR_7->flags & VAR_4)
   FUNC_4(VAR_7);

  VAR_8 = FUNC_2(VAR_7->token, VAR_7);
  if (VAR_8 == 0) {
   VAR_7->state = VAR_3;
   FUNC_6(VAR_6);

   FUNC_3(VAR_7);
  }


 }

 FUNC_1(&VAR_7->pcb_mtx);

 return (VAR_8);
}
