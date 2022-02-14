
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int hwvol_mute_level; int hwvol_step; int hwvol_mixer; scalar_t__ hwvol_muted; } ;


 int FUNC_0 (struct snd_mixer*,int ) ;
 int FUNC_1 (struct snd_mixer*,int ,int) ;

void
FUNC_2(struct snd_mixer *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_0->hwvol_muted) {
  VAR_0->hwvol_muted = 0;
  VAR_3 = VAR_0->hwvol_mute_level;
 } else
  VAR_3 = FUNC_0(VAR_0, VAR_0->hwvol_mixer);
 if (VAR_3 != -1) {
  VAR_4 = VAR_3 & 0xff;
  VAR_5 = (VAR_3 >> 8) & 0xff;
  VAR_4 += VAR_1 * VAR_0->hwvol_step;
  if (VAR_4 < 0)
   VAR_4 = 0;
  else if (VAR_4 > 100)
   VAR_4 = 100;
  VAR_5 += VAR_2 * VAR_0->hwvol_step;
  if (VAR_5 < 0)
   VAR_5 = 0;
  else if (VAR_5 > 100)
   VAR_5 = 100;
  FUNC_1(VAR_0, VAR_0->hwvol_mixer, VAR_4 | VAR_5 << 8);
 }
}
