
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_rx_desc_extended {int dummy; } e1000_rx_desc_extended ;
typedef int uint64_t ;
struct rx_ring {int me; int rx_paddr; union e1000_rx_desc_extended* rx_base; struct em_rx_queue* que; struct adapter* adapter; } ;
struct em_rx_queue {int me; struct adapter* adapter; struct rx_ring rxr; } ;
struct adapter {int rx_num_queues; struct em_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_6, caddr_t *VAR_7, uint64_t *VAR_8, int VAR_9, int VAR_10)
{
 struct adapter *VAR_11 = FUNC_4(VAR_6);
 int VAR_12 = VAR_0;
 struct em_rx_queue *VAR_13;
 int VAR_14;

 FUNC_0(VAR_11->rx_num_queues > 0);
 FUNC_0(VAR_11->rx_num_queues == VAR_10);


 if (!(VAR_11->rx_queues =
     (struct em_rx_queue *) FUNC_5(sizeof(struct em_rx_queue) *
     VAR_11->rx_num_queues, VAR_2, VAR_3 | VAR_4))) {
  FUNC_1(FUNC_3(VAR_6), "Unable to allocate queue memory\n");
  VAR_12 = VAR_1;
  goto fail;
 }

 for (VAR_14 = 0, VAR_13 = VAR_11->rx_queues; VAR_14 < VAR_10; VAR_14++, VAR_13++) {

  struct rx_ring *VAR_15 = &VAR_13->rxr;
  VAR_15->adapter = VAR_13->adapter = VAR_11;
  VAR_15->que = VAR_13;
  VAR_13->me = VAR_15->me = VAR_14;


  VAR_15->rx_base = (union e1000_rx_desc_extended *)VAR_7[VAR_14*VAR_9];
  VAR_15->rx_paddr = VAR_8[VAR_14*VAR_9];
 }

 if (VAR_5)
  FUNC_1(FUNC_3(VAR_6),
      "allocated for %d rx_queues\n", VAR_11->rx_num_queues);

 return (0);
fail:
 FUNC_2(VAR_6);
 return (VAR_12);
}
