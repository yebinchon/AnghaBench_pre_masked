
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i40e_rx_desc {int dummy; } i40e_rx_desc ;
typedef int uint64_t ;
struct rx_ring {int me; struct ixl_rx_queue* que; int rx_paddr; union i40e_rx_desc* rx_base; int tail; } ;
struct ixl_vsi {struct ixl_rx_queue* rx_queues; TYPE_1__* shared; } ;
struct ixl_rx_queue {struct ixl_vsi* vsi; struct rx_ring rxr; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int isc_nrxqsets; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct ixl_pf* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_4, caddr_t *VAR_5, uint64_t *VAR_6, int VAR_7, int VAR_8)
{
 struct ixl_pf *VAR_9 = FUNC_4(VAR_4);
 struct ixl_vsi *VAR_10 = &VAR_9->vsi;
 struct ixl_rx_queue *VAR_11;
 int VAR_12, VAR_13 = 0;
 if (!(VAR_10->rx_queues =
     (struct ixl_rx_queue *) FUNC_6(sizeof(struct ixl_rx_queue) *
     VAR_8, VAR_1, VAR_2 | VAR_3))) {
  FUNC_2(FUNC_3(VAR_4), "Unable to allocate RX ring memory\n");
  VAR_13 = VAR_0;
  goto fail;
 }

 for (VAR_12 = 0, VAR_11 = VAR_10->rx_queues; VAR_12 < VAR_8; VAR_12++, VAR_11++) {
  struct rx_ring *VAR_14 = &VAR_11->rxr;

  VAR_14->me = VAR_12;
  VAR_11->vsi = VAR_10;


  VAR_14->tail = FUNC_0(VAR_14->me);
  VAR_14->rx_base = (union i40e_rx_desc *)VAR_5[VAR_12 * VAR_7];
  VAR_14->rx_paddr = VAR_6[VAR_12 * VAR_7];
  VAR_14->que = VAR_11;
 }

 return (0);
fail:
 FUNC_5(VAR_4);
 return (VAR_13);
}
