
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {int (* get_recsrc ) (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;} ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int (* get_recsrc ) (struct snd_mixer_oss_file*,int*) ;int oss_recsrc; struct snd_mixer_oss_slot* slots; scalar_t__ put_recsrc; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_mixer_oss_file*,int*) ;
 int FUNC_1 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_mixer_oss_file *VAR_1)
{
 struct snd_mixer_oss *VAR_2 = VAR_1->mixer;
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 if (VAR_2->put_recsrc && VAR_2->get_recsrc) {
  int VAR_4;
  if ((VAR_4 = VAR_2->get_recsrc(VAR_1, &VAR_3)) < 0)
   return VAR_4;
  VAR_3 = 1 << VAR_3;
 } else {
  struct snd_mixer_oss_slot *VAR_5;
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < 31; VAR_6++) {
   VAR_5 = &VAR_2->slots[VAR_6];
   if (VAR_5->get_recsrc) {
    int VAR_7 = 0;
    VAR_5->get_recsrc(VAR_1, VAR_5, &VAR_7);
    if (VAR_7)
     VAR_3 |= 1 << VAR_6;
   }
  }
 }
 return VAR_2->oss_recsrc = VAR_3;
}
