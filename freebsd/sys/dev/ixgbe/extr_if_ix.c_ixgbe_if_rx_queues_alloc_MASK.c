
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int uint64_t ;
struct rx_ring {struct ix_rx_queue* que; scalar_t__ bytes; int rx_paddr; union ixgbe_adv_rx_desc* rx_base; int me; int tail; struct adapter* adapter; } ;
struct ix_rx_queue {struct adapter* adapter; struct rx_ring rxr; } ;
struct adapter {int num_rx_queues; int pool; int iov_mode; struct ix_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_4, caddr_t *VAR_5, uint64_t *VAR_6,
                         int VAR_7, int VAR_8)
{
 struct adapter *VAR_9 = FUNC_4(VAR_4);
 struct ix_rx_queue *VAR_10;
 int VAR_11;

 FUNC_1(VAR_9->num_rx_queues > 0);
 FUNC_1(VAR_9->num_rx_queues == VAR_8);
 FUNC_1(VAR_7 == 1);


 VAR_9->rx_queues =
     (struct ix_rx_queue *)FUNC_6(sizeof(struct ix_rx_queue)*VAR_8,
                                  VAR_1, VAR_2 | VAR_3);
 if (!VAR_9->rx_queues) {
  FUNC_2(FUNC_3(VAR_4),
      "Unable to allocate TX ring memory\n");
  return (VAR_0);
 }

 for (VAR_11 = 0, VAR_10 = VAR_9->rx_queues; VAR_11 < VAR_8; VAR_11++, VAR_10++) {
  struct rx_ring *VAR_12 = &VAR_10->rxr;


  VAR_12->me = FUNC_5(VAR_9->iov_mode, VAR_9->pool,
      VAR_11);

  VAR_12->adapter = VAR_10->adapter = VAR_9;


  VAR_12->tail = FUNC_0(VAR_12->me);
  VAR_12->rx_base = (union ixgbe_adv_rx_desc *)VAR_5[VAR_11];
  VAR_12->rx_paddr = VAR_6[VAR_11];
  VAR_12->bytes = 0;
  VAR_12->que = VAR_10;
 }

 FUNC_2(FUNC_3(VAR_4), "allocated for %d rx queues\n",
     VAR_9->num_rx_queues);

 return (0);
}
