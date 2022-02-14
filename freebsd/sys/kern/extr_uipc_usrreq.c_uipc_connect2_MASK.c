
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;
struct socket {struct unpcb* so_pcb; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct socket*,struct socket*,int ) ;
 int FUNC_4 (struct unpcb*,struct unpcb*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_1, struct socket *VAR_2)
{
 struct unpcb *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->so_pcb;
 FUNC_0(VAR_3 != ((void*)0), ("uipc_connect2: unp == NULL"));
 VAR_4 = VAR_2->so_pcb;
 FUNC_0(VAR_4 != ((void*)0), ("uipc_connect2: unp2 == NULL"));
 if (VAR_3 != VAR_4)
  FUNC_4(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3);
 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_3 != VAR_4)
  FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 return (VAR_5);
}
