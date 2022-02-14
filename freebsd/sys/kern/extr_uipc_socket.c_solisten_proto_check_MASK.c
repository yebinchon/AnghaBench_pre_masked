
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct socket *VAR_4)
{

 FUNC_0(VAR_4);

 if (VAR_4->so_state & (VAR_1 | VAR_2 |
     VAR_3))
  return (VAR_0);
 return (0);
}
