
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {TYPE_3__* pstr; struct snd_soc_pcm_runtime* private_data; } ;
struct psc_dma_stream {int * stream; int active; } ;
struct psc_dma {TYPE_5__* psc_regs; int imr; struct psc_dma_stream capture; struct psc_dma_stream playback; int dev; } ;
struct TYPE_9__ {int imr; } ;
struct TYPE_10__ {int command; TYPE_4__ isr_imr; } ;
struct TYPE_8__ {scalar_t__ stream; } ;
struct TYPE_7__ {TYPE_1__* cpu_dai; } ;
struct TYPE_6__ {struct psc_dma* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_pcm_substream*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct psc_dma *VAR_3 = VAR_2->dai->cpu_dai->private_data;
 struct psc_dma_stream *VAR_4;

 FUNC_0(VAR_3->dev, "psc_dma_close(substream=%p)\n", VAR_1);

 if (VAR_1->pstr->stream == VAR_0)
  VAR_4 = &VAR_3->capture;
 else
  VAR_4 = &VAR_3->playback;

 if (!VAR_3->playback.active &&
     !VAR_3->capture.active) {


  FUNC_2(&VAR_3->psc_regs->isr_imr.imr, VAR_3->imr);
  FUNC_1(&VAR_3->psc_regs->command, 4 << 4);
 }
 VAR_4->stream = ((void*)0);
 return 0;
}
