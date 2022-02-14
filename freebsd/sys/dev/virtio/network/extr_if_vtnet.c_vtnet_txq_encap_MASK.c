
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vtnet_txq {int dummy; } ;
struct virtio_net_hdr {int dummy; } ;
struct TYPE_3__ {struct virtio_net_hdr hdr; } ;
struct vtnet_tx_header {TYPE_1__ vth_uhdr; } ;
struct TYPE_4__ {int csum_flags; int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mbuf* FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*) ;
 struct vtnet_tx_header* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct vtnet_tx_header*) ;
 int VAR_5 ;
 int FUNC_5 (struct vtnet_txq*,struct mbuf**,struct vtnet_tx_header*) ;
 struct mbuf* FUNC_6 (struct vtnet_txq*,struct mbuf*,struct virtio_net_hdr*) ;

__attribute__((used)) static int
FUNC_7(struct vtnet_txq *VAR_6, struct mbuf **VAR_7, int VAR_8)
{
 struct vtnet_tx_header *VAR_9;
 struct virtio_net_hdr *VAR_10;
 struct mbuf *VAR_11;
 int VAR_12;

 VAR_11 = *VAR_7;
 FUNC_0(VAR_11);

 VAR_9 = FUNC_3(VAR_5, VAR_8 | VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_11);
  *VAR_7 = ((void*)0);
  return (VAR_1);
 }






 VAR_10 = &VAR_9->vth_uhdr.hdr;

 if (VAR_11->m_flags & VAR_2) {
  VAR_11 = FUNC_1(VAR_11, VAR_11->m_pkthdr.ether_vtag);
  if ((*VAR_7 = VAR_11) == ((void*)0)) {
   VAR_12 = VAR_0;
   goto fail;
  }
  VAR_11->m_flags &= ~VAR_2;
 }

 if (VAR_11->m_pkthdr.csum_flags & VAR_4) {
  VAR_11 = FUNC_6(VAR_6, VAR_11, VAR_10);
  if ((*VAR_7 = VAR_11) == ((void*)0)) {
   VAR_12 = VAR_0;
   goto fail;
  }
 }

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_9);
 if (VAR_12 == 0)
  return (0);

fail:
 FUNC_4(VAR_5, VAR_9);

 return (VAR_12);
}
