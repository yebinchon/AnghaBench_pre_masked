
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dma_data_synth_last; int dma_data_pcm_last; struct snd_gf1_dma_block* dma_data_synth; struct snd_gf1_dma_block* dma_data_pcm; int dma1; int dma_shared; } ;
struct snd_gus_card {int dma_mutex; TYPE_1__ gf1; } ;
struct snd_gf1_dma_block {struct snd_gf1_dma_block* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gf1_dma_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_gus_card*) ;
 int FUNC_5 (struct snd_gus_card*,int ) ;

int FUNC_6(struct snd_gus_card * VAR_1)
{
 struct snd_gf1_dma_block *VAR_2;

 FUNC_1(&VAR_1->dma_mutex);
 VAR_1->gf1.dma_shared--;
 if (!VAR_1->gf1.dma_shared) {
  FUNC_3(VAR_1->gf1.dma1);
  FUNC_5(VAR_1, VAR_0);
  FUNC_4(VAR_1);
  while ((VAR_2 = VAR_1->gf1.dma_data_pcm)) {
   VAR_1->gf1.dma_data_pcm = VAR_2->next;
   FUNC_0(VAR_2);
  }
  while ((VAR_2 = VAR_1->gf1.dma_data_synth)) {
   VAR_1->gf1.dma_data_synth = VAR_2->next;
   FUNC_0(VAR_2);
  }
  VAR_1->gf1.dma_data_pcm_last =
  *(VAR_1->gf1.dma_data_synth_last = ((void*)0));
 }
 FUNC_2(&VAR_1->dma_mutex);
 return 0;
}
