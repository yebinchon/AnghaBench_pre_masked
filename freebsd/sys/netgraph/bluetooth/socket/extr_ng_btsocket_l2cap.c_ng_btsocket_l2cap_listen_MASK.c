
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
typedef TYPE_1__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_3__ {scalar_t__ psm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 int * VAR_2 ;
 TYPE_1__* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_3, int VAR_4, struct thread *VAR_5)
{
 ng_btsocket_l2cap_pcb_p VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 FUNC_0(VAR_3);
 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 != 0)
  goto out;
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_1;
  goto out;
 }
 if (VAR_2 == ((void*)0)) {
  VAR_7 = VAR_1;
  goto out;
 }
 if (VAR_6->psm == 0) {
  VAR_7 = VAR_0;
  goto out;
 }
 FUNC_3(VAR_3, VAR_4);
out:
 FUNC_1(VAR_3);
 return (VAR_7);
}
