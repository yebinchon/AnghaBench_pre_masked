
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_peercred; int * unp_conn; int * unp_vnode; } ;
struct thread {int dummy; } ;
struct socket {scalar_t__ so_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct socket*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct unpcb*) ;
 int FUNC_4 (struct unpcb*) ;
 int FUNC_5 (struct thread*,int *) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*) ;
 struct unpcb* FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct unpcb *VAR_8;
 int VAR_9;

 if (VAR_5->so_type != VAR_4 && VAR_5->so_type != VAR_3)
  return (VAR_2);

 VAR_8 = FUNC_8(VAR_5);
 FUNC_0(VAR_8 != ((void*)0), ("uipc_listen: unp == NULL"));

 FUNC_3(VAR_8);
 if (VAR_8->unp_vnode == ((void*)0)) {

  VAR_9 = VAR_8->unp_conn != ((void*)0) ? VAR_1 : VAR_0;
  FUNC_4(VAR_8);
  return (VAR_9);
 }

 FUNC_1(VAR_5);
 VAR_9 = FUNC_7(VAR_5);
 if (VAR_9 == 0) {
  FUNC_5(VAR_7, &VAR_8->unp_peercred);
  FUNC_6(VAR_5, VAR_6);
 }
 FUNC_2(VAR_5);
 FUNC_4(VAR_8);
 return (VAR_9);
}
