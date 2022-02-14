
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;


 int FUNC_0 (struct socket*,int *) ;

void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct socket *VAR_2;

 VAR_2 = VAR_0;
 FUNC_0(VAR_2, &VAR_2->so_rcv);
}
