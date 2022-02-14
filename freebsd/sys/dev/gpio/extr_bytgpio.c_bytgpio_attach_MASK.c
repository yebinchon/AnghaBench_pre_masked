
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bytgpio_softc {int sc_npins; int* sc_pad_funcs; int * sc_mem_res; scalar_t__ sc_mem_rid; int * sc_busdev; int sc_dev; int sc_pinpad_map; int sc_bank_prefix; int sc_handle; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bytgpio_softc*,int,int ) ;
 int FUNC_2 (struct bytgpio_softc*) ;
 int FUNC_3 (struct bytgpio_softc*) ;
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
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int *) ;
 int VAR_14 ;
 int FUNC_8 (struct bytgpio_softc*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 struct bytgpio_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int * FUNC_11 (int ) ;
 int* FUNC_12 (int,int ,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_17)
{
 struct bytgpio_softc *VAR_18;
 ACPI_STATUS VAR_19;
 int VAR_20;
 int VAR_21;
 uint32_t VAR_22, VAR_23;

 VAR_18 = FUNC_9(VAR_17);
 VAR_18->sc_dev = VAR_17;
 VAR_18->sc_handle = FUNC_5(VAR_17);
 VAR_19 = FUNC_4(VAR_18->sc_handle, "_UID", &VAR_20);
 if (FUNC_0(VAR_19)) {
  FUNC_10(VAR_17, "failed to read _UID\n");
  return (VAR_2);
 }

 FUNC_3(VAR_18);

 switch (VAR_20) {
 case 129:
  VAR_18->sc_npins = VAR_10;
  VAR_18->sc_bank_prefix = VAR_9;
  VAR_18->sc_pinpad_map = VAR_15;
  break;
 case 130:
  VAR_18->sc_npins = VAR_7;
  VAR_18->sc_bank_prefix = VAR_6;
  VAR_18->sc_pinpad_map = VAR_14;
  break;
 case 128:
  VAR_18->sc_npins = VAR_12;
  VAR_18->sc_bank_prefix = VAR_11;
  VAR_18->sc_pinpad_map = VAR_16;
  break;
 default:
  FUNC_10(VAR_17, "invalid _UID value: %d\n", VAR_20);
  goto error;
 }

 VAR_18->sc_pad_funcs = FUNC_12(sizeof(int)*VAR_18->sc_npins, VAR_3,
     VAR_4 | VAR_5);

 VAR_18->sc_mem_rid = 0;
 VAR_18->sc_mem_res = FUNC_6(VAR_18->sc_dev,
     VAR_13, &VAR_18->sc_mem_rid, VAR_8);
 if (VAR_18->sc_mem_res == ((void*)0)) {
  FUNC_10(VAR_17, "can't allocate resource\n");
  goto error;
 }

 for (VAR_21 = 0; VAR_21 < VAR_18->sc_npins; VAR_21++) {
     VAR_22 = FUNC_1(VAR_18, VAR_21, VAR_0);
     VAR_23 = FUNC_8(VAR_18, VAR_22);
     VAR_18->sc_pad_funcs[VAR_21] = VAR_23 & VAR_1;
 }

 VAR_18->sc_busdev = FUNC_11(VAR_17);
 if (VAR_18->sc_busdev == ((void*)0)) {
  FUNC_2(VAR_18);
  FUNC_7(VAR_17, VAR_13,
      VAR_18->sc_mem_rid, VAR_18->sc_mem_res);
  return (VAR_2);
 }

 return (0);

error:
 FUNC_2(VAR_18);

 return (VAR_2);
}
