
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int age_rx_cons; int age_rx_ring_map; int age_rx_ring_tag; struct age_rxdesc* age_rxdesc; } ;
struct age_ring_data {int * age_rx_ring; } ;
struct age_softc {TYPE_1__ age_cdata; struct age_ring_data age_rdata; scalar_t__ age_morework; } ;
struct age_rxdesc {int * rx_desc; int * rx_m; } ;


 int FUNC_0 (struct age_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct age_softc*,struct age_rxdesc*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct age_softc *VAR_4)
{
 struct age_ring_data *VAR_5;
 struct age_rxdesc *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 VAR_4->age_cdata.age_rx_cons = VAR_0 - 1;
 VAR_4->age_morework = 0;
 VAR_5 = &VAR_4->age_rdata;
 FUNC_3(VAR_5->age_rx_ring, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->age_cdata.age_rxdesc[VAR_7];
  VAR_6->rx_m = ((void*)0);
  VAR_6->rx_desc = &VAR_5->age_rx_ring[VAR_7];
  if (FUNC_1(VAR_4, VAR_6) != 0)
   return (VAR_3);
 }

 FUNC_2(VAR_4->age_cdata.age_rx_ring_tag,
     VAR_4->age_cdata.age_rx_ring_map, VAR_2);

 return (0);
}
