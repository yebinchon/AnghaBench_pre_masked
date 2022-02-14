
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct socket {int dummy; } ;
typedef TYPE_1__* ng_btsocket_sco_pcb_p ;
struct TYPE_6__ {scalar_t__ state; int flags; int pcb_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;

int
FUNC_8(struct socket *VAR_7)
{
 ng_btsocket_sco_pcb_p VAR_8 = FUNC_5(VAR_7);

 if (VAR_8 == ((void*)0))
  return (VAR_1);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_8->pcb_mtx);

 if (VAR_8->state == VAR_3) {
  FUNC_1(&VAR_8->pcb_mtx);

  return (VAR_0);
 }

 if (VAR_8->flags & VAR_5)
  FUNC_4(VAR_8);

 if (VAR_8->state == VAR_4) {
  FUNC_2(VAR_8);

  VAR_8->state = VAR_3;
  FUNC_7(VAR_7);

  FUNC_3(VAR_8);
 } else {
  VAR_8->state = VAR_2;
  FUNC_6(VAR_7);
 }

 FUNC_1(&VAR_8->pcb_mtx);

 return (0);
}
