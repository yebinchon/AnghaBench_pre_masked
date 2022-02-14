
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct snd_es1688 {int trigger_value; int dma_size; int dma8; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 struct snd_es1688* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_es1688 *VAR_1 = FUNC_2(VAR_0);
 size_t VAR_2;

 if (VAR_1->trigger_value != 0x0f)
  return 0;
 VAR_2 = FUNC_1(VAR_1->dma8, VAR_1->dma_size);
 return FUNC_0(VAR_0->runtime, VAR_2);
}
