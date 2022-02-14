
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int * unp_conn; } ;
struct thread {int dummy; } ;
struct socket {struct unpcb* so_pcb; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct unpcb*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct socket*,struct sockaddr*,struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2, struct sockaddr *VAR_3, struct thread *VAR_4)
{
 int VAR_5;
 struct unpcb *VAR_6;

 VAR_6 = VAR_2->so_pcb;
 if (VAR_6->unp_conn != ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return (VAR_5);
 FUNC_0(VAR_6);
 if (VAR_6->unp_conn == ((void*)0)) {
  FUNC_1(VAR_6);
  if (VAR_5 == 0)
   VAR_5 = VAR_1;
 }
 return (VAR_5);
}
