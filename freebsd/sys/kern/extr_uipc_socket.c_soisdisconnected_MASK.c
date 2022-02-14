
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; int so_timeo; int so_snd; int so_rcv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct socket *VAR_4)
{

 FUNC_1(VAR_4);
 VAR_4->so_state &= ~(VAR_1|VAR_0|VAR_3);
 VAR_4->so_state |= VAR_2;

 if (!FUNC_3(VAR_4)) {
  FUNC_2(VAR_4);
  FUNC_0(&VAR_4->so_rcv);
  FUNC_6(VAR_4);
  FUNC_0(&VAR_4->so_snd);
  FUNC_4(&VAR_4->so_snd, FUNC_5(&VAR_4->so_snd));
  FUNC_7(VAR_4);
 } else
  FUNC_2(VAR_4);
 FUNC_8(&VAR_4->so_timeo);
}
