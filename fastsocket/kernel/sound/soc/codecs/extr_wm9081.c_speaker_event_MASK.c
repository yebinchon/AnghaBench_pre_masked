
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_2,
    struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_2->codec;
 unsigned int VAR_6 = FUNC_0(VAR_5, VAR_0);

 switch (VAR_4) {
 case 129:
  VAR_6 |= VAR_1;
  break;

 case 128:
  VAR_6 &= ~VAR_1;
  break;
 }

 FUNC_1(VAR_5, VAR_0, VAR_6);

 return 0;
}
