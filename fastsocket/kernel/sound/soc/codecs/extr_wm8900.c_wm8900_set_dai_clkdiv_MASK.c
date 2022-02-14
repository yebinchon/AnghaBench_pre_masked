
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12,
     int VAR_13, int VAR_14)
{
 struct snd_soc_codec *VAR_15 = VAR_12->codec;
 unsigned int VAR_16;

 switch (VAR_13) {
 case 132:
  VAR_16 = FUNC_0(VAR_15, VAR_4);
  FUNC_1(VAR_15, VAR_4,
        VAR_14 | (VAR_16 & VAR_5));
  break;
 case 128:
  VAR_16 = FUNC_0(VAR_15, VAR_4);
  FUNC_1(VAR_15, VAR_4,
        VAR_14 | (VAR_16 & VAR_6));
  break;
 case 130:
  VAR_16 = FUNC_0(VAR_15, VAR_3);
  FUNC_1(VAR_15, VAR_3,
        VAR_14 | (VAR_16 & VAR_1));
  break;
 case 133:
  VAR_16 = FUNC_0(VAR_15, VAR_2);
  FUNC_1(VAR_15, VAR_2,
        VAR_14 | (VAR_16 & VAR_1));
  break;
 case 131:
  VAR_16 = FUNC_0(VAR_15, VAR_7);
  FUNC_1(VAR_15, VAR_7,
        VAR_14 | (VAR_16 & VAR_9));
  break;
 case 134:
  VAR_16 = FUNC_0(VAR_15, VAR_7);
  FUNC_1(VAR_15, VAR_7,
        VAR_14 | (VAR_16 & VAR_8));
  break;
 case 129:
  VAR_16 = FUNC_0(VAR_15, VAR_10);
  FUNC_1(VAR_15, VAR_10,
        VAR_14 | (VAR_16 & VAR_11));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
