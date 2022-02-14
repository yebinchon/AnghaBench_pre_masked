
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ext_size; } ;
struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_2__ m_ext; int m_len; TYPE_1__ m_pkthdr; } ;
struct TYPE_10__ {TYPE_3__* buf_map; int buf_tag; int buf_spare_map; } ;
struct awg_softc {TYPE_4__ rx; } ;
typedef int bus_dmamap_t ;
struct TYPE_11__ {int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {struct mbuf* mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct awg_softc*,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct mbuf*,TYPE_5__*,int*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*,int ) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct awg_softc *VAR_8, int VAR_9)
{
 struct mbuf *VAR_10;
 bus_dma_segment_t VAR_11;
 bus_dmamap_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(VAR_6, VAR_5, VAR_7);
 if (VAR_10 == ((void*)0))
  return (VAR_3);

 VAR_10->m_pkthdr.len = VAR_10->m_len = VAR_10->m_ext.ext_size;
 FUNC_4(VAR_10, VAR_4);

 if (FUNC_1(VAR_8->rx.buf_tag, VAR_8->rx.buf_spare_map,
     VAR_10, &VAR_11, &VAR_13, VAR_2) != 0) {
  FUNC_5(VAR_10);
  return (VAR_3);
 }

 if (VAR_8->rx.buf_map[VAR_9].mbuf != ((void*)0)) {
  FUNC_2(VAR_8->rx.buf_tag, VAR_8->rx.buf_map[VAR_9].map,
      VAR_0);
  FUNC_3(VAR_8->rx.buf_tag, VAR_8->rx.buf_map[VAR_9].map);
 }
 VAR_12 = VAR_8->rx.buf_map[VAR_9].map;
 VAR_8->rx.buf_map[VAR_9].map = VAR_8->rx.buf_spare_map;
 VAR_8->rx.buf_spare_map = VAR_12;
 FUNC_2(VAR_8->rx.buf_tag, VAR_8->rx.buf_map[VAR_9].map,
     VAR_1);

 VAR_8->rx.buf_map[VAR_9].mbuf = VAR_10;
 FUNC_0(VAR_8, VAR_9, VAR_11.ds_addr);

 return (0);
}
