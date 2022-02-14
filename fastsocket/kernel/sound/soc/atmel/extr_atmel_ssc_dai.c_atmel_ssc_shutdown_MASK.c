
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct atmel_ssc_info {int dir_mask; int lock; scalar_t__ rcmr_period; scalar_t__ tcmr_period; scalar_t__ cmr_div; TYPE_4__* ssc; scalar_t__ initialized; struct atmel_pcm_dma_params** dma_params; } ;
struct atmel_pcm_dma_params {int * substream; int * ssc; TYPE_3__* mask; } ;
struct TYPE_8__ {int regs; int irq; int clk; } ;
struct TYPE_7__ {int ssc_disable; } ;
struct TYPE_6__ {TYPE_1__* cpu_dai; } ;
struct TYPE_5__ {size_t id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct atmel_ssc_info*) ;
 int FUNC_3 (char*,...) ;
 struct snd_soc_pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct atmel_ssc_info* VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct snd_pcm_substream *VAR_5,
          struct snd_soc_dai *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = FUNC_4(VAR_5);
 struct atmel_ssc_info *VAR_8 = &VAR_4[VAR_7->dai->cpu_dai->id];
 struct atmel_pcm_dma_params *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_5->stream == VAR_2)
  VAR_10 = 0;
 else
  VAR_10 = 1;

 VAR_9 = VAR_8->dma_params[VAR_10];

 if (VAR_9 != ((void*)0)) {
  FUNC_8(VAR_8->ssc->regs, VAR_0, VAR_9->mask->ssc_disable);
  FUNC_3("atmel_ssc_shutdown: %s disabled SSC_SR=0x%08x\n",
   (VAR_10 ? "receive" : "transmit"),
   FUNC_7(VAR_8->ssc->regs, VAR_3));

  VAR_9->ssc = ((void*)0);
  VAR_9->substream = ((void*)0);
  VAR_8->dma_params[VAR_10] = ((void*)0);
 }

 VAR_11 = 1 << VAR_10;

 FUNC_5(&VAR_8->lock);
 VAR_8->dir_mask &= ~VAR_11;
 if (!VAR_8->dir_mask) {
  if (VAR_8->initialized) {

   FUNC_3("atmel_ssc_dau: Stopping clock\n");
   FUNC_1(VAR_8->ssc->clk);

   FUNC_2(VAR_8->ssc->irq, VAR_8);
   VAR_8->initialized = 0;
  }


  FUNC_8(VAR_8->ssc->regs, VAR_0, FUNC_0(VAR_1));

  VAR_8->cmr_div = VAR_8->tcmr_period = VAR_8->rcmr_period = 0;
 }
 FUNC_6(&VAR_8->lock);
}
