
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct unpcb* unp_conn; } ;
struct socket {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct unpcb*) ;
 struct unpcb* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct unpcb*) ;
 int FUNC_6 (struct unpcb*) ;

__attribute__((used)) static void
FUNC_7(struct socket *VAR_0)
{
 struct unpcb *VAR_1, *VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_0(VAR_1 != ((void*)0), ("uipc_abort: unp == NULL"));
 FUNC_3(VAR_1);

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->unp_conn;
 if (VAR_2 != ((void*)0)) {
  FUNC_6(VAR_2);
  FUNC_2(VAR_1);
  FUNC_5(VAR_2);
 } else
  FUNC_2(VAR_1);
}
