
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct tx_ring {int me; int tx_paddr; struct e1000_tx_desc* tx_base; int * tx_rsq; struct adapter* adapter; } ;
struct em_tx_queue {int me; struct adapter* adapter; struct tx_ring txr; } ;
struct e1000_tx_desc {int dummy; } ;
struct adapter {int tx_num_queues; struct em_tx_queue* tx_queues; TYPE_1__* shared; } ;
typedef int qidx_t ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_7, caddr_t *VAR_8, uint64_t *VAR_9, int VAR_10, int VAR_11)
{
 struct adapter *VAR_12 = FUNC_4(VAR_7);
 if_softc_ctx_t VAR_13 = VAR_12->shared;
 int VAR_14 = VAR_0;
 struct em_tx_queue *VAR_15;
 int VAR_16, VAR_17;

 FUNC_0(VAR_12->tx_num_queues > 0);
 FUNC_0(VAR_12->tx_num_queues == VAR_11);


 if (!(VAR_12->tx_queues =
     (struct em_tx_queue *) FUNC_5(sizeof(struct em_tx_queue) *
     VAR_12->tx_num_queues, VAR_2, VAR_3 | VAR_4))) {
  FUNC_1(FUNC_3(VAR_7), "Unable to allocate queue memory\n");
  return(VAR_1);
 }

 for (VAR_16 = 0, VAR_15 = VAR_12->tx_queues; VAR_16 < VAR_12->tx_num_queues; VAR_16++, VAR_15++) {


  struct tx_ring *VAR_18 = &VAR_15->txr;
  VAR_18->adapter = VAR_15->adapter = VAR_12;
  VAR_15->me = VAR_18->me = VAR_16;


  if (!(VAR_18->tx_rsq = (qidx_t *) FUNC_5(sizeof(qidx_t) * VAR_13->isc_ntxd[0], VAR_2, VAR_3 | VAR_4))) {
   FUNC_1(FUNC_3(VAR_7), "failed to allocate rs_idxs memory\n");
   VAR_14 = VAR_1;
   goto fail;
  }
  for (VAR_17 = 0; VAR_17 < VAR_13->isc_ntxd[0]; VAR_17++)
   VAR_18->tx_rsq[VAR_17] = VAR_5;

  VAR_18->tx_base = (struct e1000_tx_desc *)VAR_8[VAR_16*VAR_10];
  VAR_18->tx_paddr = VAR_9[VAR_16*VAR_10];
 }

 if (VAR_6)
  FUNC_1(FUNC_3(VAR_7),
      "allocated for %d tx_queues\n", VAR_12->tx_num_queues);
 return (0);
fail:
 FUNC_2(VAR_7);
 return (VAR_14);
}
