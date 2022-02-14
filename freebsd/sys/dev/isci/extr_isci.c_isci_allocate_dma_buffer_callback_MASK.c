
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_MEMORY {int error; int physical_address; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int ,char*,char*) ;

void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1,
    int VAR_2, int VAR_3)
{
 struct ISCI_MEMORY *VAR_4 = (struct ISCI_MEMORY *)VAR_0;

 VAR_4->error = VAR_3;

 if (VAR_2 != 1 || VAR_3 != 0)
  FUNC_0(0, "ISCI",
      "Failed to allocate physically contiguous memory!\n");
 else
  VAR_4->physical_address = VAR_1->ds_addr;
}
