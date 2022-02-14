
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int
FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1)
{
 FUNC_0(VAR_0, &VAR_0->dma_buffer);

 return 0;
}
