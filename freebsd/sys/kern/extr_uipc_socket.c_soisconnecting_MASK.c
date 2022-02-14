
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(struct socket *VAR_3)
{

 FUNC_0(VAR_3);
 VAR_3->so_state &= ~(VAR_0|VAR_2);
 VAR_3->so_state |= VAR_1;
 FUNC_1(VAR_3);
}
