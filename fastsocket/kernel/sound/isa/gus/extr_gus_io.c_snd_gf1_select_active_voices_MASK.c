
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short active_voices; int playback_freq; scalar_t__ enh_mode; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct snd_gus_card * VAR_1)
{
 unsigned short VAR_2;

 static unsigned short VAR_3[32 - 14 + 1] =
 {
     44100, 41160, 38587, 36317, 34300, 32494, 30870, 29400, 28063, 26843,
     25725, 24696, 23746, 22866, 22050, 21289, 20580, 19916, 19293
 };

 VAR_2 = VAR_1->gf1.active_voices;
 if (VAR_2 > 32)
  VAR_2 = 32;
 if (VAR_2 < 14)
  VAR_2 = 14;
 if (VAR_1->gf1.enh_mode)
  VAR_2 = 32;
 VAR_1->gf1.active_voices = VAR_2;
 VAR_1->gf1.playback_freq =
     VAR_1->gf1.enh_mode ? 44100 : VAR_3[VAR_2 - 14];
 if (!VAR_1->gf1.enh_mode) {
  FUNC_0(VAR_1, VAR_0, 0xc0 | (VAR_2 - 1));
  FUNC_1(100);
 }
}
