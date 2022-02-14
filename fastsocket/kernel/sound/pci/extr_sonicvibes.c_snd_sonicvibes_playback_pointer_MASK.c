
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int enable; size_t p_dma_size; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,size_t) ;
 struct sonicvibes* FUNC_1 (struct snd_pcm_substream*) ;
 size_t FUNC_2 (struct sonicvibes*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct sonicvibes *VAR_1 = FUNC_1(VAR_0);
 size_t VAR_2;

 if (!(VAR_1->enable & 1))
  return 0;
 VAR_2 = VAR_1->p_dma_size - FUNC_2(VAR_1);
 return FUNC_0(VAR_0->runtime, VAR_2);
}
