
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int req_prod_pvt; } ;
struct netfront_rxq {TYPE_4__ ring; TYPE_1__* info; int * grant_ref; struct mbuf** mbufs; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {int id; int gref; } ;
typedef TYPE_2__ netif_rx_request_t ;
typedef int grant_ref_t ;
struct TYPE_5__ {int xbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct mbuf*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mbuf* FUNC_5 (struct netfront_rxq*,int) ;
 int FUNC_6 (struct netfront_rxq*,int) ;

__attribute__((used)) static void
FUNC_7(struct netfront_rxq *VAR_3)
{
 int VAR_4, VAR_5;
 grant_ref_t VAR_6;
 netif_rx_request_t *VAR_7;

 for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct mbuf *VAR_8;
  u_long VAR_9;

  if (VAR_3->mbufs[VAR_5] == ((void*)0))
   continue;

  VAR_8 = VAR_3->mbufs[VAR_4] = FUNC_5(VAR_3, VAR_5);
  VAR_6 = VAR_3->grant_ref[VAR_4] = FUNC_6(VAR_3, VAR_5);

  VAR_7 = FUNC_0(&VAR_3->ring, VAR_4);
  VAR_9 = FUNC_3(FUNC_2(VAR_8, VAR_2)) >> VAR_1;

  FUNC_1(VAR_6,
      FUNC_4(VAR_3->info->xbdev),
      VAR_9, 0);

  VAR_7->gref = VAR_6;
  VAR_7->id = VAR_4;

  VAR_4++;
 }

 VAR_3->ring.req_prod_pvt = VAR_4;
}
