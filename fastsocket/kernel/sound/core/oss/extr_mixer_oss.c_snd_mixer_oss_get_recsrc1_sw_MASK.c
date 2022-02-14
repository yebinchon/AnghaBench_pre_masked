
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {scalar_t__ private_data; } ;
struct snd_mixer_oss_file {int dummy; } ;
struct slot {int * numid; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int ,int*,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_mixer_oss_file *VAR_1,
     struct snd_mixer_oss_slot *VAR_2,
     int *VAR_3)
{
 struct slot *VAR_4 = (struct slot *)VAR_2->private_data;
 int VAR_5, VAR_6;

 VAR_5 = VAR_6 = 1;
 FUNC_0(VAR_1, VAR_2, VAR_4->numid[VAR_0], &VAR_5, &VAR_6, 0);
 *VAR_3 = (VAR_5 || VAR_6) ? 1 : 0;
 return 0;
}
