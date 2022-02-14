
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {int runtime; TYPE_3__* pstr; struct snd_soc_pcm_runtime* private_data; } ;
struct psc_dma_stream {scalar_t__ period_start; scalar_t__ period_current_pt; } ;
struct psc_dma {struct psc_dma_stream playback; struct psc_dma_stream capture; } ;
typedef int snd_pcm_uframes_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ stream; } ;
struct TYPE_5__ {TYPE_1__* cpu_dai; } ;
struct TYPE_4__ {struct psc_dma* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct psc_dma *VAR_3 = VAR_2->dai->cpu_dai->private_data;
 struct psc_dma_stream *VAR_4;
 dma_addr_t VAR_5;

 if (VAR_1->pstr->stream == VAR_0)
  VAR_4 = &VAR_3->capture;
 else
  VAR_4 = &VAR_3->playback;

 VAR_5 = VAR_4->period_current_pt - VAR_4->period_start;

 return FUNC_0(VAR_1->runtime, VAR_5);
}
