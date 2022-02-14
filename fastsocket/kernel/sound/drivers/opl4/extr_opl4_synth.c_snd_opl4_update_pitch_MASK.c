
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl4 {int dummy; } ;
struct snd_midi_channel {int gm_rpn_fine_tuning; int midi_pitchbend; int gm_rpn_pitch_bend_range; scalar_t__ gm_rpn_coarse_tuning; scalar_t__ drum_channel; } ;
struct opl4_voice {int note; int reg_f_number; scalar_t__ number; TYPE_1__* sound; struct snd_midi_channel* chan; } ;
struct TYPE_2__ {int key_scaling; scalar_t__ pitch_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct snd_opl4 *VAR_6,
      struct opl4_voice *VAR_7)
{
 struct snd_midi_channel *VAR_8 = VAR_7->chan;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = VAR_8->drum_channel ? 60 : VAR_7->note;




 VAR_10 = ((VAR_9 - 60) << 7) * VAR_7->sound->key_scaling / 100 + (60 << 7);
 VAR_10 += VAR_7->sound->pitch_offset;
 if (!VAR_8->drum_channel)
  VAR_10 += VAR_8->gm_rpn_coarse_tuning;
 VAR_10 += VAR_8->gm_rpn_fine_tuning >> 7;
 VAR_10 += VAR_8->midi_pitchbend * VAR_8->gm_rpn_pitch_bend_range / 0x2000;
 if (VAR_10 < 0)
  VAR_10 = 0;
 else if (VAR_10 >= 0x6000)
  VAR_10 = 0x5fff;
 VAR_11 = VAR_10 / 0x600 - 8;
 VAR_10 = VAR_5[VAR_10 % 0x600];

 FUNC_0(VAR_6, VAR_3 + VAR_7->number,
         (VAR_11 << 4) | ((VAR_10 >> 7) & VAR_0));
 VAR_7->reg_f_number = (VAR_7->reg_f_number & VAR_4)
  | ((VAR_10 << 1) & VAR_1);
 FUNC_0(VAR_6, VAR_2 + VAR_7->number, VAR_7->reg_f_number);
}
