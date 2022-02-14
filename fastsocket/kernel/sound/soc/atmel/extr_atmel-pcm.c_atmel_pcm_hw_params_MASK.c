
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {int dma_buffer; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; scalar_t__ dma_addr; struct atmel_runtime_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atmel_runtime_data {int period_size; TYPE_3__* params; scalar_t__ dma_buffer_end; scalar_t__ dma_buffer; } ;
struct TYPE_6__ {int name; int dma_intr_handler; } ;
struct TYPE_5__ {TYPE_1__* cpu_dai; } ;
struct TYPE_4__ {TYPE_3__* dma_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (char*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
 struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct atmel_runtime_data *VAR_4 = VAR_3->private_data;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_1->private_data;




 FUNC_3(VAR_1, &VAR_1->dma_buffer);
 VAR_3->dma_bytes = FUNC_0(VAR_2);

 VAR_4->params = VAR_5->dai->cpu_dai->dma_data;
 VAR_4->params->dma_intr_handler = VAR_0;

 VAR_4->dma_buffer = VAR_3->dma_addr;
 VAR_4->dma_buffer_end = VAR_3->dma_addr + VAR_3->dma_bytes;
 VAR_4->period_size = FUNC_1(VAR_2);

 FUNC_2("atmel-pcm: "
  "hw_params: DMA for %s initialized "
  "(dma_bytes=%u, period_size=%u)\n",
  VAR_4->params->name,
  VAR_3->dma_bytes,
  VAR_4->period_size);
 return 0;
}
