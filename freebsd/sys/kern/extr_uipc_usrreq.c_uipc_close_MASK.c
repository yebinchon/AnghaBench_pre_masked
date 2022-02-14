
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct unpcb {struct unpcb* unp_conn; struct vnode* unp_vnode; } ;
struct socket {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct vnode*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mtx*) ;
 struct mtx* FUNC_6 (int ,struct vnode*) ;
 int FUNC_7 (struct mtx*) ;
 int VAR_0 ;
 struct unpcb* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct unpcb*,struct unpcb*) ;
 int FUNC_10 (struct unpcb*) ;
 int FUNC_11 (struct unpcb*,struct unpcb*,int) ;
 scalar_t__ FUNC_12 (struct unpcb*) ;
 int FUNC_13 (struct vnode*) ;

__attribute__((used)) static void
FUNC_14(struct socket *VAR_1)
{
 struct unpcb *VAR_2, *VAR_3;
 struct vnode *VAR_4 = ((void*)0);
 struct mtx *VAR_5;
 int VAR_6;
 VAR_2 = FUNC_8(VAR_1);
 FUNC_0(VAR_2 != ((void*)0), ("uipc_close: unp == NULL"));


 VAR_5 = ((void*)0);
 if ((VAR_4 = VAR_2->unp_vnode) != ((void*)0)) {
  VAR_5 = FUNC_6(VAR_0, VAR_4);
  FUNC_5(VAR_5);
 }
 FUNC_1(VAR_2);
 if (VAR_4 && VAR_2->unp_vnode == ((void*)0)) {
  FUNC_7(VAR_5);
  VAR_4 = ((void*)0);
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_4);
  VAR_2->unp_vnode = ((void*)0);
 }
 VAR_3 = VAR_2->unp_conn;
 FUNC_10(VAR_2);
 if (FUNC_4(VAR_2 == VAR_3)) {
  FUNC_9(VAR_2, VAR_3);
 } else if (VAR_3 != ((void*)0)) {
  FUNC_10(VAR_3);
  FUNC_11(VAR_2, VAR_3, VAR_6);
  FUNC_9(VAR_2, VAR_3);
  if (FUNC_12(VAR_3) == 0)
   FUNC_2(VAR_3);
 }
 if (FUNC_12(VAR_2) == 0)
  FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_7(VAR_5);
  FUNC_13(VAR_4);
 }
}
