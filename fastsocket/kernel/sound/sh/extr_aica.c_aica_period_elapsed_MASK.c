
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;
struct snd_card_aica {int current_period; int dma_check; int spu_dma_work; int timer; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{

 int VAR_5;
 struct snd_pcm_runtime *VAR_6;
 struct snd_pcm_substream *VAR_7;
 struct snd_card_aica *VAR_8;
 VAR_7 = (struct snd_pcm_substream *) VAR_4;
 VAR_6 = VAR_7->runtime;
 VAR_8 = VAR_7->pcm->private_data;

 VAR_5 =
     FUNC_0(VAR_6,
       FUNC_3
       (VAR_0)) /
     VAR_1;
 if (VAR_5 == VAR_8->current_period) {

  FUNC_1(&(VAR_8->timer), VAR_3 + 1);
  return;
 }
 if (VAR_6->channels > 1)
  VAR_8->current_period = VAR_5;
 if (FUNC_4(VAR_8->dma_check == 0))
  VAR_8->dma_check = 1;
 FUNC_2(VAR_2, &(VAR_8->spu_dma_work));
}
