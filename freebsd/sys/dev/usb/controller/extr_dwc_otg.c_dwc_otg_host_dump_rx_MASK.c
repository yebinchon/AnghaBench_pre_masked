
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct dwc_otg_td {size_t max_packet_count; scalar_t__* channel; } ;
struct dwc_otg_softc {scalar_t__ sc_last_rx_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_1, struct dwc_otg_td *VAR_2)
{
 uint8_t VAR_3;

 if (VAR_1->sc_last_rx_status == 0)
  return;
 for (VAR_3 = 0; VAR_3 != VAR_2->max_packet_count; VAR_3++) {
  if (VAR_2->channel[VAR_3] >= VAR_0 ||
      VAR_2->channel[VAR_3] != FUNC_0(VAR_1->sc_last_rx_status))
   continue;
  FUNC_1(VAR_1);
  break;
 }
}
