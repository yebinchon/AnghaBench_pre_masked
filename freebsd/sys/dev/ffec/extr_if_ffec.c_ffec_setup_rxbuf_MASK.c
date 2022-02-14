
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ffec_softc {int fecflags; TYPE_1__* rxbuf_map; int rxbuf_tag; int rxbuf_align; } ;
struct bus_dma_segment {int ds_addr; } ;
struct TYPE_2__ {struct mbuf* mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct mbuf*,struct bus_dma_segment*,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ffec_softc*,int,int ) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct ffec_softc *VAR_3, int VAR_4, struct mbuf * VAR_5)
{
 int VAR_6, VAR_7;
 struct bus_dma_segment VAR_8;

 if (!(VAR_3->fecflags & VAR_2)) {
  FUNC_3(VAR_5, FUNC_4(VAR_1, VAR_3->rxbuf_align));
 }

 VAR_6 = FUNC_0(VAR_3->rxbuf_tag, VAR_3->rxbuf_map[VAR_4].map,
     VAR_5, &VAR_8, &VAR_7, 0);
 if (VAR_6 != 0) {
  return (VAR_6);
 }

 FUNC_1(VAR_3->rxbuf_tag, VAR_3->rxbuf_map[VAR_4].map,
     VAR_0);

 VAR_3->rxbuf_map[VAR_4].mbuf = VAR_5;
 FUNC_2(VAR_3, VAR_4, VAR_8.ds_addr);

 return (0);
}
