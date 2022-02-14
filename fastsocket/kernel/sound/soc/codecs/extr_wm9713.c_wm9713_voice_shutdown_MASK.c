
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_3,
     struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_codec *VAR_6 = VAR_3->codec;
 u16 VAR_7, VAR_8;

 FUNC_0(VAR_5 != VAR_2);


 VAR_7 = FUNC_1(VAR_6, VAR_0) | 0x1000;
 VAR_8 = FUNC_1(VAR_6, VAR_1) & 0xF0FF;
 FUNC_2(VAR_6, VAR_1, VAR_8 | 0x0200);
 FUNC_4(FUNC_3(1));
 FUNC_2(VAR_6, VAR_1, VAR_8 | 0x0F00);
 FUNC_2(VAR_6, VAR_0, VAR_7);

 return 0;
}
