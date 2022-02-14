
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_codec *VAR_3 = VAR_0->codec;

 return FUNC_1(VAR_3, FUNC_0(VAR_2));
}
