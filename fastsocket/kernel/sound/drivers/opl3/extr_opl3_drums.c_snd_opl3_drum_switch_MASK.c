
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_drum_voice {int dummy; } ;
struct snd_opl3 {int drum_reg; int (* command ) (struct snd_opl3*,int,unsigned char) ;} ;
struct snd_midi_channel {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct snd_opl3_drum_voice VAR_3 ;
 struct snd_opl3_drum_voice VAR_4 ;
 struct snd_opl3_drum_voice VAR_5 ;
 struct snd_opl3_drum_voice VAR_6 ;
 unsigned char* VAR_7 ;
 int FUNC_0 (struct snd_opl3*,struct snd_opl3_drum_voice*,int,struct snd_midi_channel*) ;
 int FUNC_1 (struct snd_opl3*,int,unsigned char) ;
 struct snd_opl3_drum_voice VAR_8 ;

void FUNC_2(struct snd_opl3 *VAR_9, int VAR_10, int VAR_11, int VAR_12,
     struct snd_midi_channel *VAR_13)
{
 unsigned char VAR_14;
 struct snd_opl3_drum_voice *VAR_15;

 if (!(VAR_9->drum_reg & VAR_1))
  return;

 if ((VAR_10 < 35) || (VAR_10 > 81))
  return;
 VAR_14 = VAR_7[VAR_10 - 35];

 if (VAR_12) {
  switch (VAR_14) {
  case 132:
   VAR_15 = &VAR_3;
   break;
  case 130:
   VAR_15 = &VAR_5;
   break;
  case 129:
   VAR_15 = &VAR_6;
   break;
  case 128:
   VAR_15 = &VAR_8;
   break;
  case 131:
   VAR_15 = &VAR_4;
   break;
  default:
   VAR_15 = &VAR_8;
  }

  FUNC_0(VAR_9, VAR_15, VAR_11, VAR_13);
  VAR_9->drum_reg |= VAR_14;
 } else {
  VAR_9->drum_reg &= ~VAR_14;
 }
 VAR_9->command(VAR_9, VAR_0 | VAR_2,
    VAR_9->drum_reg);
}
