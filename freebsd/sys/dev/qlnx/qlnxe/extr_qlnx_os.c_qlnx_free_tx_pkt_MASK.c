
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_11__ {int raw; } ;
struct qlnx_tx_queue {size_t sw_tx_cons; TYPE_4__* sw_tx_ring; int tx_pbl; TYPE_1__ tx_db; int * hw_cons_ptr; } ;
struct qlnx_fastpath {int tx_pkts_completed; int tx_pkts_freed; int err_tx_free_pkt_null; int rss_id; } ;
struct TYPE_12__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct eth_tx_bd {int dummy; } ;
struct TYPE_13__ {int nbds; } ;
struct eth_tx_1st_bd {TYPE_3__ data; } ;
struct TYPE_15__ {int tx_tag; int ifp; } ;
typedef TYPE_5__ qlnx_host_t ;
typedef scalar_t__ bus_dmamap_t ;
struct TYPE_14__ {scalar_t__ map; struct mbuf* mp; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 struct eth_tx_bd* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mbuf*) ;
 int FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_14(qlnx_host_t *VAR_2, struct qlnx_fastpath *VAR_3,
 struct qlnx_tx_queue *VAR_4)
{
 u16 VAR_5;
 struct mbuf *VAR_6;
 bus_dmamap_t VAR_7;
 int VAR_8;
 struct eth_tx_bd *VAR_9;
 struct eth_tx_1st_bd *VAR_10;
 int VAR_11 = 0;

 VAR_5 = VAR_4->sw_tx_cons;
 VAR_6 = VAR_4->sw_tx_ring[VAR_5].mp;
 VAR_7 = VAR_4->sw_tx_ring[VAR_5].map;

 if ((VAR_6 == ((void*)0)) || FUNC_3(VAR_2, VAR_1)){

  FUNC_4(VAR_2, VAR_1);

  FUNC_2(VAR_2, "(mp == NULL) "
   " tx_idx = 0x%x"
   " ecore_prod_idx = 0x%x"
   " ecore_cons_idx = 0x%x"
   " hw_bd_cons = 0x%x"
   " txq_db_last = 0x%x"
   " elem_left = 0x%x\n",
   VAR_3->rss_id,
   FUNC_10(&VAR_4->tx_pbl),
   FUNC_8(&VAR_4->tx_pbl),
   FUNC_11(*VAR_4->hw_cons_ptr),
   VAR_4->tx_db.raw,
   FUNC_9(&VAR_4->tx_pbl));

  VAR_3->err_tx_free_pkt_null++;


  FUNC_13(VAR_2);

  return;
 } else {

  FUNC_1((VAR_2->ifp));
  FUNC_0((VAR_2->ifp), (VAR_6->m_pkthdr.len));

  FUNC_5(VAR_2->tx_tag, VAR_7, VAR_0);
  FUNC_6(VAR_2->tx_tag, VAR_7);

  VAR_3->tx_pkts_freed++;
  VAR_3->tx_pkts_completed++;

  FUNC_12(VAR_6);
 }

 VAR_10 = (struct eth_tx_1st_bd *)FUNC_7(&VAR_4->tx_pbl);
 VAR_11 = VAR_10->data.nbds;



 for (VAR_8 = 1; VAR_8 < VAR_11; VAR_8++) {
  VAR_9 = FUNC_7(&VAR_4->tx_pbl);

 }
 VAR_4->sw_tx_ring[VAR_5].flags = 0;
 VAR_4->sw_tx_ring[VAR_5].mp = ((void*)0);
 VAR_4->sw_tx_ring[VAR_5].map = (bus_dmamap_t)0;

 return;
}
