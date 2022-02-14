
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_15, unsigned int VAR_16,
          unsigned int VAR_17, int VAR_18, int VAR_19)
{
 struct snd_soc_codec *VAR_20 = VAR_15->codec;
 int VAR_21 = VAR_20->read(VAR_20, VAR_13);
 int VAR_22 = VAR_20->read(VAR_20, VAR_6);

 VAR_21 &= ~VAR_11;
 VAR_22 &= ~VAR_4;

 switch (VAR_18) {
 case 2:
  VAR_21 |= VAR_8 << VAR_12;
  VAR_22 |= VAR_1 << VAR_5;
  break;
 case 4:
  VAR_21 |= VAR_9 << VAR_12;
  VAR_22 |= VAR_2 << VAR_5;
  break;
 case 8:
  VAR_21 |= VAR_10 << VAR_12;
  VAR_22 |= VAR_3 << VAR_5;
  break;
 case 16:
  VAR_21 |= VAR_7 << VAR_12;
  VAR_22 |= VAR_0 << VAR_5;
  break;
 default:
  return -VAR_14;
 }

 VAR_20->write(VAR_20, VAR_13, VAR_21);
 VAR_20->write(VAR_20, VAR_6, VAR_22);

 return 0;
}
