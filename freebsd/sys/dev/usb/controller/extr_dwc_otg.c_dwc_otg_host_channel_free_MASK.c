
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct dwc_otg_td {scalar_t__ max_packet_count; } ;
struct dwc_otg_softc {int dummy; } ;


 int FUNC_0 (struct dwc_otg_softc*,struct dwc_otg_td*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct dwc_otg_softc *VAR_0, struct dwc_otg_td *VAR_1)
{
 uint8_t VAR_2;
 for (VAR_2 = 0; VAR_2 != VAR_1->max_packet_count; VAR_2++)
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
