
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ata_pci_controller {scalar_t__ legacy; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;




 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_6, device_t VAR_7, int VAR_8, int VAR_9,
    struct resource *VAR_10)
{

 if (FUNC_2(VAR_7) == VAR_5) {
  struct ata_pci_controller *VAR_11 = FUNC_4(VAR_6);
  int VAR_12 = ((struct ata_channel *)FUNC_4(VAR_7))->unit;

         if (VAR_8 == VAR_3) {
       switch (VAR_9) {
   case 128:
           return FUNC_0(FUNC_3(VAR_6), VAR_6,
    VAR_3,
    FUNC_1(0) + (VAR_12 << 3), VAR_10);
   case 129:
       return FUNC_0(FUNC_3(VAR_6), VAR_6,
    VAR_3,
    FUNC_1(1) + (VAR_12 << 3), VAR_10);
   default:
       return VAR_2;
   }
  }
  if (VAR_8 == VAR_4) {
   if (VAR_9 != VAR_0)
    return VAR_2;
   if (VAR_11->legacy) {
    return FUNC_0(FUNC_3(VAR_6), VAR_7,
        VAR_4, VAR_9, VAR_10);
   } else
    return 0;
  }
 } else {
  if (VAR_8 == VAR_4) {
   if (VAR_9 != VAR_0)
    return (VAR_2);
   return (0);
  } else {
   return (FUNC_0(FUNC_3(VAR_6), VAR_7,
       VAR_8, VAR_9, VAR_10));
  }
 }
 return (VAR_1);
}
