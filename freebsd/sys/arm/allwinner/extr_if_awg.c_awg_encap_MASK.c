
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_7__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_10__ {int cur; scalar_t__ queued; scalar_t__ segs; TYPE_3__* desc_ring; TYPE_2__* buf_map; int buf_tag; } ;
struct awg_softc {TYPE_4__ tx; int dev; } ;
typedef int bus_dmamap_t ;
struct TYPE_11__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {void* status; void* size; void* addr; } ;
struct TYPE_8__ {struct mbuf* mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_5__*,int*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int) ;
 struct mbuf* FUNC_7 (struct mbuf*,int ,int) ;
 int FUNC_8 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_9(struct awg_softc *VAR_20, struct mbuf **VAR_21)
{
 bus_dmamap_t VAR_22;
 bus_dma_segment_t VAR_23[VAR_18];
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 u_int VAR_30;
 uint32_t VAR_31, VAR_32;
 struct mbuf *VAR_33;

 VAR_26 = VAR_27 = VAR_20->tx.cur;
 VAR_22 = VAR_20->tx.buf_map[VAR_27].map;

 VAR_33 = *VAR_21;
 VAR_24 = FUNC_2(VAR_20->tx.buf_tag, VAR_22, VAR_33, VAR_23,
     &VAR_25, VAR_1);
 if (VAR_24 == VAR_5) {
  VAR_33 = FUNC_7(VAR_33, VAR_9, VAR_18);
  if (VAR_33 == ((void*)0)) {
   FUNC_5(VAR_20->dev, "awg_encap: m_collapse failed\n");
   FUNC_8(*VAR_21);
   *VAR_21 = ((void*)0);
   return (VAR_8);
  }
  *VAR_21 = VAR_33;
  VAR_24 = FUNC_2(VAR_20->tx.buf_tag, VAR_22, VAR_33,
      VAR_23, &VAR_25, VAR_1);
  if (VAR_24 != 0) {
   FUNC_8(*VAR_21);
   *VAR_21 = ((void*)0);
  }
 }
 if (VAR_24 != 0) {
  FUNC_5(VAR_20->dev, "awg_encap: bus_dmamap_load_mbuf_sg failed\n");
  return (VAR_24);
 }
 if (VAR_25 == 0) {
  FUNC_8(*VAR_21);
  *VAR_21 = ((void*)0);
  return (VAR_6);
 }

 if (VAR_20->tx.queued + VAR_25 > VAR_13) {
  FUNC_4(VAR_20->tx.buf_tag, VAR_22);
  return (VAR_7);
 }

 FUNC_3(VAR_20->tx.buf_tag, VAR_22, VAR_0);

 VAR_31 = VAR_15;
 VAR_32 = 0;
 if ((VAR_33->m_pkthdr.csum_flags & VAR_2) != 0) {
  if ((VAR_33->m_pkthdr.csum_flags & (VAR_3|VAR_4)) != 0)
   VAR_30 = VAR_10;
  else
   VAR_30 = VAR_11;
  VAR_31 |= (VAR_30 << VAR_12);
 }

 for (VAR_29 = 0; VAR_29 < VAR_25; VAR_29++) {
  VAR_20->tx.segs++;
  if (VAR_29 == VAR_25 - 1) {
   VAR_31 |= VAR_17;




   if (VAR_20->tx.segs >= VAR_19) {
    VAR_20->tx.segs = 0;
    VAR_31 |= VAR_16;
   }
  }

  VAR_20->tx.desc_ring[VAR_26].addr = FUNC_6((uint32_t)VAR_23[VAR_29].ds_addr);
  VAR_20->tx.desc_ring[VAR_26].size = FUNC_6(VAR_31 | VAR_23[VAR_29].ds_len);
  VAR_20->tx.desc_ring[VAR_26].status = FUNC_6(VAR_32);

  VAR_31 &= ~VAR_15;




  VAR_32 = VAR_14;

  ++VAR_20->tx.queued;
  VAR_26 = FUNC_0(VAR_26);
 }

 VAR_20->tx.cur = VAR_26;


 VAR_28 = FUNC_1(VAR_26, VAR_13 - 1);
 VAR_20->tx.buf_map[VAR_27].map = VAR_20->tx.buf_map[VAR_28].map;
 VAR_20->tx.buf_map[VAR_28].map = VAR_22;
 VAR_20->tx.buf_map[VAR_28].mbuf = VAR_33;





 VAR_20->tx.desc_ring[VAR_27].status = FUNC_6(VAR_14);

 return (0);
}
