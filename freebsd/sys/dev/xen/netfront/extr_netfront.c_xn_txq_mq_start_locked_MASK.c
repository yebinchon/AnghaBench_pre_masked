
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {int full; int ring; int xen_intr_handle; struct buf_ring* br; struct netfront_info* info; } ;
struct netfront_info {struct ifnet* xn_ifp; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct buf_ring {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct netfront_txq*) ;
 int FUNC_3 (struct ifnet*,struct buf_ring*) ;
 int FUNC_4 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 struct mbuf* FUNC_5 (struct ifnet*,struct buf_ring*) ;
 int FUNC_6 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_7 (struct netfront_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct netfront_txq*,struct mbuf*) ;
 int FUNC_10 (struct netfront_txq*) ;

__attribute__((used)) static int
FUNC_11(struct netfront_txq *VAR_1, struct mbuf *VAR_2)
{
 struct netfront_info *VAR_3;
 struct ifnet *VAR_4;
 struct buf_ring *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = VAR_1->info;
 VAR_5 = VAR_1->br;
 VAR_4 = VAR_3->xn_ifp;
 VAR_6 = 0;

 FUNC_2(VAR_1);

 if ((VAR_4->if_drv_flags & VAR_0) == 0 ||
     !FUNC_7(VAR_3)) {
  if (VAR_2 != ((void*)0))
   VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_2);
  return (VAR_6);
 }

 if (VAR_2 != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_2);
  if (VAR_6 != 0)
   return (VAR_6);
 }

 while ((VAR_2 = FUNC_5(VAR_4, VAR_5)) != ((void*)0)) {
  if (!FUNC_10(VAR_1)) {
   FUNC_6(VAR_4, VAR_5, VAR_2);
   break;
  }

  VAR_6 = FUNC_9(VAR_1, VAR_2);

  if (VAR_6 != 0) {
   FUNC_3(VAR_4, VAR_5);
   break;
  }

  FUNC_1(&VAR_1->ring, VAR_7);
  if (VAR_7)
   FUNC_8(VAR_1->xen_intr_handle);

  FUNC_3(VAR_4, VAR_5);
 }

 if (FUNC_0(&VAR_1->ring))
  VAR_1->full = 1;

 return (0);
}
