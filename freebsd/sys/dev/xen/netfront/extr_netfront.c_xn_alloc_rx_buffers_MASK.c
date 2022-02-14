
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netif_rx_request {unsigned short id; scalar_t__ gref; } ;
struct TYPE_5__ {scalar_t__ req_prod_pvt; scalar_t__ rsp_cons; } ;
struct netfront_rxq {int xen_intr_handle; TYPE_2__ ring; int rx_refill; TYPE_1__* info; scalar_t__* grant_ref; int gref_head; struct mbuf** mbufs; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ grant_ref_t ;
struct TYPE_4__ {scalar_t__ carrier; int xbdev; } ;
typedef scalar_t__ RING_IDX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct netif_rx_request* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (struct netfront_rxq*) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ,struct netfront_rxq*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int ,unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct mbuf*,int ) ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct mbuf* FUNC_14 (struct netfront_rxq*) ;
 int VAR_5 ;
 unsigned short FUNC_15 (scalar_t__) ;

__attribute__((used)) static void
FUNC_16(struct netfront_rxq *VAR_6)
{
 RING_IDX VAR_7;
 int VAR_8;

 FUNC_3(VAR_6);

 if (FUNC_4(VAR_6->info->carrier == 0))
  return;

 for (VAR_7 = VAR_6->ring.req_prod_pvt;
      VAR_7 - VAR_6->ring.rsp_cons < VAR_1;
      VAR_7++) {
  struct mbuf *VAR_9;
  unsigned short VAR_10;
  grant_ref_t VAR_11;
  struct netif_rx_request *VAR_12;
  unsigned long VAR_13;

  VAR_9 = FUNC_14(VAR_6);
  if (VAR_9 == ((void*)0))
   break;

  VAR_10 = FUNC_15(VAR_7);

  FUNC_0(VAR_6->mbufs[VAR_10] == ((void*)0), ("non-NULL xn_rx_chain"));
  VAR_6->mbufs[VAR_10] = VAR_9;

  VAR_11 = FUNC_7(&VAR_6->gref_head);
  FUNC_0(VAR_11 != VAR_0,
      ("reserved grant references exhuasted"));
  VAR_6->grant_ref[VAR_10] = VAR_11;

  VAR_13 = FUNC_5(FUNC_10(FUNC_9(VAR_9, VAR_4)));
  VAR_12 = FUNC_1(&VAR_6->ring, VAR_7);

  FUNC_8(VAR_11,
      FUNC_13(VAR_6->info->xbdev), VAR_13, 0);
  VAR_12->id = VAR_10;
  VAR_12->gref = VAR_11;
 }

 VAR_6->ring.req_prod_pvt = VAR_7;


 if (VAR_7 - VAR_6->ring.rsp_cons < VAR_2) {
  FUNC_6(&VAR_6->rx_refill, VAR_3/10,
      VAR_5, VAR_6);
  return;
 }

 FUNC_11();

 FUNC_2(&VAR_6->ring, VAR_8);
 if (VAR_8)
  FUNC_12(VAR_6->xen_intr_handle);
}
