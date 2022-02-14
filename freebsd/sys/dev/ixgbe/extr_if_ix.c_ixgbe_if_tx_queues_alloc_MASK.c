
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int uint64_t ;
struct tx_ring {int atr_sample; scalar_t__ total_packets; scalar_t__ bytes; int tx_paddr; union ixgbe_adv_tx_desc* tx_base; int me; int tail; int * tx_rsq; struct adapter* adapter; } ;
struct ix_tx_queue {struct adapter* adapter; struct tx_ring txr; } ;
struct adapter {int num_tx_queues; int feat_en; int pool; int iov_mode; struct ix_tx_queue* tx_queues; TYPE_1__* shared; } ;
typedef int qidx_t ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_7, caddr_t *VAR_8, uint64_t *VAR_9,
                         int VAR_10, int VAR_11)
{
 struct adapter *VAR_12 = FUNC_4(VAR_7);
 if_softc_ctx_t VAR_13 = VAR_12->shared;
 struct ix_tx_queue *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_1(VAR_12->num_tx_queues > 0);
 FUNC_1(VAR_12->num_tx_queues == VAR_11);
 FUNC_1(VAR_10 == 1);


 VAR_12->tx_queues =
     (struct ix_tx_queue *)FUNC_7(sizeof(struct ix_tx_queue) * VAR_11,
                                  VAR_2, VAR_3 | VAR_4);
 if (!VAR_12->tx_queues) {
  FUNC_2(FUNC_3(VAR_7),
      "Unable to allocate TX ring memory\n");
  return (VAR_0);
 }

 for (VAR_15 = 0, VAR_14 = VAR_12->tx_queues; VAR_15 < VAR_11; VAR_15++, VAR_14++) {
  struct tx_ring *VAR_18 = &VAR_14->txr;


  VAR_18->me = FUNC_6(VAR_12->iov_mode, VAR_12->pool,
      VAR_15);

  VAR_18->adapter = VAR_14->adapter = VAR_12;


  VAR_18->tx_rsq = (qidx_t *)FUNC_7(sizeof(qidx_t) * VAR_13->isc_ntxd[0], VAR_2, VAR_3 | VAR_4);
  if (VAR_18->tx_rsq == ((void*)0)) {
   VAR_17 = VAR_0;
   goto fail;
  }
  for (VAR_16 = 0; VAR_16 < VAR_13->isc_ntxd[0]; VAR_16++)
   VAR_18->tx_rsq[VAR_16] = VAR_5;

  VAR_18->tail = FUNC_0(VAR_18->me);
  VAR_18->tx_base = (union ixgbe_adv_tx_desc *)VAR_8[VAR_15];
  VAR_18->tx_paddr = VAR_9[VAR_15];

  VAR_18->bytes = 0;
  VAR_18->total_packets = 0;


  if (VAR_12->feat_en & VAR_1)
   VAR_18->atr_sample = VAR_6;

 }

 FUNC_2(FUNC_3(VAR_7), "allocated for %d queues\n",
     VAR_12->num_tx_queues);

 return (0);

fail:
 FUNC_5(VAR_7);

 return (VAR_17);
}
