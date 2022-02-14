
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ name; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct control_runtime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (char*,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,struct control_runtime*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(
 struct control_runtime *VAR_2,
 struct snd_card *VAR_3,
 char *VAR_4,
 struct snd_kcontrol_new *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct snd_kcontrol *VAR_8 =
  FUNC_2(VAR_4, VAR_1);
 struct snd_kcontrol *VAR_9;

 if (!VAR_8)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_3, VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = 0;
 while (VAR_5[VAR_7].name) {
  VAR_9 = FUNC_3(&VAR_5[VAR_7], VAR_2);
  if (!VAR_9)
   return -VAR_0;
  VAR_6 = FUNC_0(VAR_3, VAR_9);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 = FUNC_1(VAR_8, VAR_9);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_7++;
 }
 return 0;
}
