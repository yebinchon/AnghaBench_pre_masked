
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffec_softc {size_t rx_idx; int rxdesc_map; int rxdesc_tag; struct ffec_hwdesc* rxdesc_ring; int dev; } ;
struct ffec_hwdesc {int flags_len; int buf_paddr; } ;
typedef int boolean_t ;


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
 int FUNC_0 (struct ffec_softc*) ;
 int FUNC_1 (struct ffec_softc*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ffec_softc*,int) ;
 int FUNC_5 (struct ffec_softc*,size_t,int ) ;
 size_t FUNC_6 (struct ffec_softc*,size_t) ;

__attribute__((used)) static void
FUNC_7(struct ffec_softc *VAR_10)
{
 struct ffec_hwdesc *VAR_11;
 int VAR_12;
 boolean_t VAR_13;

 FUNC_0(VAR_10);


 FUNC_2(VAR_10->rxdesc_tag, VAR_10->rxdesc_map, VAR_2);
 FUNC_2(VAR_10->rxdesc_tag, VAR_10->rxdesc_map, VAR_0);
 VAR_13 = 0;
 for (;;) {
  VAR_11 = &VAR_10->rxdesc_ring[VAR_10->rx_idx];
  if (VAR_11->flags_len & VAR_6)
   break;
  VAR_13 = 1;
  VAR_12 = (VAR_11->flags_len & VAR_9);
  if (VAR_12 < 64) {



   FUNC_5(VAR_10, VAR_10->rx_idx,
       VAR_10->rxdesc_ring[VAR_10->rx_idx].buf_paddr);
  } else if ((VAR_11->flags_len & VAR_8) == 0) {
   FUNC_3(VAR_10->dev,
       "fec_rxfinish: received frame without LAST bit set");
   FUNC_5(VAR_10, VAR_10->rx_idx,
       VAR_10->rxdesc_ring[VAR_10->rx_idx].buf_paddr);
  } else if (VAR_11->flags_len & VAR_7) {







   FUNC_5(VAR_10, VAR_10->rx_idx,
       VAR_10->rxdesc_ring[VAR_10->rx_idx].buf_paddr);
  } else {



   FUNC_4(VAR_10, VAR_12);
  }
  VAR_10->rx_idx = FUNC_6(VAR_10, VAR_10->rx_idx);
 }

 if (VAR_13) {
  FUNC_2(VAR_10->rxdesc_tag, VAR_10->rxdesc_map, VAR_3);
  FUNC_1(VAR_10, VAR_5, VAR_4);
  FUNC_2(VAR_10->rxdesc_tag, VAR_10->rxdesc_map, VAR_1);
 }
}
