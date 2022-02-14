
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct unpcb* unp_conn; struct socket* unp_socket; } ;
struct socket {int so_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct unpcb*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*,struct unpcb*) ;
 int FUNC_3 (struct unpcb*) ;
 int FUNC_4 (struct unpcb*,struct unpcb*,int) ;
 scalar_t__ FUNC_5 (struct unpcb*) ;

__attribute__((used)) static void
FUNC_6(struct unpcb *VAR_1)
{
 struct socket *VAR_2 = VAR_1->unp_socket;
 struct unpcb *VAR_3;
 int VAR_4;
 FUNC_0(VAR_1);
 if (VAR_2)
  VAR_2->so_error = VAR_0;
 VAR_3 = VAR_1->unp_conn;
 if (VAR_3 == VAR_1) {
  FUNC_2(VAR_1, VAR_3);
 } else if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_3);
  FUNC_4(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_1, VAR_3);
  if (FUNC_5(VAR_3) == 0)
   FUNC_1(VAR_3);
 }
 if (FUNC_5(VAR_1) == 0)
  FUNC_1(VAR_1);
}
