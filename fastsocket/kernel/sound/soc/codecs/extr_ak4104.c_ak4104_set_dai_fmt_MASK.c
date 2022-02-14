
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 unsigned int VAR_6 ;

 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
         unsigned int VAR_8)
{
 struct snd_soc_codec *VAR_9 = VAR_7->codec;
 int VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_9, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 &= ~(VAR_0 | VAR_1);


 switch (VAR_8 & VAR_5) {
 case 128:
  break;
 case 129:
  VAR_10 |= VAR_0;
  break;
 case 130:
  VAR_10 |= VAR_0 | VAR_1;
  break;
 default:
  FUNC_2(VAR_9->dev, "invalid dai format\n");
  return -VAR_3;
 }


 if ((VAR_8 & VAR_6) != VAR_4)
  return -VAR_3;

 return FUNC_1(VAR_9, VAR_2, VAR_10);
}
