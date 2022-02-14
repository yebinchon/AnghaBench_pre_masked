
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_CONTROLLER {int unmap_buffer_pool; } ;
struct TYPE_3__ {int virtual_address; } ;
typedef TYPE_1__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(SCI_CONTROLLER_HANDLE_T VAR_0,
    SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_1)
{
 struct ISCI_CONTROLLER *VAR_2 = (struct ISCI_CONTROLLER *)
     FUNC_0(VAR_0);






 FUNC_1(VAR_2->unmap_buffer_pool,
     VAR_1->virtual_address);
}
