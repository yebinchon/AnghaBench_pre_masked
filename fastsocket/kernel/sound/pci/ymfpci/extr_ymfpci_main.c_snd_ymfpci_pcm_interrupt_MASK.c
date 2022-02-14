
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_ymfpci_voice {struct snd_ymfpci_playback_bank* bank; struct snd_ymfpci_pcm* ypcm; } ;
struct snd_ymfpci_playback_bank {scalar_t__ eff3_gain_end; scalar_t__ right_gain_end; scalar_t__ eff2_gain_end; scalar_t__ left_gain_end; int start; } ;
struct snd_ymfpci_pcm {scalar_t__ last_pos; scalar_t__ buffer_size; int update_pcm_vol; scalar_t__ output_rear; TYPE_1__** voices; TYPE_3__* substream; int period_size; int period_pos; scalar_t__ running; } ;
struct snd_ymfpci {size_t active_bank; int reg_lock; TYPE_2__* pcm_mixer; } ;
struct TYPE_6__ {unsigned int number; } ;
struct TYPE_5__ {int left; int right; } ;
struct TYPE_4__ {struct snd_ymfpci_playback_bank* bank; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct snd_ymfpci *VAR_0, struct snd_ymfpci_voice *VAR_1)
{
 struct snd_ymfpci_pcm *VAR_2;
 u32 VAR_3, VAR_4;

 if ((VAR_2 = VAR_1->ypcm) == ((void*)0))
  return;
 if (VAR_2->substream == ((void*)0))
  return;
 FUNC_3(&VAR_0->reg_lock);
 if (VAR_2->running) {
  VAR_3 = FUNC_1(VAR_1->bank[VAR_0->active_bank].start);
  if (VAR_3 < VAR_2->last_pos)
   VAR_4 = VAR_3 + (VAR_2->buffer_size - VAR_2->last_pos);
  else
   VAR_4 = VAR_3 - VAR_2->last_pos;
  VAR_2->period_pos += VAR_4;
  VAR_2->last_pos = VAR_3;
  if (VAR_2->period_pos >= VAR_2->period_size) {






   VAR_2->period_pos %= VAR_2->period_size;
   FUNC_4(&VAR_0->reg_lock);
   FUNC_2(VAR_2->substream);
   FUNC_3(&VAR_0->reg_lock);
  }

  if (FUNC_5(VAR_2->update_pcm_vol)) {
   unsigned int VAR_5 = VAR_2->substream->number;
   unsigned int VAR_6 = 1 - VAR_0->active_bank;
   struct snd_ymfpci_playback_bank *VAR_7;
   u32 VAR_8;

   VAR_7 = &VAR_1->bank[VAR_6];
   VAR_8 = FUNC_0(VAR_0->pcm_mixer[VAR_5].left << 15);
   VAR_7->left_gain_end = VAR_8;
   if (VAR_2->output_rear)
    VAR_7->eff2_gain_end = VAR_8;
   if (VAR_2->voices[1])
    VAR_7 = &VAR_2->voices[1]->bank[VAR_6];
   VAR_8 = FUNC_0(VAR_0->pcm_mixer[VAR_5].right << 15);
   VAR_7->right_gain_end = VAR_8;
   if (VAR_2->output_rear)
    VAR_7->eff3_gain_end = VAR_8;
   VAR_2->update_pcm_vol--;
  }
 }
 FUNC_4(&VAR_0->reg_lock);
}
