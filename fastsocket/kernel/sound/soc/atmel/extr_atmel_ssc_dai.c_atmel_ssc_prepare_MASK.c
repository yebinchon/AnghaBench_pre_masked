
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_4__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct atmel_ssc_info {TYPE_2__* ssc; struct atmel_pcm_dma_params** dma_params; } ;
struct atmel_pcm_dma_params {TYPE_1__* mask; } ;
struct TYPE_8__ {TYPE_3__* cpu_dai; } ;
struct TYPE_7__ {size_t id; } ;
struct TYPE_6__ {int regs; } ;
struct TYPE_5__ {int ssc_enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 struct snd_soc_pcm_runtime* FUNC_1 (struct snd_pcm_substream*) ;
 struct atmel_ssc_info* VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = FUNC_1(VAR_4);
 struct atmel_ssc_info *VAR_7 = &VAR_3[VAR_6->dai->cpu_dai->id];
 struct atmel_pcm_dma_params *VAR_8;
 int VAR_9;

 if (VAR_4->stream == VAR_1)
  VAR_9 = 0;
 else
  VAR_9 = 1;

 VAR_8 = VAR_7->dma_params[VAR_9];

 FUNC_3(VAR_7->ssc->regs, VAR_0, VAR_8->mask->ssc_enable);

 FUNC_0("%s enabled SSC_SR=0x%08x\n",
   VAR_9 ? "receive" : "transmit",
   FUNC_2(VAR_7->ssc->regs, VAR_2));
 return 0;
}
