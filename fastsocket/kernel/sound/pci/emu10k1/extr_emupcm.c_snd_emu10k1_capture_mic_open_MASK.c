
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_min; int rate_max; int channels_min; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; int private_free; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int capture_ipr; int capture_idx_reg; int capture_bs_reg; int capture_ba_reg; int capture_inte; struct snd_pcm_substream* substream; int type; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {struct snd_pcm_substream* pcm_capture_mic_substream; int capture_mic_interrupt; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct snd_emu10k1_pcm* FUNC_0 (int,int ) ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_16)
{
 struct snd_emu10k1 *VAR_17 = FUNC_2(VAR_16);
 struct snd_emu10k1_pcm *VAR_18;
 struct snd_pcm_runtime *VAR_19 = VAR_16->runtime;

 VAR_18 = FUNC_0(sizeof(*VAR_18), VAR_3);
 if (VAR_18 == ((void*)0))
  return -VAR_2;
 VAR_18->emu = VAR_17;
 VAR_18->type = VAR_1;
 VAR_18->substream = VAR_16;
 VAR_18->capture_ipr = VAR_5|VAR_6;
 VAR_18->capture_inte = VAR_4;
 VAR_18->capture_ba_reg = VAR_7;
 VAR_18->capture_bs_reg = VAR_8;
 VAR_18->capture_idx_reg = VAR_17->audigy ? VAR_0 : VAR_9;
 VAR_16->runtime->private_data = VAR_18;
 VAR_16->runtime->private_free = VAR_15;
 VAR_19->hw = VAR_13;
 VAR_19->hw.rates = VAR_11;
 VAR_19->hw.rate_min = VAR_19->hw.rate_max = 8000;
 VAR_19->hw.channels_min = 1;
 VAR_17->capture_mic_interrupt = VAR_14;
 VAR_17->pcm_capture_mic_substream = VAR_16;
 FUNC_1(VAR_19, 0, VAR_10, &VAR_12);
 return 0;
}
