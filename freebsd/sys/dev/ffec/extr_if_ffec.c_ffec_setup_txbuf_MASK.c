
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ffec_softc {TYPE_1__* txbuf_map; int txbuf_tag; } ;
struct bus_dma_segment {int ds_len; int ds_addr; } ;
struct TYPE_2__ {struct mbuf* mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct mbuf*,struct bus_dma_segment*,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ffec_softc*,int,int ,int ) ;
 struct mbuf* FUNC_3 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ffec_softc *VAR_3, int VAR_4, struct mbuf **VAR_5)
{
 struct mbuf * VAR_6;
 int VAR_7, VAR_8;
 struct bus_dma_segment VAR_9;

 if ((VAR_6 = FUNC_3(*VAR_5, VAR_2)) == ((void*)0))
  return (VAR_1);
 *VAR_5 = VAR_6;

 VAR_7 = FUNC_0(VAR_3->txbuf_tag, VAR_3->txbuf_map[VAR_4].map,
     VAR_6, &VAR_9, &VAR_8, 0);
 if (VAR_7 != 0) {
  return (VAR_1);
 }
 FUNC_1(VAR_3->txbuf_tag, VAR_3->txbuf_map[VAR_4].map,
     VAR_0);

 VAR_3->txbuf_map[VAR_4].mbuf = VAR_6;
 FUNC_2(VAR_3, VAR_4, VAR_9.ds_addr, VAR_9.ds_len);

 return (0);

}
