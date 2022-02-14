
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct snd_ymfpci_voice {scalar_t__ number; struct snd_ymfpci_playback_bank* bank; } ;
struct snd_ymfpci_playback_bank {int left_gain; int left_gain_end; int right_gain; int right_gain_end; int eff2_gain; int eff2_gain_end; int eff3_gain; int eff3_gain_end; void* eg_gain_end; void* eg_gain; void* lpfK_end; void* lpfK; void* delta_end; void* delta; void* lpfQ; void* loop_end; void* base; void* format; } ;
struct snd_ymfpci_pcm {int use_441_slot; int buffer_size; int swap_rear; scalar_t__ output_rear; scalar_t__ output_front; TYPE_3__* chip; TYPE_2__* substream; struct snd_ymfpci_voice** voices; } ;
struct snd_pcm_runtime {int rate; int channels; int dma_addr; int format; } ;
struct TYPE_6__ {scalar_t__ device_id; int src441_used; int voice_lock; TYPE_1__* pcm_mixer; } ;
struct TYPE_5__ {size_t number; } ;
struct TYPE_4__ {int left; int right; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct snd_ymfpci_playback_bank*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct snd_ymfpci_pcm *VAR_1, unsigned int VAR_2,
          struct snd_pcm_runtime *VAR_3,
          int VAR_4)
{
 struct snd_ymfpci_voice *VAR_5 = VAR_1->voices[VAR_2];
 u32 VAR_6;
 u32 VAR_7 = FUNC_4(VAR_3->rate);
 u32 VAR_8 = FUNC_6(VAR_3->rate);
 u32 VAR_9 = FUNC_5(VAR_3->rate);
 struct snd_ymfpci_playback_bank *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12, VAR_13;
 u8 VAR_14, VAR_15;
 unsigned long VAR_16;

 if (FUNC_2(!VAR_5))
  return;
 if (VAR_3->channels == 1) {
  VAR_14 = 1;
  VAR_15 = 1;
 } else {
  VAR_14 = (VAR_2 & 1) == 0;
  VAR_15 = !VAR_14;
 }
 if (VAR_4) {
  VAR_12 = FUNC_0(VAR_1->chip->pcm_mixer
           [VAR_1->substream->number].left << 15);
  VAR_13 = FUNC_0(VAR_1->chip->pcm_mixer
     [VAR_1->substream->number].right << 15);
 } else {
  VAR_12 = FUNC_0(0x40000000);
  VAR_13 = FUNC_0(0x40000000);
 }
 FUNC_7(&VAR_1->chip->voice_lock, VAR_16);
 VAR_6 = VAR_3->channels == 2 ? 0x00010000 : 0;
 if (FUNC_3(VAR_3->format) == 8)
  VAR_6 |= 0x80000000;
 else if (VAR_1->chip->device_id == VAR_0 &&
   VAR_3->rate == 44100 && VAR_3->channels == 2 &&
   VAR_2 == 0 && (VAR_1->chip->src441_used == -1 ||
       VAR_1->chip->src441_used == VAR_5->number)) {
  VAR_1->chip->src441_used = VAR_5->number;
  VAR_1->use_441_slot = 1;
  VAR_6 |= 0x10000000;
 }
 if (VAR_1->chip->src441_used == VAR_5->number &&
     (VAR_6 & 0x10000000) == 0) {
  VAR_1->chip->src441_used = -1;
  VAR_1->use_441_slot = 0;
 }
 if (VAR_3->channels == 2 && (VAR_2 & 1) != 0)
  VAR_6 |= 1;
 FUNC_8(&VAR_1->chip->voice_lock, VAR_16);
 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_10 = &VAR_5->bank[VAR_11];
  FUNC_1(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->format = FUNC_0(VAR_6);
  VAR_10->base = FUNC_0(VAR_3->dma_addr);
  VAR_10->loop_end = FUNC_0(VAR_1->buffer_size);
  VAR_10->lpfQ = FUNC_0(VAR_8);
  VAR_10->delta =
  VAR_10->delta_end = FUNC_0(VAR_7);
  VAR_10->lpfK =
  VAR_10->lpfK_end = FUNC_0(VAR_9);
  VAR_10->eg_gain =
  VAR_10->eg_gain_end = FUNC_0(0x40000000);

  if (VAR_1->output_front) {
   if (VAR_14) {
    VAR_10->left_gain =
    VAR_10->left_gain_end = VAR_12;
   }
   if (VAR_15) {
    VAR_10->right_gain =
    VAR_10->right_gain_end = VAR_13;
   }
  }
  if (VAR_1->output_rear) {
          if (!VAR_1->swap_rear) {
           if (VAR_14) {
            VAR_10->eff2_gain =
            VAR_10->eff2_gain_end = VAR_12;
           }
           if (VAR_15) {
            VAR_10->eff3_gain =
            VAR_10->eff3_gain_end = VAR_13;
           }
          } else {




           if (VAR_14) {
            VAR_10->eff3_gain =
            VAR_10->eff3_gain_end = VAR_12;
           }
           if (VAR_15) {
            VAR_10->eff2_gain =
            VAR_10->eff2_gain_end = VAR_13;
           }
          }
                }
 }
}
