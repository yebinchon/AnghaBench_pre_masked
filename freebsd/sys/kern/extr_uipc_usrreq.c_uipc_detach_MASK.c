
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct unpcb {int unp_flags; TYPE_1__* unp_socket; struct sockaddr_un* unp_addr; int unp_refs; struct unpcb* unp_conn; struct vnode* unp_vnode; scalar_t__ unp_gencnt; } ;
struct socket {int dummy; } ;
struct sockaddr_un {int dummy; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {int * so_pcb; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct unpcb* FUNC_2 (int *) ;
 int FUNC_3 (struct unpcb*,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (struct unpcb*) ;
 int FUNC_8 (struct unpcb*) ;
 int FUNC_9 (struct unpcb*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct vnode*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct sockaddr_un*,int ) ;
 int FUNC_15 (struct mtx*) ;
 struct mtx* FUNC_16 (int ,struct vnode*) ;
 int FUNC_17 (struct mtx*) ;
 int VAR_2 ;
 struct unpcb* FUNC_18 (struct socket*) ;
 int FUNC_19 (int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_20 (struct unpcb*,struct unpcb*) ;
 int FUNC_21 (struct unpcb*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_22 (struct unpcb*) ;
 int FUNC_23 (struct unpcb*,struct unpcb*,int) ;
 scalar_t__ FUNC_24 (struct unpcb*) ;
 int VAR_8 ;
 int FUNC_25 (struct vnode*) ;

__attribute__((used)) static void
FUNC_26(struct socket *VAR_9)
{
 struct unpcb *VAR_10, *VAR_11;
 struct mtx *VAR_12;
 struct sockaddr_un *VAR_13;
 struct vnode *VAR_14;
 int VAR_15, VAR_16;

 VAR_10 = FUNC_18(VAR_9);
 FUNC_0(VAR_10 != ((void*)0), ("uipc_detach: unp == NULL"));

 VAR_14 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_16 = 0;

 FUNC_5();
 FUNC_3(VAR_10, VAR_7);
 VAR_10->unp_gencnt = ++VAR_6;
 --VAR_4;
 FUNC_6();

 FUNC_9(VAR_10);
 restart:
 if ((VAR_14 = VAR_10->unp_vnode) != ((void*)0)) {
  VAR_12 = FUNC_16(VAR_2, VAR_14);
  FUNC_15(VAR_12);
 }
 FUNC_7(VAR_10);
 if (VAR_10->unp_vnode != VAR_14 &&
  VAR_10->unp_vnode != ((void*)0)) {
  if (VAR_12)
   FUNC_17(VAR_12);
  FUNC_8(VAR_10);
  goto restart;
 }
 if ((VAR_10->unp_flags & VAR_1) != 0) {
  goto teardown;
 }
 if ((VAR_14 = VAR_10->unp_vnode) != ((void*)0)) {
  FUNC_12(VAR_14);
  VAR_10->unp_vnode = ((void*)0);
 }
 if (FUNC_13(VAR_10 == VAR_10->unp_conn)) {
  FUNC_20(VAR_10, VAR_10);
  VAR_11 = ((void*)0);
  goto connect_self;
 }
 if ((VAR_11 = VAR_10->unp_conn) != ((void*)0)) {
  FUNC_23(VAR_10, VAR_11, VAR_15);
  if (VAR_15)
   VAR_11 = ((void*)0);
 }
 FUNC_22(VAR_10);
 if (VAR_11 != ((void*)0)) {
  FUNC_22(VAR_11);
  FUNC_20(VAR_10, VAR_11);
  if (FUNC_24(VAR_11) == 0)
   FUNC_8(VAR_11);
 }
 connect_self:
 FUNC_8(VAR_10);
 FUNC_10();
 while (!FUNC_1(&VAR_10->unp_refs)) {
  struct unpcb *VAR_17 = FUNC_2(&VAR_10->unp_refs);

  FUNC_22(VAR_17);
  FUNC_11();

  FUNC_4(VAR_17 != VAR_10);
  FUNC_9(VAR_17);
  FUNC_21(VAR_17);
  FUNC_10();
 }

 FUNC_11();
 FUNC_7(VAR_10);
 VAR_15 = FUNC_24(VAR_10);
 FUNC_4(VAR_15 == 0);
 VAR_16 = VAR_8;
teardown:
 VAR_10->unp_socket->so_pcb = ((void*)0);
 VAR_13 = VAR_10->unp_addr;
 VAR_10->unp_addr = ((void*)0);
 VAR_10->unp_socket = ((void*)0);
 VAR_15 = FUNC_24(VAR_10);
 if (VAR_13 != ((void*)0))
  FUNC_14(VAR_13, VAR_0);
 if (!VAR_15)
  FUNC_8(VAR_10);
 if (VAR_14) {
  FUNC_17(VAR_12);
  FUNC_25(VAR_14);
 }
 if (VAR_16)
  FUNC_19(VAR_3, &VAR_5, -1);
}
