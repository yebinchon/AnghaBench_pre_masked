
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sw_rx_data {int map; struct mbuf* data; } ;
struct qlnx_rx_queue {int sw_rx_cons; scalar_t__ rx_buf_size; int rx_bd_ring; struct sw_rx_data* sw_rx_ring; } ;
struct qlnx_fastpath {int err_rx_alloc_errors; int err_rx_mp_null; struct qlnx_rx_queue* rxq; } ;
struct mbuf {struct mbuf* m_next; scalar_t__ m_len; int m_flags; } ;
struct TYPE_5__ {int rx_tag; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct qlnx_rx_queue*) ;
 int FUNC_5 (struct qlnx_rx_queue*) ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_3, struct qlnx_fastpath *VAR_4,
 struct mbuf *VAR_5, uint16_t VAR_6)
{
 struct mbuf *VAR_7, *VAR_8, *VAR_9;
 struct sw_rx_data *VAR_10;
 struct qlnx_rx_queue *VAR_11;
 uint16_t VAR_12;

 VAR_11 = VAR_4->rxq;
 VAR_8 = VAR_9 = VAR_7 = ((void*)0);

 while (VAR_6) {

         VAR_11->sw_rx_cons = (VAR_11->sw_rx_cons + 1) & (VAR_2 - 1);

                VAR_10 = &VAR_11->sw_rx_ring[VAR_11->sw_rx_cons];
                VAR_7 = VAR_10->data;

  if (VAR_7 == ((void*)0)) {
                 FUNC_0(VAR_3, "mp = NULL\n");
   VAR_4->err_rx_mp_null++;
          VAR_11->sw_rx_cons =
    (VAR_11->sw_rx_cons + 1) & (VAR_2 - 1);

   if (VAR_8 != ((void*)0))
    FUNC_3(VAR_8);

   return (-1);
  }
  FUNC_1(VAR_3->rx_tag, VAR_10->map,
   VAR_0);

                if (FUNC_4(VAR_3, VAR_11) != 0) {

                        FUNC_0(VAR_3, "New buffer allocation failed, dropping"
    " incoming packet and reusing its buffer\n");

                        FUNC_5(VAR_11);
                        VAR_4->err_rx_alloc_errors++;

   if (VAR_8 != ((void*)0))
    FUNC_3(VAR_8);

   return (-1);
  }
                FUNC_2(&VAR_11->rx_bd_ring);

  if (VAR_6 > VAR_11->rx_buf_size)
   VAR_12 = VAR_11->rx_buf_size;
  else
   VAR_12 = VAR_6;

  VAR_6 = VAR_6 - VAR_12;

  VAR_7->m_flags &= ~VAR_1;
  VAR_7->m_next = ((void*)0);
  VAR_7->m_len = VAR_12;

  if (VAR_8 == ((void*)0))
   VAR_8 = VAR_9 = VAR_7;
  else {
   VAR_9->m_next = VAR_7;
   VAR_9 = VAR_7;
  }
 }

 if (VAR_8 != ((void*)0))
  VAR_5->m_next = VAR_8;

 return (0);
}
