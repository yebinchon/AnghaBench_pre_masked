
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ISCI_REQUEST {scalar_t__ physical_address; } ;
struct TYPE_2__ {scalar_t__ physical_address; scalar_t__ virtual_address; } ;
struct ISCI_CONTROLLER {TYPE_1__ uncached_controller_memory; } ;
typedef scalar_t__ U64 ;
typedef scalar_t__ SCI_PHYSICAL_ADDRESS ;
typedef void* SCI_IO_REQUEST_HANDLE_T ;
typedef void* SCI_CONTROLLER_HANDLE_T ;


 void* FUNC_0 (void*) ;

void
FUNC_1(SCI_CONTROLLER_HANDLE_T VAR_0,
    SCI_IO_REQUEST_HANDLE_T VAR_1, void *VAR_2,
    SCI_PHYSICAL_ADDRESS *VAR_3)
{
 SCI_IO_REQUEST_HANDLE_T VAR_4 =
     FUNC_0(VAR_1);
 struct ISCI_REQUEST *VAR_5 =
     FUNC_0(VAR_4);

 if(VAR_5 != ((void*)0)) {






  *VAR_3 = VAR_5->physical_address +
      (uintptr_t)VAR_2 -
      (uintptr_t)VAR_5;
 } else {







  SCI_CONTROLLER_HANDLE_T VAR_6 =
      (SCI_CONTROLLER_HANDLE_T) FUNC_0(VAR_0);
  struct ISCI_CONTROLLER *VAR_7 =
      (struct ISCI_CONTROLLER *)FUNC_0(VAR_6);
  U64 VAR_8 = (uintptr_t)VAR_2 -
      (U64)VAR_7->uncached_controller_memory.virtual_address;

  *VAR_3 =
      VAR_7->uncached_controller_memory.physical_address
      + VAR_8;
 }
}
