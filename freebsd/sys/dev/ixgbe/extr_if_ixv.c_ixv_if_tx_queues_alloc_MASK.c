
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int uint64_t ;
struct tx_ring {int me; scalar_t__ total_packets; scalar_t__ bytes; int tx_paddr; union ixgbe_adv_tx_desc* tx_base; int tail; int * tx_rsq; struct adapter* adapter; } ;
struct ix_tx_queue {struct adapter* adapter; struct tx_ring txr; } ;
struct adapter {int num_tx_queues; struct ix_tx_queue* tx_queues; TYPE_1__* shared; } ;
typedef int qidx_t ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_5, caddr_t *VAR_6, uint64_t *VAR_7,
                       int VAR_8, int VAR_9)
{
 struct adapter *VAR_10 = FUNC_4(VAR_5);
 if_softc_ctx_t VAR_11 = VAR_10->shared;
 struct ix_tx_queue *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_1(VAR_10->num_tx_queues == VAR_9);
 FUNC_1(VAR_8 == 1);


 VAR_10->tx_queues =
     (struct ix_tx_queue *)FUNC_6(sizeof(struct ix_tx_queue) * VAR_9,
                                  VAR_1, VAR_2 | VAR_3);
 if (!VAR_10->tx_queues) {
  FUNC_2(FUNC_3(VAR_5),
      "Unable to allocate TX ring memory\n");
  return (VAR_0);
 }

 for (VAR_13 = 0, VAR_12 = VAR_10->tx_queues; VAR_13 < VAR_9; VAR_13++, VAR_12++) {
  struct tx_ring *VAR_16 = &VAR_12->txr;

  VAR_16->me = VAR_13;
  VAR_16->adapter = VAR_12->adapter = VAR_10;


  if (!(VAR_16->tx_rsq = (qidx_t *)FUNC_6(sizeof(qidx_t) * VAR_11->isc_ntxd[0], VAR_1, VAR_2 | VAR_3))) {
   VAR_15 = VAR_0;
   goto fail;
  }
  for (VAR_14 = 0; VAR_14 < VAR_11->isc_ntxd[0]; VAR_14++)
   VAR_16->tx_rsq[VAR_14] = VAR_4;

  VAR_16->tail = FUNC_0(VAR_16->me);
  VAR_16->tx_base = (union ixgbe_adv_tx_desc *)VAR_6[VAR_13*VAR_8];
  VAR_16->tx_paddr = VAR_7[VAR_13*VAR_8];

  VAR_16->bytes = 0;
  VAR_16->total_packets = 0;

 }

 FUNC_2(FUNC_3(VAR_5), "allocated for %d queues\n",
     VAR_10->num_tx_queues);

 return (0);

 fail:
 FUNC_5(VAR_5);

 return (VAR_15);
}
