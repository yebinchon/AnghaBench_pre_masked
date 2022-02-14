
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oce_wq {size_t pkt_desc_tail; TYPE_1__* ring; int tag; struct oce_packet_desc* pckts; int parent; } ;
struct oce_packet_desc {struct mbuf* mbuf; int map; scalar_t__ nsegs; } ;
struct mbuf {int dummy; } ;
struct TYPE_7__ {TYPE_2__* ifp; } ;
struct TYPE_6__ {int if_drv_flags; } ;
struct TYPE_5__ {int num_used; int num_items; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*,int) ;
 int FUNC_1 (int*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (TYPE_3__*,struct oce_wq*) ;

__attribute__((used)) static void
FUNC_6(struct oce_wq *VAR_3)
{
 struct oce_packet_desc *VAR_4;
 POCE_SOFTC VAR_5 = (POCE_SOFTC) VAR_3->parent;
 struct mbuf *VAR_6;

 VAR_4 = &VAR_3->pckts[VAR_3->pkt_desc_tail];
 FUNC_0(&VAR_3->pkt_desc_tail,
        (VAR_3->pkt_desc_tail + 1) % VAR_2);
 FUNC_1(&VAR_3->ring->num_used, VAR_4->nsegs + 1);
 FUNC_2(VAR_3->tag, VAR_4->map, VAR_0);
 FUNC_3(VAR_3->tag, VAR_4->map);

 VAR_6 = VAR_4->mbuf;
 FUNC_4(VAR_6);
 VAR_4->mbuf = ((void*)0);


 if (VAR_5->ifp->if_drv_flags & VAR_1) {
  if (VAR_3->ring->num_used < (VAR_3->ring->num_items / 2)) {
   VAR_5->ifp->if_drv_flags &= ~(VAR_1);
   FUNC_5(VAR_5, VAR_3);
  }
 }
}
