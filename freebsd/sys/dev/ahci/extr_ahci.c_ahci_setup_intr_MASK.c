
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ahci_controller {TYPE_1__* interrupt; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {void* argument; int * function; } ;


 intptr_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ahci_controller* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
    int VAR_5, driver_filter_t *VAR_6, driver_intr_t *VAR_7,
    void *VAR_8, void **VAR_9)
{
 struct ahci_controller *VAR_10 = FUNC_1(VAR_2);
 int VAR_11 = (intptr_t)FUNC_0(VAR_3) & VAR_0;

 if (VAR_6 != ((void*)0)) {
  FUNC_2("ahci.c: we cannot use a filter here\n");
  return (VAR_1);
 }
 VAR_10->interrupt[VAR_11].function = VAR_7;
 VAR_10->interrupt[VAR_11].argument = VAR_8;
 return (0);
}
