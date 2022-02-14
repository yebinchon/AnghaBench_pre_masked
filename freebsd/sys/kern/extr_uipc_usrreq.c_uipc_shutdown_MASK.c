
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;
struct socket {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct socket*) ;
 struct unpcb* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct unpcb*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_0)
{
 struct unpcb *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_0(VAR_1 != ((void*)0), ("uipc_shutdown: unp == NULL"));

 FUNC_1(VAR_1);
 FUNC_3(VAR_0);
 FUNC_5(VAR_1);
 FUNC_2(VAR_1);
 return (0);
}
