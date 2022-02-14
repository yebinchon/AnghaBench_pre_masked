
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; int dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t dma_bytes; int dma_addr; struct pxa2xx_runtime_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pxa2xx_runtime_data {int dma_desc_array_phys; TYPE_1__* params; TYPE_2__* dma_desc_array; } ;
struct TYPE_4__ {int ddadr; int dsadr; int dtadr; size_t dcmd; } ;
typedef TYPE_2__ pxa_dma_desc ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev_addr; size_t dcmd; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (struct snd_pcm_hw_params*) ;
 size_t FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;

int FUNC_3(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct pxa2xx_runtime_data *VAR_5 = VAR_4->private_data;
 size_t VAR_6 = FUNC_0(VAR_3);
 size_t VAR_7 = FUNC_1(VAR_3);
 pxa_dma_desc *VAR_8;
 dma_addr_t VAR_9, VAR_10;

 FUNC_2(VAR_2, &VAR_2->dma_buffer);
 VAR_4->dma_bytes = VAR_6;

 VAR_8 = VAR_5->dma_desc_array;
 VAR_10 = VAR_5->dma_desc_array_phys;
 VAR_9 = VAR_4->dma_addr;
 do {
  VAR_10 += sizeof(pxa_dma_desc);
  VAR_8->ddadr = VAR_10;
  if (VAR_2->stream == VAR_1) {
   VAR_8->dsadr = VAR_9;
   VAR_8->dtadr = VAR_5->params->dev_addr;
  } else {
   VAR_8->dsadr = VAR_5->params->dev_addr;
   VAR_8->dtadr = VAR_9;
  }
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;
  VAR_8->dcmd = VAR_5->params->dcmd | VAR_7 | VAR_0;
  VAR_8++;
  VAR_9 += VAR_7;
 } while (VAR_6 -= VAR_7);
 VAR_8[-1].ddadr = VAR_5->dma_desc_array_phys;

 return 0;
}
