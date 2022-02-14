
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jme_rx_ring_map; int jme_rx_ring_tag; struct jme_rxdesc* jme_rxdesc; scalar_t__ jme_rx_cons; } ;
struct jme_ring_data {int * jme_rx_ring; } ;
struct jme_softc {TYPE_1__ jme_cdata; struct jme_ring_data jme_rdata; scalar_t__ jme_morework; } ;
struct jme_rxdesc {int * rx_desc; int * rx_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct jme_softc*,struct jme_rxdesc*) ;

__attribute__((used)) static int
FUNC_4(struct jme_softc *VAR_5)
{
 struct jme_ring_data *VAR_6;
 struct jme_rxdesc *VAR_7;
 int VAR_8;

 VAR_5->jme_cdata.jme_rx_cons = 0;
 FUNC_0(VAR_5);
 VAR_5->jme_morework = 0;

 VAR_6 = &VAR_5->jme_rdata;
 FUNC_2(VAR_6->jme_rx_ring, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_5->jme_cdata.jme_rxdesc[VAR_8];
  VAR_7->rx_m = ((void*)0);
  VAR_7->rx_desc = &VAR_6->jme_rx_ring[VAR_8];
  if (FUNC_3(VAR_5, VAR_7) != 0)
   return (VAR_2);
 }

 FUNC_1(VAR_5->jme_cdata.jme_rx_ring_tag,
     VAR_5->jme_cdata.jme_rx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
