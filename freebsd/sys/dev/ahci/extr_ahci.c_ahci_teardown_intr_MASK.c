
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ahci_controller {TYPE_1__* interrupt; } ;
typedef int device_t ;
struct TYPE_2__ {int * argument; int * function; } ;


 intptr_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ahci_controller* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
    void *VAR_4)
{
 struct ahci_controller *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = (intptr_t)FUNC_0(VAR_2) & VAR_0;

 VAR_5->interrupt[VAR_6].function = ((void*)0);
 VAR_5->interrupt[VAR_6].argument = ((void*)0);
 return (0);
}
