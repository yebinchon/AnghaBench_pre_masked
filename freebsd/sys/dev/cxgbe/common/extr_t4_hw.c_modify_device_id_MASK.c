
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_3__ {int code_type; int indicator; scalar_t__ device_id; } ;
typedef TYPE_1__ pcir_data_t ;
struct TYPE_4__ {int cksum; int size512; scalar_t__ pcir_offset; } ;
typedef TYPE_2__ legacy_pci_exp_rom_header_t ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, u8 *VAR_1)
{
 legacy_pci_exp_rom_header_t *VAR_2;
 pcir_data_t *VAR_3;
 u32 VAR_4 = 0;




 while (1) {
  VAR_2 = (legacy_pci_exp_rom_header_t *) &VAR_1[VAR_4];
  VAR_3 = (pcir_data_t *) &VAR_1[VAR_4 +
         FUNC_0(*(u16*)VAR_2->pcir_offset)];
  if (VAR_3->code_type == 0x00) {
   u8 VAR_5 = 0;
   int VAR_6;




   *(u16*) VAR_3->device_id = VAR_0;





   VAR_2->cksum = 0x0;




   for (VAR_6 = 0; VAR_6 < (VAR_2->size512 * 512); VAR_6++)
    VAR_5 += (u8)VAR_1[VAR_4 + VAR_6];





   VAR_1[VAR_4 + 7] = -VAR_5;

  } else if (VAR_3->code_type == 0x03) {




   *(u16*) VAR_3->device_id = VAR_0;

  }






  if (VAR_3->indicator & 0x80)
   break;




  VAR_4 += VAR_2->size512 * 512;
 }
}
