
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ti_gpio_softc {scalar_t__ sc_bank; } ;
typedef int device_t ;
typedef scalar_t__ clk_ident_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ti_gpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct ti_gpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct ti_gpio_softc*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct ti_gpio_softc*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9)
{
 int VAR_10;
 struct ti_gpio_softc *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
 clk_ident_t VAR_16;

 VAR_11 = FUNC_1(VAR_9);


 VAR_16 = FUNC_8(VAR_9);
 if (VAR_16 == VAR_4) {
  FUNC_2(VAR_9, "failed to get device id based on ti,hwmods\n");
  return (VAR_0);
 }

 VAR_11->sc_bank = VAR_16 - VAR_1 + FUNC_3();
 FUNC_9(VAR_16);






 VAR_15 = FUNC_5(VAR_11, VAR_7);


 if (VAR_15 != FUNC_6()) {
  FUNC_2(VAR_9, "Warning: could not determine the revision "
      "of GPIO module (revision:0x%08x)\n", VAR_15);
  return (VAR_0);
 }


 FUNC_4(VAR_11, 0xffffffff);


 VAR_13 = 0xffffffff;
 VAR_14 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_0(VAR_9, VAR_10, &VAR_12);
  if (VAR_12 & VAR_2) {
   VAR_13 &= ~(1UL << VAR_10);
   if (VAR_12 & VAR_3)
    VAR_14 |= (1UL << VAR_10);
  }
 }
 FUNC_7(VAR_11, VAR_6, VAR_13);
 if (VAR_14)
  FUNC_7(VAR_11, VAR_8, VAR_14);

 return (0);
}
