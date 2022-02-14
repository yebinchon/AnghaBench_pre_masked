
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {struct ISCI_CONTROLLER* ich_arg; int * ich_func; } ;
struct isci_softc {int coalesce_number; int coalesce_timeout; int controller_count; TYPE_1__ config_hook; struct ISCI_CONTROLLER* controllers; int sci_library_handle; int oem_parameters_found; int pci_common_header; int device; int sci_library_memory; } ;
struct ISCI_CONTROLLER {int index; int scif_controller_handle; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_2 (struct ISCI_CONTROLLER*) ;
 int FUNC_3 (struct ISCI_CONTROLLER*,struct isci_softc*) ;
 int FUNC_4 (struct ISCI_CONTROLLER*) ;
 int VAR_18 ;
 int FUNC_5 (struct isci_softc*) ;
 int FUNC_6 (int ,char*,char*,...) ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

int
FUNC_18(struct isci_softc *VAR_19)
{
 int VAR_20;
 uint32_t VAR_21 = 0;
 uint32_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint8_t *VAR_26;

 VAR_22 = FUNC_16(VAR_15);

 VAR_19->sci_library_memory =
     FUNC_7(VAR_22, VAR_1, VAR_2 | VAR_3 );

 VAR_19->sci_library_handle = FUNC_15(
     VAR_19->sci_library_memory, VAR_15);

 FUNC_11( VAR_19->sci_library_handle, (void *)VAR_19);

 VAR_23 = (1<<VAR_11) |
     (1<<VAR_14) | (1<<VAR_12) |
     (1<<VAR_13);

 VAR_24 = 0xFFFFFFFF;
 VAR_24 &= ~VAR_4;
 VAR_24 &= ~VAR_7;
 VAR_24 &= ~VAR_8;
 VAR_24 &= ~VAR_6;
 VAR_24 &= ~VAR_5;

 VAR_25 = 0xFFFFFFFF;
 VAR_25 &= ~VAR_9;
 VAR_25 &= ~VAR_10;

 FUNC_0("hw.isci.debug_level", &VAR_17);

 FUNC_9(FUNC_10(VAR_19->sci_library_handle),
     VAR_25, VAR_23);

 FUNC_9(FUNC_10(
     FUNC_17(VAR_19->sci_library_handle)),
     VAR_24, VAR_23);

 VAR_26 = (uint8_t *)&VAR_19->pci_common_header;
 for (uint8_t VAR_27 = 0; VAR_27 < sizeof(VAR_19->pci_common_header); VAR_27++)
  VAR_26[VAR_27] = FUNC_8(VAR_19->device, VAR_27, 1);

 FUNC_13(
     FUNC_17(VAR_19->sci_library_handle),
     &VAR_19->pci_common_header);

 VAR_19->oem_parameters_found = VAR_0;

 FUNC_5(VAR_19);


 VAR_19->coalesce_number = 32;




 VAR_19->coalesce_timeout = 2;

 VAR_19->controller_count = FUNC_12(
     FUNC_17(VAR_19->sci_library_handle));

 for (int VAR_28 = 0; VAR_28 < VAR_19->controller_count; VAR_28++) {
  struct ISCI_CONTROLLER *VAR_29 = &VAR_19->controllers[VAR_28];
  SCI_CONTROLLER_HANDLE_T VAR_30;

  VAR_29->index = VAR_28;
  FUNC_3(VAR_29, VAR_19);

  VAR_30 = VAR_29->scif_controller_handle;

  VAR_21 = FUNC_4(VAR_29);

  if(VAR_21 != VAR_16) {
   FUNC_6(0, "ISCI",
       "isci_controller_initialize FAILED: %x\n",
       VAR_21);
   return (VAR_21);
  }

  VAR_20 = FUNC_2(VAR_29);

  if (VAR_20 != 0)
   return (VAR_20);

  FUNC_14(
      VAR_30, VAR_19->coalesce_number,
      VAR_19->coalesce_timeout);
 }







 VAR_19->config_hook.ich_func = &VAR_18;
 VAR_19->config_hook.ich_arg = &VAR_19->controllers[0];

 if (FUNC_1(&VAR_19->config_hook) != 0)
  FUNC_6(0, "ISCI",
      "config_intrhook_establish failed!\n");

 return (VAR_21);
}
