
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct socket* unp_socket; struct unpcb* unp_conn; } ;
struct socket {scalar_t__ so_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct unpcb*) ;
 int FUNC_1 (struct socket*) ;

__attribute__((used)) static void
FUNC_2(struct unpcb *VAR_2)
{
 struct unpcb *VAR_3;
 struct socket *VAR_4;

 FUNC_0(VAR_2);

 VAR_3 = VAR_2->unp_conn;
 if ((VAR_2->unp_socket->so_type == VAR_1 ||
     (VAR_2->unp_socket->so_type == VAR_0)) && VAR_3 != ((void*)0)) {
  VAR_4 = VAR_3->unp_socket;
  if (VAR_4 != ((void*)0))
   FUNC_1(VAR_4);
 }
}
