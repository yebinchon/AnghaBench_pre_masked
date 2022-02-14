
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pcm_substream {int lock; int dma_off; } ;
struct pcm_runtime {scalar_t__ panic; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 struct pcm_runtime* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pcm_substream* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(
  struct snd_pcm_substream *VAR_1)
{
 struct pcm_substream *VAR_2 = FUNC_3(VAR_1);
 struct pcm_runtime *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 snd_pcm_uframes_t VAR_5;

 if (VAR_3->panic || !VAR_2)
  return VAR_0;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_5 = VAR_2->dma_off;
 FUNC_2(&VAR_2->lock, VAR_4);
 return VAR_5;
}
