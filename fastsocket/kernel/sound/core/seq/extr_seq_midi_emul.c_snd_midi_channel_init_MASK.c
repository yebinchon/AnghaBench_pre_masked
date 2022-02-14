
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int number; int gm_rpn_pitch_bend_range; int drum_channel; scalar_t__ gm_rpn_coarse_tuning; scalar_t__ gm_rpn_fine_tuning; int * private; } ;


 int FUNC_0 (struct snd_midi_channel*,int ,int) ;
 int FUNC_1 (struct snd_midi_channel*) ;

__attribute__((used)) static void FUNC_2(struct snd_midi_channel *VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0, 0, sizeof(struct snd_midi_channel));
 VAR_0->private = ((void*)0);
 VAR_0->number = VAR_1;

 FUNC_1(VAR_0);
 VAR_0->gm_rpn_pitch_bend_range = 256;
 VAR_0->gm_rpn_fine_tuning = 0;
 VAR_0->gm_rpn_coarse_tuning = 0;

 if (VAR_1 == 9)
  VAR_0->drum_channel = 1;
}
