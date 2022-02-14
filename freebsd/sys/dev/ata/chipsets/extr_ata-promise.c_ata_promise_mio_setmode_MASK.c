
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, int VAR_5, int VAR_6)
{
        struct ata_pci_controller *VAR_7 = FUNC_3(FUNC_2(VAR_4));
        struct ata_channel *VAR_8 = FUNC_3(VAR_4);

        if ( (VAR_7->chip->cfg2 == VAR_2) ||
         ((VAR_7->chip->cfg2 == VAR_0) && (VAR_8->unit < 2)) ||
      (VAR_7->chip->cfg2 == VAR_3) ||
     ((VAR_7->chip->cfg2 == VAR_1) && (VAR_8->unit < 2)))
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_6);
 else
  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_6);
 return (VAR_6);
}
