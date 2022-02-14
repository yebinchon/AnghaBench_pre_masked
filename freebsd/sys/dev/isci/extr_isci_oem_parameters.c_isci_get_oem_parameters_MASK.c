
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct rom_header {int pcir_pointer; } ;
struct pcir_header {scalar_t__ vendor_id; scalar_t__ device_id; } ;
struct oem_parameters_table {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ vendor_id; scalar_t__ device_id; } ;
struct isci_softc {TYPE_3__* controllers; int oem_parameters_found; TYPE_1__ pci_common_header; } ;
struct TYPE_9__ {int num_elements; int version; } ;
struct TYPE_10__ {TYPE_4__ header; int * controller_element; } ;
struct TYPE_7__ {int sds1; } ;
struct TYPE_8__ {int oem_parameters_version; TYPE_2__ oem_parameters; } ;
typedef TYPE_5__ SCI_BIOS_OEM_PARAM_BLOCK_T ;
typedef int SCIC_SDS_OEM_PARAMETERS_T ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (int *,int *,int) ;

void
FUNC_3(struct isci_softc *VAR_1)
{
 uint32_t VAR_2 = 0xC0000;
 uint32_t VAR_3 = 0x30000;
 uint16_t VAR_4 = 0xAA55;
 uint32_t VAR_5 = 512;
 uint8_t *VAR_6 =
     (uint8_t *)FUNC_0(VAR_2);
 uint32_t VAR_7 = 0;

 while (VAR_7 < VAR_3) {




  if (*(uint16_t*)(VAR_6 + VAR_7) == VAR_4) {
   uint32_t *VAR_8;
   struct rom_header *VAR_9;
   struct pcir_header *VAR_10;
   uint16_t VAR_11 = VAR_1->pci_common_header.vendor_id;
   uint16_t VAR_12 = VAR_1->pci_common_header.device_id;

   VAR_8 = (uint32_t *)(VAR_6 + VAR_7);
   VAR_9 = (struct rom_header *)VAR_8;
   VAR_10 = (struct pcir_header *)
       ((uint8_t*)VAR_8 + VAR_9->pcir_pointer);




   if (VAR_10->vendor_id == VAR_11 &&
       VAR_10->device_id == VAR_12)
   {





    uint8_t VAR_13[4] = {'$', 'O', 'E', 'M'};
    int VAR_14;

    for (VAR_14 = 0;
        VAR_14 < VAR_5/sizeof(uint32_t);
        VAR_14++)
     if (VAR_8[VAR_14] == *(uint32_t *)VAR_13) {





      struct oem_parameters_table *VAR_15 =
       (struct oem_parameters_table *)&VAR_8[VAR_14];
      SCI_BIOS_OEM_PARAM_BLOCK_T *VAR_16 =
       (SCI_BIOS_OEM_PARAM_BLOCK_T *)VAR_15->data;
      int VAR_17;

      VAR_1->oem_parameters_found = VAR_0;
      FUNC_1(1, "ISCI", "oem_data->header.num_elements = %d\n",
          VAR_16->header.num_elements);

      for (VAR_17 = 0; VAR_17 < VAR_16->header.num_elements; VAR_17++)
      {
       FUNC_2(&VAR_1->controllers[VAR_17].oem_parameters.sds1,
              &VAR_16->controller_element[VAR_17],
              sizeof(SCIC_SDS_OEM_PARAMETERS_T));

       FUNC_1(1, "ISCI", "OEM Parameter Data for controller %d\n",
           VAR_17);

       for (int VAR_18 = 0; VAR_18 < sizeof(SCIC_SDS_OEM_PARAMETERS_T); VAR_18++) {
        uint8_t VAR_19 = ((uint8_t *)&VAR_16->controller_element[VAR_17])[VAR_18];
        FUNC_1(1, "ISCI", "%02x ", VAR_19);
       }
       FUNC_1(1, "ISCI", "\n");
       VAR_1->controllers[VAR_17].oem_parameters_version = VAR_16->header.version;
      }
     }





    return;
   }
  }

  VAR_7 += VAR_5;
 }
}
