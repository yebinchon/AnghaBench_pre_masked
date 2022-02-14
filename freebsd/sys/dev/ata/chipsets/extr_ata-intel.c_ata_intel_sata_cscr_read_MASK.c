
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct ata_pci_controller {int dummy; } ;
struct ata_channel {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct ata_pci_controller*) ;
 int* FUNC_1 (struct ata_pci_controller*,struct ata_channel*) ;
 int FUNC_2 (struct ata_pci_controller*) ;



 int VAR_0 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, int VAR_2, int VAR_3, u_int32_t *VAR_4)
{
 struct ata_pci_controller *VAR_5;
 struct ata_channel *VAR_6;
 device_t VAR_7;
 u_char *VAR_8;

 VAR_7 = FUNC_3(VAR_1);
 VAR_5 = FUNC_4(VAR_7);
 VAR_6 = FUNC_4(VAR_1);
 VAR_8 = FUNC_1(VAR_5, VAR_6);
 VAR_2 = (VAR_2 == 1) ? 1 : 0;
 switch (VAR_3) {
 case 128:
     VAR_3 = 0;
     break;
 case 129:
     VAR_3 = 1;
     break;
 case 130:
     VAR_3 = 2;
     break;
 default:
     return (VAR_0);
 }
 FUNC_0(VAR_5);
 FUNC_6(VAR_7, 0xa0,
     0x50 + VAR_8[VAR_2] * 0x10 + VAR_3 * 4, 4);
 *VAR_4 = FUNC_5(VAR_7, 0xa4, 4);
 FUNC_2(VAR_5);
 return (0);
}
