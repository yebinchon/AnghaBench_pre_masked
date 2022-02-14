
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ps3_card_info {scalar_t__* dma_last_transfer_vaddr; scalar_t__* dma_next_transfer_vaddr; scalar_t__* dma_start_vaddr; int dma_buffer_size; } ;
typedef enum snd_ps3_ch { ____Placeholder_snd_ps3_ch } snd_ps3_ch ;



__attribute__((used)) static void FUNC_0(struct snd_ps3_card_info *VAR_0,
    enum snd_ps3_ch VAR_1, size_t VAR_2,
    int VAR_3)
{
 if (!VAR_3)
  VAR_0->dma_last_transfer_vaddr[VAR_1] =
   VAR_0->dma_next_transfer_vaddr[VAR_1];
 VAR_0->dma_next_transfer_vaddr[VAR_1] += VAR_2;
 if ((VAR_0->dma_start_vaddr[VAR_1] + (VAR_0->dma_buffer_size / 2)) <=
     VAR_0->dma_next_transfer_vaddr[VAR_1]) {
  VAR_0->dma_next_transfer_vaddr[VAR_1] = VAR_0->dma_start_vaddr[VAR_1];
 }
}
