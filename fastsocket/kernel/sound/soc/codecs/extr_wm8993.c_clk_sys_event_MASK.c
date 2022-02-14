
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int FUNC_0 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_codec *VAR_3 = VAR_0->codec;

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_3);

 case 129:
  break;
 }

 return 0;
}
