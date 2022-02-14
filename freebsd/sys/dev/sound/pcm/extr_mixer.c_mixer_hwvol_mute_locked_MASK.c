
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int hwvol_mixer; int hwvol_mute_level; scalar_t__ hwvol_muted; } ;


 int FUNC_0 (struct snd_mixer*,int ) ;
 int FUNC_1 (struct snd_mixer*,int ,int ) ;

void
FUNC_2(struct snd_mixer *VAR_0)
{
 if (VAR_0->hwvol_muted) {
  VAR_0->hwvol_muted = 0;
  FUNC_1(VAR_0, VAR_0->hwvol_mixer, VAR_0->hwvol_mute_level);
 } else {
  VAR_0->hwvol_muted++;
  VAR_0->hwvol_mute_level = FUNC_0(VAR_0, VAR_0->hwvol_mixer);
  FUNC_1(VAR_0, VAR_0->hwvol_mixer, 0);
 }
}
