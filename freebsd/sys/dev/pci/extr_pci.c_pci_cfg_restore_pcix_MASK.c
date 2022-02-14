
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcix_command; scalar_t__ pcix_location; } ;
struct TYPE_4__ {TYPE_1__ pcix; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, struct pci_devinfo *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->cfg.pcix.pcix_location + VAR_0,
     VAR_2->cfg.pcix.pcix_command, 2);
}
