
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct cs4270_private* private_data; } ;
struct cs4270_private {int manual_mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_3->codec;
 struct cs4270_private *VAR_6 = VAR_5->private_data;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0);

 if (VAR_4)
  VAR_7 |= VAR_1 | VAR_2;
 else {
  VAR_7 &= ~(VAR_1 | VAR_2);
  VAR_7 |= VAR_6->manual_mute;
 }

 return FUNC_1(VAR_5, VAR_0, VAR_7);
}
