
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct netfront_rxq* sring; } ;
struct netfront_rxq {int id; TYPE_1__ ring; int gref_head; int rx_refill; void* ring_ref; void** grant_ref; int ** mbufs; int name; int lock; struct netfront_info* info; } ;
struct netfront_info {struct netfront_rxq* rxq; } ;
typedef int netif_rx_sring_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct netfront_rxq*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct netfront_rxq*) ;
 int FUNC_6 (struct netfront_rxq*,int ) ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 (int ) ;
 struct netfront_rxq* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,void**) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_9, struct netfront_info *VAR_10,
    unsigned long VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14;
 netif_rx_sring_t *VAR_15;
 struct netfront_rxq *VAR_16;

 VAR_10->rxq = FUNC_9(sizeof(struct netfront_rxq) * VAR_11,
     VAR_3, VAR_4|VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_16 = &VAR_10->rxq[VAR_12];

  VAR_16->id = VAR_12;
  VAR_16->info = VAR_10;
  VAR_16->ring_ref = VAR_1;
  VAR_16->ring.sring = ((void*)0);
  FUNC_11(VAR_16->name, VAR_8, "xnrx_%u", VAR_12);
  FUNC_10(&VAR_16->lock, VAR_16->name, "netfront receive lock",
      VAR_2);

  for (VAR_13 = 0; VAR_13 <= VAR_6; VAR_13++) {
   VAR_16->mbufs[VAR_13] = ((void*)0);
   VAR_16->grant_ref[VAR_13] = VAR_1;
  }



  if (FUNC_7(VAR_6,
      &VAR_16->gref_head) != 0) {
   FUNC_4(VAR_9, "allocating rx gref");
   VAR_14 = VAR_0;
   goto fail;
  }

  VAR_15 = (netif_rx_sring_t *)FUNC_9(VAR_7, VAR_3,
      VAR_4|VAR_5);
  FUNC_1(VAR_15);
  FUNC_0(&VAR_16->ring, VAR_15, VAR_7);

  VAR_14 = FUNC_13(VAR_9, FUNC_12(VAR_15),
      &VAR_16->ring_ref);
  if (VAR_14 != 0) {
   FUNC_4(VAR_9, "granting rx ring page");
   goto fail_grant_ring;
  }

  FUNC_2(&VAR_16->rx_refill, 1);
 }

 return (0);

fail_grant_ring:
 FUNC_8(VAR_16->gref_head);
 FUNC_6(VAR_16->ring.sring, VAR_3);
fail:
 for (; VAR_12 >= 0; VAR_12--) {
  FUNC_5(&VAR_10->rxq[VAR_12]);
  FUNC_3(&VAR_10->rxq[VAR_12]);
 }

 FUNC_6(VAR_10->rxq, VAR_3);
 return (VAR_14);
}
