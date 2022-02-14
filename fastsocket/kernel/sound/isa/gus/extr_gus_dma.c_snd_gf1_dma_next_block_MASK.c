
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_private_data; int dma_ack; struct snd_gf1_dma_block* dma_data_synth; struct snd_gf1_dma_block* dma_data_synth_last; struct snd_gf1_dma_block* dma_data_pcm; struct snd_gf1_dma_block* dma_data_pcm_last; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct snd_gf1_dma_block {int private_data; int ack; struct snd_gf1_dma_block* next; } ;



__attribute__((used)) static struct snd_gf1_dma_block *FUNC_0(struct snd_gus_card * VAR_0)
{
 struct snd_gf1_dma_block *VAR_1;


 if (VAR_0->gf1.dma_data_pcm) {
  VAR_1 = VAR_0->gf1.dma_data_pcm;
  if (VAR_0->gf1.dma_data_pcm_last == VAR_1) {
   VAR_0->gf1.dma_data_pcm =
   VAR_0->gf1.dma_data_pcm_last = ((void*)0);
  } else {
   VAR_0->gf1.dma_data_pcm = VAR_1->next;
  }
 } else if (VAR_0->gf1.dma_data_synth) {
  VAR_1 = VAR_0->gf1.dma_data_synth;
  if (VAR_0->gf1.dma_data_synth_last == VAR_1) {
   VAR_0->gf1.dma_data_synth =
   VAR_0->gf1.dma_data_synth_last = ((void*)0);
  } else {
   VAR_0->gf1.dma_data_synth = VAR_1->next;
  }
 } else {
  VAR_1 = ((void*)0);
 }
 if (VAR_1) {
  VAR_0->gf1.dma_ack = VAR_1->ack;
  VAR_0->gf1.dma_private_data = VAR_1->private_data;
 }
 return VAR_1;
}
