
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_CONTROLLER {int buffer_dma_tag; int unmap_buffer_pool; } ;
struct TYPE_3__ {int physical_address; int * virtual_address; int constant_memory_alignment; } ;
typedef TYPE_1__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int *,int ,int ,int *,int ) ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(SCI_CONTROLLER_HANDLE_T VAR_6,
    SCI_PHYSICAL_MEMORY_DESCRIPTOR_T *VAR_7)
{
 struct ISCI_CONTROLLER *VAR_8 = (struct ISCI_CONTROLLER *)
     FUNC_2(VAR_6);
 if (!FUNC_3(VAR_8->unmap_buffer_pool)) {
  FUNC_4(VAR_8->unmap_buffer_pool,
      VAR_7->virtual_address);
 } else
  VAR_7->virtual_address = FUNC_1(VAR_4,
      VAR_2, VAR_3, 0, VAR_1,
      VAR_7->constant_memory_alignment, 0);

 if (VAR_7->virtual_address != ((void*)0))
  FUNC_0(VAR_8->buffer_dma_tag,
      ((void*)0), VAR_7->virtual_address, VAR_4,
      VAR_5, &VAR_7->physical_address,
      VAR_0);
}
