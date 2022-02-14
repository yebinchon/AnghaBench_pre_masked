
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ata_pci_controller {int dummy; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (struct ata_pci_controller*) ;
 int FUNC_3 (struct ata_pci_controller*) ;



 int VAR_2 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5, u_int32_t *VAR_6)
{
 struct ata_pci_controller *VAR_7;
 struct ata_channel *VAR_8;
 device_t VAR_9;

 VAR_9 = FUNC_4(VAR_3);
 VAR_7 = FUNC_5(VAR_9);
 VAR_8 = FUNC_5(VAR_3);
 VAR_4 = (VAR_4 == 1) ? 1 : 0;
 switch (VAR_5) {
 case 128:
     VAR_5 = 0;
     break;
 case 130:
     VAR_5 = 1;
     break;
 case 129:
     VAR_5 = 2;
     break;
 default:
     return (VAR_2);
 }
 FUNC_2(VAR_7);
 FUNC_1(VAR_8, VAR_0, ((VAR_8->unit * 2 + VAR_4) << 8) + VAR_5);
 *VAR_6 = FUNC_0(VAR_8, VAR_1);
 FUNC_3(VAR_7);
 return (0);
}
