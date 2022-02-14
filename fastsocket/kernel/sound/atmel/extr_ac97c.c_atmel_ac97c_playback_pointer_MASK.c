
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ dma_addr; } ;
struct TYPE_2__ {int tx_chan; } ;
struct atmel_ac97c {TYPE_1__ dma; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 struct atmel_ac97c* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct atmel_ac97c *VAR_1 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 snd_pcm_uframes_t VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_1->dma.tx_chan);
 VAR_4 -= VAR_2->dma_addr;

 VAR_3 = FUNC_0(VAR_2, VAR_4);
 if (VAR_3 >= VAR_2->buffer_size)
  VAR_3 -= VAR_2->buffer_size;
 return VAR_3;
}
