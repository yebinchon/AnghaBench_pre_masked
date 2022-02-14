
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {int dma_buffer; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; struct omap_runtime_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct omap_runtime_data {int dma_ch; struct omap_pcm_dma_data* dma_data; } ;
struct omap_pcm_dma_data {int name; int dma_req; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct omap_pcm_dma_data* dma_data; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,struct snd_pcm_substream*,int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
         struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct omap_runtime_data *VAR_5 = VAR_3->private_data;
 struct omap_pcm_dma_data *VAR_6 = VAR_4->dai->cpu_dai->dma_data;
 int VAR_7 = 0;



 if (!VAR_6)
  return 0;

 FUNC_3(VAR_1, &VAR_1->dma_buffer);
 VAR_3->dma_bytes = FUNC_2(VAR_2);

 if (VAR_5->dma_data)
  return 0;
 VAR_5->dma_data = VAR_6;
 VAR_7 = FUNC_1(VAR_6->dma_req, VAR_6->name,
          VAR_0, VAR_1, &VAR_5->dma_ch);
 if (!VAR_7) {




  FUNC_0(VAR_5->dma_ch, VAR_5->dma_ch);
 }

 return VAR_7;
}
