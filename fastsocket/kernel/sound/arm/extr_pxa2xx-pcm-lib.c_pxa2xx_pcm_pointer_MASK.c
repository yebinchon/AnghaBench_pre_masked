
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ dma_addr; struct pxa2xx_runtime_data* private_data; } ;
struct pxa2xx_runtime_data {int dma_ch; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*,scalar_t__) ;

snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct pxa2xx_runtime_data *VAR_3 = VAR_2->private_data;

 dma_addr_t VAR_4 = (VAR_1->stream == VAR_0) ?
    FUNC_0(VAR_3->dma_ch) : FUNC_1(VAR_3->dma_ch);
 snd_pcm_uframes_t VAR_5 = FUNC_2(VAR_2, VAR_4 - VAR_2->dma_addr);

 if (VAR_5 == VAR_2->buffer_size)
  VAR_5 = 0;
 return VAR_5;
}
