
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; scalar_t__ m_len; } ;
struct TYPE_10__ {int * bge_rx_std_dmamap; int bge_rx_mtag; int * bge_rx_std_seglen; struct mbuf** bge_rx_std_chain; int bge_rx_std_sparemap; } ;
struct TYPE_8__ {struct bge_rx_bd* bge_rx_std_ring; } ;
struct bge_softc {int bge_flags; size_t bge_std; TYPE_4__ bge_cdata; TYPE_2__ bge_ldata; int bge_ifp; } ;
struct TYPE_9__ {int bge_addr_hi; int bge_addr_lo; } ;
struct bge_rx_bd {int bge_idx; int bge_len; int bge_flags; TYPE_3__ bge_addr; } ;
typedef int bus_dmamap_t ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_5__*,int*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mbuf*,scalar_t__) ;
 int FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (int ,int ,int ) ;
 struct mbuf* FUNC_9 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct bge_softc *VAR_15, int VAR_16)
{
 struct mbuf *VAR_17;
 struct bge_rx_bd *VAR_18;
 bus_dma_segment_t VAR_19[1];
 bus_dmamap_t VAR_20;
 int VAR_21, VAR_22;

 if (VAR_15->bge_flags & VAR_0 &&
     (FUNC_5(VAR_15->bge_ifp) + VAR_8 + VAR_7 +
     VAR_9 > (VAR_10 - VAR_6))) {
  VAR_17 = FUNC_9(VAR_13, VAR_12, VAR_14, VAR_11);
  if (VAR_17 == ((void*)0))
   return (VAR_5);
  VAR_17->m_len = VAR_17->m_pkthdr.len = VAR_11;
 } else {
  VAR_17 = FUNC_8(VAR_13, VAR_12, VAR_14);
  if (VAR_17 == ((void*)0))
   return (VAR_5);
  VAR_17->m_len = VAR_17->m_pkthdr.len = VAR_10;
 }
 if ((VAR_15->bge_flags & VAR_1) == 0)
  FUNC_6(VAR_17, VAR_6);

 VAR_21 = FUNC_2(VAR_15->bge_cdata.bge_rx_mtag,
     VAR_15->bge_cdata.bge_rx_std_sparemap, VAR_17, VAR_19, &VAR_22, 0);
 if (VAR_21 != 0) {
  FUNC_7(VAR_17);
  return (VAR_21);
 }
 if (VAR_15->bge_cdata.bge_rx_std_chain[VAR_16] != ((void*)0)) {
  FUNC_3(VAR_15->bge_cdata.bge_rx_mtag,
      VAR_15->bge_cdata.bge_rx_std_dmamap[VAR_16], VAR_3);
  FUNC_4(VAR_15->bge_cdata.bge_rx_mtag,
      VAR_15->bge_cdata.bge_rx_std_dmamap[VAR_16]);
 }
 VAR_20 = VAR_15->bge_cdata.bge_rx_std_dmamap[VAR_16];
 VAR_15->bge_cdata.bge_rx_std_dmamap[VAR_16] = VAR_15->bge_cdata.bge_rx_std_sparemap;
 VAR_15->bge_cdata.bge_rx_std_sparemap = VAR_20;
 VAR_15->bge_cdata.bge_rx_std_chain[VAR_16] = VAR_17;
 VAR_15->bge_cdata.bge_rx_std_seglen[VAR_16] = VAR_19[0].ds_len;
 VAR_18 = &VAR_15->bge_ldata.bge_rx_std_ring[VAR_15->bge_std];
 VAR_18->bge_addr.bge_addr_lo = FUNC_1(VAR_19[0].ds_addr);
 VAR_18->bge_addr.bge_addr_hi = FUNC_0(VAR_19[0].ds_addr);
 VAR_18->bge_flags = VAR_2;
 VAR_18->bge_len = VAR_19[0].ds_len;
 VAR_18->bge_idx = VAR_16;

 FUNC_3(VAR_15->bge_cdata.bge_rx_mtag,
     VAR_15->bge_cdata.bge_rx_std_dmamap[VAR_16], VAR_4);

 return (0);
}
