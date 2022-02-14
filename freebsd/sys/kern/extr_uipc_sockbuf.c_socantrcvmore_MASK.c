
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct socket*) ;

void
FUNC_4(struct socket *VAR_1)
{

 FUNC_0(&VAR_1->so_rcv);
 FUNC_3(VAR_1);
 FUNC_2(FUNC_1(&VAR_1->so_rcv), VAR_0);
}
