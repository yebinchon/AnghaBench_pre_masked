
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atmel_runtime_data {struct atmel_pcm_dma_params* params; } ;
struct atmel_pcm_dma_params {int * dma_intr_handler; TYPE_3__* mask; TYPE_2__* ssc; } ;
struct TYPE_6__ {int pdc_disable; } ;
struct TYPE_5__ {int regs; } ;
struct TYPE_4__ {struct atmel_runtime_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct atmel_runtime_data *VAR_2 = VAR_1->runtime->private_data;
 struct atmel_pcm_dma_params *VAR_3 = VAR_2->params;

 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3->ssc->regs, VAR_0,
      VAR_3->mask->pdc_disable);
  VAR_2->params->dma_intr_handler = ((void*)0);
 }

 return 0;
}
