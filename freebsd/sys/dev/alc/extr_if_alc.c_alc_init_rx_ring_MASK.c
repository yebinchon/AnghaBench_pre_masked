
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alc_rx_cons; int alc_rx_ring_map; int alc_rx_ring_tag; struct alc_rxdesc* alc_rxdesc; } ;
struct alc_ring_data {int * alc_rx_ring; } ;
struct alc_softc {TYPE_1__ alc_cdata; struct alc_ring_data alc_rdata; scalar_t__ alc_morework; } ;
struct alc_rxdesc {int * rx_desc; int * rx_m; } ;


 int FUNC_0 (struct alc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct alc_softc*,struct alc_rxdesc*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct alc_softc *VAR_5)
{
 struct alc_ring_data *VAR_6;
 struct alc_rxdesc *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5);

 VAR_5->alc_cdata.alc_rx_cons = VAR_1 - 1;
 VAR_5->alc_morework = 0;
 VAR_6 = &VAR_5->alc_rdata;
 FUNC_4(VAR_6->alc_rx_ring, VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_5->alc_cdata.alc_rxdesc[VAR_8];
  VAR_7->rx_m = ((void*)0);
  VAR_7->rx_desc = &VAR_6->alc_rx_ring[VAR_8];
  if (FUNC_2(VAR_5, VAR_7) != 0)
   return (VAR_4);
 }






 FUNC_3(VAR_5->alc_cdata.alc_rx_ring_tag,
     VAR_5->alc_cdata.alc_rx_ring_map, VAR_3);

 FUNC_1(VAR_5, VAR_0, VAR_5->alc_cdata.alc_rx_cons);

 return (0);
}
