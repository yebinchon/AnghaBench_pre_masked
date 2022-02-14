
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vte_txdesc {struct vte_tx_desc* tx_desc; int * tx_m; } ;
struct vte_tx_desc {int dtnp; } ;
struct TYPE_5__ {int vte_tx_ring_map; int vte_tx_ring_tag; struct vte_tx_desc* vte_tx_ring; scalar_t__ vte_tx_ring_paddr; struct vte_txdesc* vte_txdesc; TYPE_3__** vte_txmbufs; scalar_t__ vte_tx_cnt; scalar_t__ vte_tx_cons; scalar_t__ vte_tx_prod; } ;
struct vte_softc {TYPE_2__ vte_cdata; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {void* len; } ;
struct TYPE_6__ {void* m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vte_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct vte_tx_desc*,int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_5(struct vte_softc *VAR_10)
{
 struct vte_tx_desc *VAR_11;
 struct vte_txdesc *VAR_12;
 bus_addr_t VAR_13;
 int VAR_14;

 FUNC_0(VAR_10);

 VAR_10->vte_cdata.vte_tx_prod = 0;
 VAR_10->vte_cdata.vte_tx_cons = 0;
 VAR_10->vte_cdata.vte_tx_cnt = 0;


 if (VAR_9 != 0) {
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
   VAR_10->vte_cdata.vte_txmbufs[VAR_14] = FUNC_4(VAR_5,
       VAR_4, VAR_6);
   if (VAR_10->vte_cdata.vte_txmbufs[VAR_14] == ((void*)0))
    return (VAR_2);
   VAR_10->vte_cdata.vte_txmbufs[VAR_14]->m_pkthdr.len = VAR_3;
   VAR_10->vte_cdata.vte_txmbufs[VAR_14]->m_len = VAR_3;
  }
 }
 VAR_11 = VAR_10->vte_cdata.vte_tx_ring;
 FUNC_2(VAR_11, VAR_8);
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_12 = &VAR_10->vte_cdata.vte_txdesc[VAR_14];
  VAR_12->tx_m = ((void*)0);
  if (VAR_14 != VAR_7 - 1)
   VAR_13 = VAR_10->vte_cdata.vte_tx_ring_paddr +
       sizeof(struct vte_tx_desc) * (VAR_14 + 1);
  else
   VAR_13 = VAR_10->vte_cdata.vte_tx_ring_paddr +
       sizeof(struct vte_tx_desc) * 0;
  VAR_11 = &VAR_10->vte_cdata.vte_tx_ring[VAR_14];
  VAR_11->dtnp = FUNC_3(VAR_13);
  VAR_12->tx_desc = VAR_11;
 }

 FUNC_1(VAR_10->vte_cdata.vte_tx_ring_tag,
     VAR_10->vte_cdata.vte_tx_ring_map, VAR_0 |
     VAR_1);
 return (0);
}
