
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dwc_otg_softc {unsigned int sc_active_rx_ep; int* sc_in_ctl; int* sc_out_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct dwc_otg_softc*,int,int) ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (struct dwc_otg_softc*) ;
 int FUNC_9 (struct dwc_otg_softc*) ;
 int FUNC_10 (struct dwc_otg_softc*,int) ;

__attribute__((used)) static void
FUNC_11(struct dwc_otg_softc *VAR_11, uint32_t VAR_12,
    uint8_t VAR_13, uint8_t VAR_14, uint8_t VAR_15)
{
 uint32_t VAR_16;
 uint32_t VAR_17;

 if (VAR_14 == VAR_9) {

  return;
 }

 if (VAR_15) {
  VAR_16 = FUNC_3(VAR_13);
 } else {
  VAR_16 = FUNC_5(VAR_13);
  VAR_11->sc_active_rx_ep |= (1U << VAR_13);
 }


 VAR_12 = (VAR_12 + 3) & 0x7FC;

 if (VAR_14 == VAR_8) {
  VAR_17 = FUNC_0(
      VAR_0) |
      VAR_4;
 } else if (VAR_14 == VAR_10) {
  VAR_17 = FUNC_0(
      VAR_1) |
      VAR_4;
 } else {
  VAR_17 = FUNC_0(
      VAR_2) |
      VAR_4;
 }

 VAR_17 |= FUNC_1(VAR_12);
 VAR_17 |= FUNC_2(VAR_13);

 if (VAR_15)
  VAR_11->sc_in_ctl[VAR_13] = VAR_17;
 else
  VAR_11->sc_out_ctl[VAR_13] = VAR_17;

 FUNC_6(VAR_11, VAR_16, VAR_17 | VAR_5);
 FUNC_6(VAR_11, VAR_16, VAR_17 | VAR_6);
 FUNC_6(VAR_11, VAR_16, VAR_17 | VAR_3);


 if (VAR_15) {
  FUNC_10(VAR_11,
      FUNC_7(VAR_13) |
      VAR_7);

  FUNC_6(VAR_11,
      FUNC_4(VAR_13), 0);
 }


 FUNC_9(VAR_11);
 FUNC_8(VAR_11);
}
