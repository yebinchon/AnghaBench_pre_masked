
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int flags; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
 struct ata_pci_controller *VAR_6 = FUNC_2(FUNC_1(VAR_5));
 struct ata_channel *VAR_7 = FUNC_2(VAR_5);


 if (FUNC_0(VAR_5))
  return (VAR_3);
 VAR_7->flags |= VAR_0;
 VAR_7->flags |= VAR_1;
 if (VAR_6->chip->cfg1 == VAR_4)
  VAR_7->flags |= VAR_2;
 return (0);
}
