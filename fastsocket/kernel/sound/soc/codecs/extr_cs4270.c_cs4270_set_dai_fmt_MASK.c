
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct cs4270_private* private_data; } ;
struct cs4270_private {unsigned int mode; int slave_mode; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3,
         unsigned int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_3->codec;
 struct cs4270_private *VAR_6 = VAR_5->private_data;
 int VAR_7 = 0;


 switch (VAR_4 & VAR_1) {
 case 129:
 case 128:
  VAR_6->mode = VAR_4 & VAR_1;
  break;
 default:
  FUNC_0(VAR_5->dev, "invalid dai format\n");
  VAR_7 = -VAR_0;
 }


 switch (VAR_4 & VAR_2) {
 case 130:
  VAR_6->slave_mode = 1;
  break;
 case 131:
  VAR_6->slave_mode = 0;
  break;
 default:

  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
