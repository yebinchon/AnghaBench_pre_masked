
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct unpcb* unp_conn; } ;
struct socket {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 struct unpcb* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct unpcb*,struct unpcb*) ;
 int FUNC_7 (struct unpcb*) ;
 int FUNC_8 (struct unpcb*,struct unpcb*,int) ;
 scalar_t__ FUNC_9 (struct unpcb*) ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_0)
{
 struct unpcb *VAR_1, *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_5(VAR_0);
 FUNC_0(VAR_1 != ((void*)0), ("uipc_disconnect: unp == NULL"));

 FUNC_1(VAR_1);
 if ((VAR_2 = VAR_1->unp_conn) == ((void*)0)) {
  FUNC_2(VAR_1);
  return (0);
 }
 if (FUNC_4(VAR_1 != VAR_2)) {
  FUNC_8(VAR_1, VAR_2, VAR_3);
  if (FUNC_3(VAR_3)) {
   FUNC_2(VAR_1);
   return (0);
  }
  FUNC_7(VAR_2);
 }
 FUNC_7(VAR_1);
 FUNC_6(VAR_1, VAR_2);
 if (FUNC_9(VAR_1) == 0)
  FUNC_2(VAR_1);
 if ((VAR_1 != VAR_2) && FUNC_9(VAR_2) == 0)
  FUNC_2(VAR_2);
 return (0);
}
