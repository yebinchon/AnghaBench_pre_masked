
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ps3_card_info {int* dma_start_bus_addr; void** dma_start_vaddr; } ;
typedef int dma_addr_t ;



__attribute__((used)) static dma_addr_t FUNC_0(struct snd_ps3_card_info *VAR_0, void *VAR_1, int VAR_2)
{
 return VAR_0->dma_start_bus_addr[VAR_2] +
  (VAR_1 - VAR_0->dma_start_vaddr[VAR_2]);
}
