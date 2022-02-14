
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ frag_size; } ;
struct oce_rq {scalar_t__ islro; TYPE_1__ cfg; int pending; TYPE_4__* ring; int tag; struct oce_packet_desc* pckts; int parent; } ;
struct oce_packet_desc {struct mbuf* mbuf; int map; } ;
struct oce_common_cqe_info {scalar_t__ pkt_size; scalar_t__ num_frags; scalar_t__ ip_cksum_pass; int ipv6_frame; scalar_t__ l4_cksum_pass; } ;
struct TYPE_7__ {int csum_flags; int csum_data; scalar_t__ len; } ;
struct mbuf {TYPE_2__ m_pkthdr; int * m_nextpkt; struct mbuf* m_next; int m_flags; scalar_t__ m_len; } ;
struct TYPE_9__ {size_t cidx; size_t pidx; } ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct oce_rq *VAR_6, struct oce_common_cqe_info *VAR_7, struct mbuf **VAR_8)
{
 POCE_SOFTC VAR_9 = (POCE_SOFTC) VAR_6->parent;
        uint32_t VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12 = VAR_7->pkt_size;
        struct oce_packet_desc *VAR_13;
        struct mbuf *VAR_14 = ((void*)0);

        for (VAR_10 = 0; VAR_10 < VAR_7->num_frags; VAR_10++) {
                if (VAR_6->ring->cidx == VAR_6->ring->pidx) {
                        FUNC_4(VAR_9->dev,
                                  "oce_rx_mbuf_chain: Invalid RX completion - Queue is empty\n");
                        return;
                }
                VAR_13 = &VAR_6->pckts[VAR_6->ring->cidx];

                FUNC_2(VAR_6->tag, VAR_13->map, VAR_0);
                FUNC_3(VAR_6->tag, VAR_13->map);
  FUNC_1(VAR_6->ring, 1);
                VAR_6->pending--;

                VAR_11 = (VAR_12 > VAR_6->cfg.frag_size) ? VAR_6->cfg.frag_size : VAR_12;
                VAR_13->mbuf->m_len = VAR_11;

                if (VAR_14 != ((void*)0)) {

                        VAR_13->mbuf->m_flags &= ~VAR_5;
                        VAR_14->m_next = VAR_13->mbuf;
   if(VAR_6->islro)
                         VAR_14->m_nextpkt = ((void*)0);
                        VAR_14 = VAR_13->mbuf;
                } else {

                        VAR_13->mbuf->m_pkthdr.len = VAR_12;
   if(VAR_6->islro)
                         VAR_13->mbuf->m_nextpkt = ((void*)0);
                        VAR_13->mbuf->m_pkthdr.csum_flags = 0;
                        if (FUNC_0(VAR_9)) {
                                if (VAR_7->l4_cksum_pass) {
                                        if(!VAR_7->ipv6_frame) {
                                                VAR_13->mbuf->m_pkthdr.csum_flags |=
                                                        (VAR_1 | VAR_4);
                                        }else {
      if(VAR_6->islro) {
                                                 VAR_13->mbuf->m_pkthdr.csum_flags |=
                                                        (VAR_1 | VAR_4);
      }
                                        }
                                        VAR_13->mbuf->m_pkthdr.csum_data = 0xffff;
                                }
                                if (VAR_7->ip_cksum_pass) {
                                        VAR_13->mbuf->m_pkthdr.csum_flags |=
                                               (VAR_2|VAR_3);
                                }
                        }
                        *VAR_8 = VAR_14 = VAR_13->mbuf;
               }
                VAR_13->mbuf = ((void*)0);
                VAR_12 -= VAR_11;
        }

        return;
}
