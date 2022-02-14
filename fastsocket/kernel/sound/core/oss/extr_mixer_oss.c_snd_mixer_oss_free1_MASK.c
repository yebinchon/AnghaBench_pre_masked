
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer_oss_slot {int (* private_free ) (struct snd_mixer_oss_slot*) ;} ;
struct snd_mixer_oss {struct snd_mixer_oss_slot* slots; struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_mixer_oss* mixer_oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_mixer_oss*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_mixer_oss_slot*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct snd_mixer_oss *VAR_3 = VAR_2;
 struct snd_card *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return 0;
 VAR_4 = VAR_3->card;
 if (FUNC_2(VAR_3 != FUNC_0(VAR_4)->mixer_oss))
  return -VAR_0;
 FUNC_0(VAR_4)->mixer_oss = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct snd_mixer_oss_slot *VAR_6 = &VAR_3->slots[VAR_5];
  if (VAR_6->private_free)
   VAR_6->private_free(VAR_6);
 }
 FUNC_1(VAR_3);
 return 0;
}
