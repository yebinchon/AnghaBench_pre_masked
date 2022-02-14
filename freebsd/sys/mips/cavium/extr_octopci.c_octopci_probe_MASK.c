
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {int bootloader_config_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 if (FUNC_3(VAR_2)) {
  FUNC_2(VAR_3, "Cavium Octeon PCIe bridge");
  return (0);
 }


 if ((FUNC_0()->bootloader_config_flags & VAR_0) == 0)
  return (VAR_1);

 if (FUNC_1(VAR_3) != 0)
  return (VAR_1);

 FUNC_2(VAR_3, "Cavium Octeon PCI bridge");
 return (0);
}
