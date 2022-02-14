
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rx_mergeable_failed; } ;
struct vtnet_softc {TYPE_3__ vtnet_stats; } ;
struct TYPE_4__ {int vrxs_iqdrops; int vrxs_ierrors; } ;
struct vtnet_rxq {TYPE_1__ vtnrx_stats; struct virtqueue* vtnrx_vq; struct vtnet_softc* vtnrx_sc; } ;
struct virtqueue {int dummy; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {int m_len; struct mbuf* m_next; TYPE_2__ m_pkthdr; int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct virtqueue*,int*) ;
 int FUNC_2 (struct vtnet_rxq*,struct mbuf*) ;
 int FUNC_3 (struct vtnet_rxq*,int) ;
 scalar_t__ FUNC_4 (struct vtnet_rxq*) ;

__attribute__((used)) static int
FUNC_5(struct vtnet_rxq *VAR_1, struct mbuf *VAR_2, int VAR_3)
{
 struct vtnet_softc *VAR_4;
 struct virtqueue *VAR_5;
 struct mbuf *VAR_6, *VAR_7;
 int VAR_8;

 VAR_4 = VAR_1->vtnrx_sc;
 VAR_5 = VAR_1->vtnrx_vq;
 VAR_7 = VAR_2;

 while (--VAR_3 > 0) {
  VAR_6 = FUNC_1(VAR_5, &VAR_8);
  if (VAR_6 == ((void*)0)) {
   VAR_1->vtnrx_stats.vrxs_ierrors++;
   goto fail;
  }

  if (FUNC_4(VAR_1) != 0) {
   VAR_1->vtnrx_stats.vrxs_iqdrops++;
   FUNC_2(VAR_1, VAR_6);
   if (VAR_3 > 1)
    FUNC_3(VAR_1, VAR_3);
   goto fail;
  }

  if (VAR_6->m_len < VAR_8)
   VAR_8 = VAR_6->m_len;

  VAR_6->m_len = VAR_8;
  VAR_6->m_flags &= ~VAR_0;

  VAR_2->m_pkthdr.len += VAR_8;
  VAR_7->m_next = VAR_6;
  VAR_7 = VAR_6;
 }

 return (0);

fail:
 VAR_4->vtnet_stats.rx_mergeable_failed++;
 FUNC_0(VAR_2);

 return (1);
}
