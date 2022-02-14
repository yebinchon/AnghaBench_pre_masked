
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel_set {int max_channels; struct snd_midi_channel* channels; } ;
struct snd_midi_channel {int gm_rpn_pitch_bend_range; int drum_channel; scalar_t__ gm_rpn_coarse_tuning; scalar_t__ gm_rpn_fine_tuning; } ;


 int FUNC_0 (struct snd_midi_channel*) ;

__attribute__((used)) static void
FUNC_1(struct snd_midi_channel_set *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->max_channels; VAR_1++) {
  struct snd_midi_channel *VAR_2 = VAR_0->channels + VAR_1;
  FUNC_0(VAR_2);
  VAR_2->gm_rpn_pitch_bend_range = 256;
  VAR_2->gm_rpn_fine_tuning = 0;
  VAR_2->gm_rpn_coarse_tuning = 0;

  if (VAR_1 == 9)
   VAR_2->drum_channel = 1;
  else
   VAR_2->drum_channel = 0;
 }
}
