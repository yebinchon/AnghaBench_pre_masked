
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sw_rx_data {struct mbuf* data; int map; } ;
struct qlnx_rx_queue {size_t sw_rx_cons; TYPE_1__* tpa_info; int rx_bd_ring; struct sw_rx_data* sw_rx_ring; } ;
struct qlnx_fastpath {int rss_id; int err_rx_mp_null; int err_rx_tpa_invalid_agg_num; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; int m_flags; } ;
struct eth_fast_path_rx_tpa_cont_cqe {size_t tpa_agg_index; scalar_t__* len_list; int type; } ;
struct TYPE_7__ {scalar_t__ rx_buf_size; int rx_tag; int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ agg_state; struct mbuf* mpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*,int ,...) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct qlnx_rx_queue*) ;
 int FUNC_5 (struct qlnx_rx_queue*) ;

__attribute__((used)) static void
FUNC_6(qlnx_host_t *VAR_7, struct qlnx_fastpath *VAR_8,
 struct qlnx_rx_queue *VAR_9,
 struct eth_fast_path_rx_tpa_cont_cqe *VAR_10)
{
 struct sw_rx_data *VAR_11;
 int VAR_12;
 struct mbuf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct mbuf *VAR_16;
 uint32_t VAR_17;
 device_t VAR_18;

 VAR_18 = VAR_7->pci_dev;

        FUNC_0(VAR_7, "[%d]: enter\n                 \t type = 0x%x\n                 \t tpa_agg_index = 0x%x\n                 \t len_list[0] = 0x%x\n                 \t len_list[1] = 0x%x\n                 \t len_list[2] = 0x%x\n                 \t len_list[3] = 0x%x\n                 \t len_list[4] = 0x%x\n                 \t len_list[5] = 0x%x\n",
                VAR_8->rss_id, VAR_10->type, VAR_10->tpa_agg_index,
                VAR_10->len_list[0], VAR_10->len_list[1], VAR_10->len_list[2],
                VAR_10->len_list[3], VAR_10->len_list[4], VAR_10->len_list[5]);

 VAR_17 = VAR_10->tpa_agg_index;

 if (VAR_17 >= VAR_2) {
  FUNC_0(VAR_7, "[%d]: 0\n ", VAR_8->rss_id);
  VAR_8->err_rx_tpa_invalid_agg_num++;
  return;
 }


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {

  FUNC_0(VAR_7, "[%d]: 1\n ", VAR_8->rss_id);

  if (VAR_10->len_list[VAR_12] == 0)
   break;

  if (VAR_9->tpa_info[VAR_17].agg_state !=
   VAR_5) {
   FUNC_5(VAR_9);
   continue;
  }

  VAR_11 = &VAR_9->sw_rx_ring[VAR_9->sw_rx_cons];
  FUNC_1(VAR_7->rx_tag, VAR_11->map,
   VAR_0);

  VAR_15 = VAR_11->data;

  if (VAR_15 == ((void*)0)) {

   FUNC_0(VAR_7, "[%d]: mpc = NULL\n", VAR_8->rss_id);

   VAR_8->err_rx_mp_null++;
   if (VAR_13 != ((void*)0))
    FUNC_3(VAR_13);
   VAR_13 = VAR_14 = ((void*)0);
   VAR_9->tpa_info[VAR_17].agg_state =
      VAR_4;
   FUNC_2(&VAR_9->rx_bd_ring);
   VAR_9->sw_rx_cons =
    (VAR_9->sw_rx_cons + 1) & (VAR_6 - 1);
   continue;
  }

  if (FUNC_4(VAR_7, VAR_9) != 0) {

   FUNC_0(VAR_7, "[%d]: New buffer allocation failed,"
    " dropping incoming packet and reusing its"
    " buffer\n", VAR_8->rss_id);

   FUNC_5(VAR_9);

   if (VAR_13 != ((void*)0))
    FUNC_3(VAR_13);
   VAR_13 = VAR_14 = ((void*)0);

   VAR_9->tpa_info[VAR_17].agg_state =
      VAR_4;

   FUNC_2(&VAR_9->rx_bd_ring);
   VAR_9->sw_rx_cons =
    (VAR_9->sw_rx_cons + 1) & (VAR_6 - 1);

   continue;
  }

  VAR_15->m_flags &= ~VAR_3;
  VAR_15->m_next = ((void*)0);
  VAR_15->m_len = VAR_10->len_list[VAR_12];


  if (VAR_13 == ((void*)0)) {
   VAR_13 = VAR_14 = VAR_15;
  } else {
   VAR_14->m_len = VAR_7->rx_buf_size;
   VAR_14->m_next = VAR_15;
   VAR_14 = VAR_15;
  }

  FUNC_2(&VAR_9->rx_bd_ring);
  VAR_9->sw_rx_cons =
   (VAR_9->sw_rx_cons + 1) & (VAR_6 - 1);
 }

        FUNC_0(VAR_7, "[%d]: 2\n" "\tmpf = %p mpl = %p\n",
                  VAR_8->rss_id, VAR_13, VAR_14);

 if (VAR_13 != ((void*)0)) {
  VAR_16 = VAR_9->tpa_info[VAR_17].mpl;
  VAR_16->m_len = VAR_7->rx_buf_size;
  VAR_16->m_next = VAR_13;
  VAR_9->tpa_info[VAR_17].mpl = VAR_14;
 }

 return;
}
