
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chvgpio_softc {scalar_t__* sc_pins; int * sc_irq_res; scalar_t__ sc_irq_rid; int * sc_mem_res; scalar_t__ sc_mem_rid; int * sc_busdev; int sc_dev; int intr_handle; int sc_ngroups; int sc_npins; int sc_pin_names; int sc_bank_prefix; int sc_handle; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct chvgpio_softc*) ;
 int FUNC_2 (struct chvgpio_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,scalar_t__*,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int *) ;
 int FUNC_7 (int ,int *,int,int *,int ,struct chvgpio_softc*,int *) ;
 int FUNC_8 (int *,int ,int) ;
 int VAR_13 ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;
 scalar_t__* VAR_20 ;
 int VAR_21 ;
 struct chvgpio_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int * FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_22)
{
 struct chvgpio_softc *VAR_23;
 ACPI_STATUS VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_23 = FUNC_9(VAR_22);
 VAR_23->sc_dev = VAR_22;
 VAR_23->sc_handle = FUNC_4(VAR_22);

 VAR_24 = FUNC_3(VAR_23->sc_handle, "_UID", &VAR_25);
 if (FUNC_0(VAR_24)) {
  FUNC_10(VAR_22, "failed to read _UID\n");
  return (VAR_3);
 }

 FUNC_2(VAR_23);

 switch (VAR_25) {
 case 128:
  VAR_23->sc_bank_prefix = VAR_10;
  VAR_23->sc_pins = VAR_20;
  VAR_23->sc_pin_names = VAR_19;
  break;
 case 130:
  VAR_23->sc_bank_prefix = VAR_7;
  VAR_23->sc_pins = VAR_16;
  VAR_23->sc_pin_names = VAR_15;
  break;
 case 131:
  VAR_23->sc_bank_prefix = VAR_4;
  VAR_23->sc_pins = VAR_14;
  VAR_23->sc_pin_names = VAR_13;
  break;
 case 129:
  VAR_23->sc_bank_prefix = VAR_9;
  VAR_23->sc_pins = VAR_18;
  VAR_23->sc_pin_names = VAR_17;
  break;
 default:
  FUNC_10(VAR_22, "invalid _UID value: %d\n", VAR_25);
  return (VAR_3);
 }

 for (VAR_26 = 0; VAR_23->sc_pins[VAR_26] >= 0; VAR_26++) {
  VAR_23->sc_npins += VAR_23->sc_pins[VAR_26];
  VAR_23->sc_ngroups++;
 }

 VAR_23->sc_mem_rid = 0;
 VAR_23->sc_mem_res = FUNC_5(VAR_23->sc_dev, VAR_12,
  &VAR_23->sc_mem_rid, VAR_8);
 if (VAR_23->sc_mem_res == ((void*)0)) {
  FUNC_1(VAR_23);
  FUNC_10(VAR_22, "can't allocate memory resource\n");
  return (VAR_2);
 }

 VAR_23->sc_irq_res = FUNC_5(VAR_22, VAR_11,
  &VAR_23->sc_irq_rid, VAR_8);

 if (!VAR_23->sc_irq_res) {
  FUNC_1(VAR_23);
  FUNC_6(VAR_22, VAR_12,
   VAR_23->sc_mem_rid, VAR_23->sc_mem_res);
  FUNC_10(VAR_22, "can't allocate irq resource\n");
  return (VAR_2);
 }

 VAR_27 = FUNC_7(VAR_23->sc_dev, VAR_23->sc_irq_res, VAR_6 | VAR_5,
  ((void*)0), VAR_21, VAR_23, &VAR_23->intr_handle);


 if (VAR_27) {
  FUNC_10(VAR_23->sc_dev, "unable to setup irq: error %d\n", VAR_27);
  FUNC_1(VAR_23);
  FUNC_6(VAR_22, VAR_12,
   VAR_23->sc_mem_rid, VAR_23->sc_mem_res);
  FUNC_6(VAR_22, VAR_11,
   VAR_23->sc_irq_rid, VAR_23->sc_irq_res);
  return (VAR_3);
 }


 FUNC_8(VAR_23->sc_mem_res, VAR_0, 0);
 FUNC_8(VAR_23->sc_mem_res, VAR_1, 0xffff);

 VAR_23->sc_busdev = FUNC_11(VAR_22);
 if (VAR_23->sc_busdev == ((void*)0)) {
  FUNC_1(VAR_23);
  FUNC_6(VAR_22, VAR_12,
   VAR_23->sc_mem_rid, VAR_23->sc_mem_res);
  FUNC_6(VAR_22, VAR_11,
   VAR_23->sc_irq_rid, VAR_23->sc_irq_res);
  return (VAR_3);
 }

 return (0);
}
