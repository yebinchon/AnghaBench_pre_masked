
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_rdesc {scalar_t__ index; scalar_t__ len; } ;
struct TYPE_4__ {int age_rr_cons; int age_rx_cons; int age_rr_ring_map; int age_rr_ring_tag; int age_rx_ring_map; int age_rx_ring_tag; } ;
struct TYPE_3__ {struct rx_rdesc* age_rr_ring; } ;
struct age_softc {TYPE_2__ age_cdata; TYPE_1__ age_rdata; } ;


 int FUNC_0 (struct age_softc*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct age_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct age_softc*,struct rx_rdesc*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct age_softc *VAR_8, int VAR_9, int VAR_10)
{
 struct rx_rdesc *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_2(VAR_8);

 VAR_12 = VAR_8->age_cdata.age_rr_cons;
 if (VAR_12 == VAR_9)
  return (0);

 FUNC_6(VAR_8->age_cdata.age_rr_ring_tag,
     VAR_8->age_cdata.age_rr_ring_map,
     VAR_3 | VAR_4);
 FUNC_6(VAR_8->age_cdata.age_rx_ring_tag,
     VAR_8->age_cdata.age_rx_ring_map, VAR_4);

 for (VAR_15 = 0; VAR_12 != VAR_9; VAR_15++) {
  if (VAR_10-- <= 0)
   break;
  VAR_11 = &VAR_8->age_rdata.age_rr_ring[VAR_12];
  VAR_13 = FUNC_4(FUNC_8(VAR_11->index));
  if (VAR_13 == 0)
   break;






  VAR_14 = FUNC_3(FUNC_8(VAR_11->len));
  if (VAR_13 != FUNC_7(VAR_14, VAR_1))
   break;


  FUNC_5(VAR_8, VAR_11);

  VAR_11->index = 0;
  FUNC_1(VAR_12, VAR_0);
  VAR_8->age_cdata.age_rx_cons += VAR_13;
  VAR_8->age_cdata.age_rx_cons %= VAR_2;
 }

 if (VAR_15 > 0) {

  VAR_8->age_cdata.age_rr_cons = VAR_12;

  FUNC_6(VAR_8->age_cdata.age_rx_ring_tag,
      VAR_8->age_cdata.age_rx_ring_map, VAR_6);

  FUNC_6(VAR_8->age_cdata.age_rr_ring_tag,
      VAR_8->age_cdata.age_rr_ring_map,
      VAR_5 | VAR_6);


  FUNC_0(VAR_8);
 }

 return (VAR_10 > 0 ? 0 : VAR_7);
}
