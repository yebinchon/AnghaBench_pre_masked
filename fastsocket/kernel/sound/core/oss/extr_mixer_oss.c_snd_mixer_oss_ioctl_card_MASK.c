
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer_oss_file {int * mixer; struct snd_card* card; } ;
struct snd_card {int dummy; } ;
typedef int fmixer ;
struct TYPE_2__ {int * mixer_oss; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_mixer_oss_file*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_mixer_oss_file*,unsigned int,unsigned long) ;

int FUNC_4(struct snd_card *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct snd_mixer_oss_file VAR_4;

 if (FUNC_2(!VAR_1))
  return -VAR_0;
 if (FUNC_0(VAR_1)->mixer_oss == ((void*)0))
  return -VAR_0;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.card = VAR_1;
 VAR_4.mixer = FUNC_0(VAR_1)->mixer_oss;
 return FUNC_3(&VAR_4, VAR_2, VAR_3);
}
