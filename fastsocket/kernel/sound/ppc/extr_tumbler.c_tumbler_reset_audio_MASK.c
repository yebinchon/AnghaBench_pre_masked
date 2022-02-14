
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct pmac_tumbler {int audio_reset; int amp_mute; int hp_mute; scalar_t__ anded_reset; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct snd_pmac *VAR_0)
{
 struct pmac_tumbler *VAR_1 = VAR_0->mixer_data;

 if (VAR_1->anded_reset) {
  FUNC_0("(I) codec anded reset !\n");
  FUNC_2(&VAR_1->hp_mute, 0);
  FUNC_2(&VAR_1->amp_mute, 0);
  FUNC_1(200);
  FUNC_2(&VAR_1->hp_mute, 1);
  FUNC_2(&VAR_1->amp_mute, 1);
  FUNC_1(100);
  FUNC_2(&VAR_1->hp_mute, 0);
  FUNC_2(&VAR_1->amp_mute, 0);
  FUNC_1(100);
 } else {
  FUNC_0("(I) codec normal reset !\n");

  FUNC_2(&VAR_1->audio_reset, 0);
  FUNC_1(200);
  FUNC_2(&VAR_1->audio_reset, 1);
  FUNC_1(100);
  FUNC_2(&VAR_1->audio_reset, 0);
  FUNC_1(100);
 }
}
