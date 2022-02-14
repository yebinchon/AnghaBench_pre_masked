
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int input_dev; } ;





 int FUNC_0 (struct snd_usb_caiaqdev*,char*,unsigned int) ;
 int FUNC_1 (struct snd_usb_caiaqdev*,char*,unsigned int) ;
 int FUNC_2 (struct snd_usb_caiaqdev*,char*,unsigned int) ;

void FUNC_3(struct snd_usb_caiaqdev *VAR_0,
      char *VAR_1,
      unsigned int VAR_2)
{
 if (!VAR_0->input_dev || VAR_2 < 1)
  return;

 switch (VAR_1[0]) {
 case 130:
  FUNC_0(VAR_0, VAR_1 + 1, VAR_2 - 1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1 + 1, VAR_2 - 1);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1 + 1, VAR_2 - 1);
  break;
 }
}
