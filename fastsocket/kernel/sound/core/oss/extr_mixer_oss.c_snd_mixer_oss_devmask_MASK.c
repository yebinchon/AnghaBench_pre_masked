
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {scalar_t__ put_recsrc; scalar_t__ put_volume; } ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {struct snd_mixer_oss_slot* slots; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_mixer_oss_file *VAR_1)
{
 struct snd_mixer_oss *VAR_2 = VAR_1->mixer;
 struct snd_mixer_oss_slot *VAR_3;
 int VAR_4 = 0, VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
  VAR_3 = &VAR_2->slots[VAR_5];
  if (VAR_3->put_volume || VAR_3->put_recsrc)
   VAR_4 |= 1 << VAR_5;
 }
 return VAR_4;
}
