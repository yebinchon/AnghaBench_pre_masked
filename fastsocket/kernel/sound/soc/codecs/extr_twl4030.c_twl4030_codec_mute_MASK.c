
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_priv {int codec_muted; } ;
struct snd_soc_codec {struct twl4030_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_2, int VAR_3)
{
 struct twl4030_priv *VAR_4 = VAR_2->private_data;
 u8 VAR_5;

 if (VAR_3 == VAR_4->codec_muted)
  return;

 if (VAR_3) {

  VAR_5 = FUNC_0(VAR_2, VAR_1);
  VAR_5 &= ~VAR_0;
  FUNC_1(VAR_2, VAR_1, VAR_5);
 } else {

  VAR_5 = FUNC_0(VAR_2, VAR_1);
  VAR_5 |= VAR_0;
  FUNC_1(VAR_2, VAR_1, VAR_5);
 }

 VAR_4->codec_muted = VAR_3;
}
