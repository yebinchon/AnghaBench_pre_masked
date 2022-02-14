
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct ata_pci_controller {int r_res2; } ;
struct ata_channel {int dummy; } ;
typedef int device_t ;


 int* FUNC_0 (struct ata_pci_controller*,struct ata_channel*) ;
 int FUNC_1 (int ,int,int ) ;



 int VAR_0 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, int VAR_2, int VAR_3, u_int32_t VAR_4)
{
 struct ata_pci_controller *VAR_5;
 struct ata_channel *VAR_6;
 device_t VAR_7;
 u_char *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_1);
 VAR_5 = FUNC_3(VAR_7);
 VAR_6 = FUNC_3(VAR_1);
 VAR_2 = (VAR_2 == 1) ? 1 : 0;
 VAR_8 = FUNC_0(VAR_5, VAR_6);
 VAR_9 = 0x100 + VAR_8[VAR_2] * 0x80;
 switch (VAR_3) {
 case 128:
     VAR_3 = 0x28;
     break;
 case 130:
     VAR_3 = 0x2c;
     break;
 case 129:
     VAR_3 = 0x30;
     break;
 default:
     return (VAR_0);
 }
 FUNC_1(VAR_5->r_res2, VAR_9 + VAR_3, VAR_4);
 return (0);
}
