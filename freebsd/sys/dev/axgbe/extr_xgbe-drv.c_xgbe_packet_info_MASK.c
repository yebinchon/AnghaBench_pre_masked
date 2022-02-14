
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring {int dummy; } ;
struct xgbe_prv_data {int dummy; } ;
struct xgbe_packet_data {int tx_packets; scalar_t__ rdesc_count; int tx_bytes; struct mbuf* m; } ;
struct mbuf {unsigned int m_len; struct mbuf* m_next; } ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*,int *) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_1,
        struct xgbe_ring *VAR_2, struct mbuf *VAR_3,
        struct xgbe_packet_data *VAR_4)
{
 struct mbuf *VAR_5;
 unsigned int VAR_6;

 VAR_4->m = VAR_3;

 VAR_4->rdesc_count = 0;

 VAR_4->tx_packets = 1;
 VAR_4->tx_bytes = FUNC_1(VAR_3, ((void*)0));

 for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->m_next) {
  for (VAR_6 = VAR_5->m_len; VAR_6 != 0;) {
   VAR_4->rdesc_count++;
   VAR_6 -= FUNC_0(VAR_6, VAR_0);
  }
 }
}
