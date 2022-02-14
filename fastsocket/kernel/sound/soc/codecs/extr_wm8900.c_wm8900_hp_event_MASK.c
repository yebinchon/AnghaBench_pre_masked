
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 () ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_7,
      struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_codec *VAR_10 = VAR_7->codec;
 u16 VAR_11 = FUNC_2(VAR_10, VAR_0);

 switch (VAR_9) {
 case 128:

  VAR_11 = VAR_1 |
   VAR_2;
  FUNC_3(VAR_10, VAR_0, VAR_11);
  break;

 case 130:

  VAR_11 &= ~VAR_1;
  VAR_11 |= VAR_5 |
   VAR_6 |
   VAR_3;
  FUNC_3(VAR_10, VAR_0, VAR_11);

  FUNC_1(400);


  VAR_11 &= ~VAR_2;
  VAR_11 |= VAR_4;
  FUNC_3(VAR_10, VAR_0, VAR_11);


  VAR_11 &= ~VAR_6;
  FUNC_3(VAR_10, VAR_0, VAR_11);
  VAR_11 &= ~VAR_5;
  FUNC_3(VAR_10, VAR_0, VAR_11);
  break;

 case 129:

  VAR_11 |= VAR_5;
  FUNC_3(VAR_10, VAR_0, VAR_11);


  VAR_11 &= ~VAR_4;
  FUNC_3(VAR_10, VAR_0, VAR_11);


  VAR_11 |= VAR_1 |
   VAR_2;
  VAR_11 &= ~VAR_3;
  FUNC_3(VAR_10, VAR_0, VAR_11);
  break;

 case 131:

  FUNC_3(VAR_10, VAR_0, 0);
  break;

 default:
  FUNC_0();
 }

 return 0;
}
