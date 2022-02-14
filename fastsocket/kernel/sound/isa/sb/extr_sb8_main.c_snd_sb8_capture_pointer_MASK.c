
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {scalar_t__ mode; int c_dma_size; int dma8; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 struct snd_sb* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_sb *VAR_2 = FUNC_2(VAR_1);
 size_t VAR_3;

 if (VAR_2->mode != VAR_0)
  return 0;
 VAR_3 = FUNC_1(VAR_2->dma8, VAR_2->c_dma_size);
 return FUNC_0(VAR_1->runtime, VAR_3);
}
