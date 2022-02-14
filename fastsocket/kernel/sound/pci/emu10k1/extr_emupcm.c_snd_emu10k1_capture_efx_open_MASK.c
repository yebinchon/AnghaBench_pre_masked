
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int rate_min; int rate_max; int channels_min; int channels_max; int formats; void* rates; } ;
struct snd_pcm_runtime {TYPE_3__ hw; int private_free; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int capture_ipr; int capture_cr_val; int capture_cr_val2; int capture_idx_reg; int capture_bs_reg; int capture_ba_reg; int capture_inte; struct snd_pcm_substream* substream; int type; struct snd_emu10k1* emu; } ;
struct TYPE_5__ {int internal_clock; } ;
struct snd_emu10k1 {int* efx_voices_mask; struct snd_pcm_substream* pcm_capture_efx_substream; int capture_efx_interrupt; int reg_lock; TYPE_2__ emu1010; TYPE_1__* card_capabilities; scalar_t__ audigy; } ;
struct TYPE_4__ {scalar_t__ emu_model; } ;


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
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 struct snd_emu10k1_pcm* FUNC_0 (int,int ) ;
 TYPE_3__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_19)
{
 struct snd_emu10k1 *VAR_20 = FUNC_2(VAR_19);
 struct snd_emu10k1_pcm *VAR_21;
 struct snd_pcm_runtime *VAR_22 = VAR_19->runtime;
 int VAR_23 = VAR_20->audigy ? 64 : 32;
 int VAR_24;

 VAR_21 = FUNC_0(sizeof(*VAR_21), VAR_5);
 if (VAR_21 == ((void*)0))
  return -VAR_1;
 VAR_21->emu = VAR_20;
 VAR_21->type = VAR_0;
 VAR_21->substream = VAR_19;
 VAR_21->capture_ipr = VAR_7|VAR_8;
 VAR_21->capture_inte = VAR_6;
 VAR_21->capture_ba_reg = VAR_2;
 VAR_21->capture_bs_reg = VAR_3;
 VAR_21->capture_idx_reg = VAR_4;
 VAR_19->runtime->private_data = VAR_21;
 VAR_19->runtime->private_free = VAR_18;
 VAR_22->hw = VAR_16;
 VAR_22->hw.rates = VAR_13;
 VAR_22->hw.rate_min = VAR_22->hw.rate_max = 48000;
 FUNC_3(&VAR_20->reg_lock);
 if (VAR_20->card_capabilities->emu_model) {
  switch (VAR_20->emu1010.internal_clock) {
  case 0:

   VAR_22->hw.rates = VAR_12;
   VAR_22->hw.rate_min = VAR_22->hw.rate_max = 44100;
   VAR_22->hw.channels_min =
    VAR_22->hw.channels_max = 16;
   break;
  case 1:

   VAR_22->hw.rates = VAR_13;
   VAR_22->hw.rate_min = VAR_22->hw.rate_max = 48000;
   VAR_22->hw.channels_min =
    VAR_22->hw.channels_max = 16;
   break;
  };
  VAR_22->hw.formats = VAR_9;



 } else {
  VAR_22->hw.channels_min = VAR_22->hw.channels_max = 0;
  for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
   if (VAR_20->efx_voices_mask[VAR_24/32] & (1 << (VAR_24%32))) {
    VAR_22->hw.channels_min++;
    VAR_22->hw.channels_max++;
   }
  }
 }
 VAR_21->capture_cr_val = VAR_20->efx_voices_mask[0];
 VAR_21->capture_cr_val2 = VAR_20->efx_voices_mask[1];
 FUNC_4(&VAR_20->reg_lock);
 VAR_20->capture_efx_interrupt = VAR_17;
 VAR_20->pcm_capture_efx_substream = VAR_19;
 FUNC_1(VAR_22, 0, VAR_10, &VAR_15);
 return 0;
}
