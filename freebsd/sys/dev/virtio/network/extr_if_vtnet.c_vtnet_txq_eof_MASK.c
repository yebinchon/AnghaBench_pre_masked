
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vtxs_omcasts; int vtxs_obytes; int vtxs_opackets; } ;
struct vtnet_txq {scalar_t__ vtntx_watchdog; TYPE_2__ vtntx_stats; struct virtqueue* vtntx_vq; } ;
struct vtnet_tx_header {struct mbuf* vth_mbuf; } ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int ,struct vtnet_tx_header*) ;
 struct vtnet_tx_header* FUNC_3 (struct virtqueue*,int *) ;
 scalar_t__ FUNC_4 (struct virtqueue*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct vtnet_txq *VAR_2)
{
 struct virtqueue *VAR_3;
 struct vtnet_tx_header *VAR_4;
 struct mbuf *VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->vtntx_vq;
 VAR_6 = 0;
 FUNC_0(VAR_2);

 while ((VAR_4 = FUNC_3(VAR_3, ((void*)0))) != ((void*)0)) {
  VAR_5 = VAR_4->vth_mbuf;
  VAR_6++;

  VAR_2->vtntx_stats.vtxs_opackets++;
  VAR_2->vtntx_stats.vtxs_obytes += VAR_5->m_pkthdr.len;
  if (VAR_5->m_flags & VAR_0)
   VAR_2->vtntx_stats.vtxs_omcasts++;

  FUNC_1(VAR_5);
  FUNC_2(VAR_1, VAR_4);
 }

 if (FUNC_4(VAR_3))
  VAR_2->vtntx_watchdog = 0;

 return (VAR_6);
}
