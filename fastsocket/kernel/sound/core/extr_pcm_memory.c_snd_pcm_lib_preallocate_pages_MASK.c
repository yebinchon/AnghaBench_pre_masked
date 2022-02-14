
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; struct device* dev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct snd_pcm_substream {TYPE_2__ dma_buffer; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,size_t,size_t) ;

int FUNC_1(struct snd_pcm_substream *VAR_0,
      int VAR_1, struct device *VAR_2,
      size_t VAR_3, size_t VAR_4)
{
 VAR_0->dma_buffer.dev.type = VAR_1;
 VAR_0->dma_buffer.dev.dev = VAR_2;
 return FUNC_0(VAR_0, VAR_3, VAR_4);
}
