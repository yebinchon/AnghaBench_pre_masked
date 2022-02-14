
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_8,
       struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_codec *VAR_11 = VAR_8->codec;
 u16 VAR_12 = FUNC_0(VAR_11, VAR_3);
 u16 VAR_13 = FUNC_0(VAR_11, VAR_2);

 if (VAR_10 & VAR_0) {

  VAR_12 |= VAR_5 | VAR_7;
  FUNC_1(VAR_11, VAR_3, VAR_12);


  VAR_13 |= VAR_4 | VAR_6;
  FUNC_1(VAR_11, VAR_2, VAR_13);
 }

 if (VAR_10 & VAR_1) {

  VAR_13 &= ~(VAR_4 | VAR_6);
  FUNC_1(VAR_11, VAR_2, VAR_13);


  VAR_12 &= ~(VAR_5 | VAR_7);
  FUNC_1(VAR_11, VAR_3, VAR_12);
 }

 return 0;
}
