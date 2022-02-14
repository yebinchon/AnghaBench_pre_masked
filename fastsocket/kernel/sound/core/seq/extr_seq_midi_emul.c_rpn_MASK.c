
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int dummy; } ;
struct snd_midi_channel_set {scalar_t__ midi_mode; } ;
struct snd_midi_channel {int* control; int gm_rpn_pitch_bend_range; int gm_rpn_fine_tuning; int gm_rpn_coarse_tuning; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct snd_midi_op *VAR_5, void *VAR_6, struct snd_midi_channel *VAR_7,
    struct snd_midi_channel_set *VAR_8)
{
 int VAR_9;
 int VAR_10;

 if (VAR_8->midi_mode != VAR_4) {
  VAR_9 = (VAR_7->control[VAR_3] << 8) |
   VAR_7->control[VAR_2];
  VAR_10 = (VAR_7->control[VAR_1] << 7) |
   VAR_7->control[VAR_0];

  switch (VAR_9) {
  case 0x0000:

   VAR_7->gm_rpn_pitch_bend_range = VAR_10;
   break;

  case 0x0001:

   VAR_7->gm_rpn_fine_tuning = VAR_10 - 8192;
   break;

  case 0x0002:

   VAR_7->gm_rpn_coarse_tuning = VAR_10 - 8192;
   break;

  case 0x7F7F:

   break;
  }
 }

}
