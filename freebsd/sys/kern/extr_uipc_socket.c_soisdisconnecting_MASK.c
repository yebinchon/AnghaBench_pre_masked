
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_timeo; int so_snd; int so_rcv; int so_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct socket *VAR_2)
{

 FUNC_1(VAR_2);
 VAR_2->so_state &= ~VAR_0;
 VAR_2->so_state |= VAR_1;

 if (!FUNC_3(VAR_2)) {
  FUNC_0(&VAR_2->so_rcv);
  FUNC_4(VAR_2);
  FUNC_0(&VAR_2->so_snd);
  FUNC_5(VAR_2);
 }
 FUNC_2(VAR_2);
 FUNC_6(&VAR_2->so_timeo);
}
