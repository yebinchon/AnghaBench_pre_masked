
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int (* getrev ) (int ,int) ;} ;
struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, int VAR_2)
{
 struct ata_pci_controller *VAR_3 = FUNC_1(FUNC_0(VAR_1));
 struct ata_channel *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->flags & VAR_0) {
  if (VAR_3->getrev)
   return (VAR_3->getrev(VAR_1, VAR_2));
  else
   return (0xff);
 } else
  return (0);
}
