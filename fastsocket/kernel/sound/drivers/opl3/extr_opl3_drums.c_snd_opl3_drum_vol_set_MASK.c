
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_drum_voice {size_t voice; size_t op; unsigned char ksl_level; unsigned char feedback_connection; } ;
struct snd_opl3 {int (* command ) (struct snd_opl3*,unsigned short,unsigned char) ;} ;
struct snd_midi_channel {int gm_pan; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (unsigned char*,int,struct snd_midi_channel*) ;
 unsigned char** VAR_6 ;
 int FUNC_1 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_2 (struct snd_opl3*,unsigned short,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct snd_opl3 *VAR_7,
      struct snd_opl3_drum_voice *VAR_8,
      int VAR_9, struct snd_midi_channel *VAR_10)
{
 unsigned char VAR_11 = VAR_6[VAR_8->voice][VAR_8->op];
 unsigned char VAR_12 = VAR_8->voice;
 unsigned char VAR_13;
 unsigned short VAR_14;


 VAR_13 = VAR_8->ksl_level;
 FUNC_0(&VAR_13, VAR_9, VAR_10);
 VAR_14 = VAR_0 | (VAR_2 + VAR_11);
 VAR_7->command(VAR_7, VAR_14, VAR_13);



 VAR_13 = VAR_8->feedback_connection | VAR_3;
 if (VAR_10->gm_pan < 43)
  VAR_13 &= ~VAR_5;
 if (VAR_10->gm_pan > 85)
  VAR_13 &= ~VAR_4;
 VAR_14 = VAR_0 | (VAR_1 + VAR_12);
 VAR_7->command(VAR_7, VAR_14, VAR_13);
}
