
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {struct netfront_txq* sring; } ;
struct netfront_txq {int id; TYPE_1__ ring; int gref_head; void* ring_ref; int tq; int br; int xen_intr_handle; int name; int defrtask; int lock; void** mbufs; void** grant_ref; struct netfront_info* info; } ;
struct netfront_info {struct netfront_txq* txq; } ;
typedef int netif_tx_sring_t ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,struct netfront_txq*) ;
 int VAR_12 ;
 int FUNC_3 (int,int ,int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct netfront_txq*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct netfront_txq*) ;
 int FUNC_9 (struct netfront_txq*,int ) ;
 scalar_t__ FUNC_10 (int,int *) ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (int ) ;
 struct netfront_txq* FUNC_13 (int,int ,int) ;
 int FUNC_14 (int *,int ,char*,int ) ;
 int FUNC_15 (int ,int ,char*,int) ;
 int FUNC_16 (int ,int,int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int,int ,char*,int ,int) ;
 int VAR_13 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int ,int *,int ,struct netfront_txq*,int,int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,void**) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_24(device_t VAR_16, struct netfront_info *VAR_17,
    unsigned long VAR_18)
{
 int VAR_19, VAR_20;
 int VAR_21;
 netif_tx_sring_t *VAR_22;
 struct netfront_txq *VAR_23;

 VAR_17->txq = FUNC_13(sizeof(struct netfront_txq) * VAR_18,
     VAR_6, VAR_7|VAR_8);

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_23 = &VAR_17->txq[VAR_19];

  VAR_23->id = VAR_19;
  VAR_23->info = VAR_17;

  VAR_23->ring_ref = VAR_1;
  VAR_23->ring.sring = ((void*)0);

  FUNC_15(VAR_23->name, VAR_12, "xntx_%u", VAR_19);

  FUNC_14(&VAR_23->lock, VAR_23->name, "netfront transmit lock",
      VAR_5);

  for (VAR_20 = 0; VAR_20 <= VAR_9; VAR_20++) {
   VAR_23->mbufs[VAR_20] = (void *) ((u_long) VAR_20+1);
   VAR_23->grant_ref[VAR_20] = VAR_1;
  }
  VAR_23->mbufs[VAR_9] = (void *)0;



  if (FUNC_10(VAR_9,
      &VAR_23->gref_head) != 0) {
   FUNC_7(VAR_16, "failed to allocate tx grant refs\n");
   VAR_21 = VAR_0;
   goto fail;
  }

  VAR_22 = (netif_tx_sring_t *)FUNC_13(VAR_10, VAR_6,
      VAR_7|VAR_8);
  FUNC_1(VAR_22);
  FUNC_0(&VAR_23->ring, VAR_22, VAR_10);

  VAR_21 = FUNC_23(VAR_16, FUNC_20(VAR_22),
      &VAR_23->ring_ref);
  if (VAR_21 != 0) {
   FUNC_7(VAR_16, "failed to grant tx ring\n");
   goto fail_grant_ring;
  }

  VAR_23->br = FUNC_3(VAR_9, VAR_6,
      VAR_7, &VAR_23->lock);
  FUNC_2(&VAR_23->defrtask, 0, VAR_15, VAR_23);

  VAR_23->tq = FUNC_16(VAR_23->name, VAR_7,
      VAR_13, &VAR_23->tq);

  VAR_21 = FUNC_19(&VAR_23->tq, 1, VAR_11,
      "%s txq %d", FUNC_6(VAR_16), VAR_23->id);
  if (VAR_21 != 0) {
   FUNC_7(VAR_16, "failed to start tx taskq %d\n",
       VAR_23->id);
   goto fail_start_thread;
  }

  VAR_21 = FUNC_21(VAR_16,
      FUNC_22(VAR_16), ((void*)0), VAR_14,
      &VAR_17->txq[VAR_19], VAR_4 | VAR_3 | VAR_2,
      &VAR_23->xen_intr_handle);

  if (VAR_21 != 0) {
   FUNC_7(VAR_16, "xen_intr_alloc_and_bind_local_port failed\n");
   goto fail_bind_port;
  }
 }

 return (0);

fail_bind_port:
 FUNC_17(VAR_23->tq);
fail_start_thread:
 FUNC_4(VAR_23->br, VAR_6);
 FUNC_18(VAR_23->tq);
 FUNC_11(VAR_23->ring_ref, ((void*)0));
fail_grant_ring:
 FUNC_12(VAR_23->gref_head);
 FUNC_9(VAR_23->ring.sring, VAR_6);
fail:
 for (; VAR_19 >= 0; VAR_19--) {
  FUNC_8(&VAR_17->txq[VAR_19]);
  FUNC_5(&VAR_17->txq[VAR_19]);
 }

 FUNC_9(VAR_17->txq, VAR_6);
 return (VAR_21);
}
