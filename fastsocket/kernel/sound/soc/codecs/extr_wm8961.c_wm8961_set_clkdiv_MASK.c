
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5, int VAR_6, int VAR_7)
{
 struct snd_soc_codec *VAR_8 = VAR_5->codec;
 u16 VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_9 = FUNC_0(VAR_8, VAR_3);
  VAR_9 &= ~VAR_2;
  VAR_9 |= VAR_7;
  FUNC_1(VAR_8, VAR_3, VAR_9);
  break;

 case 128:
  VAR_9 = FUNC_0(VAR_8, VAR_1);
  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_7;
  FUNC_1(VAR_8, VAR_1, VAR_9);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
