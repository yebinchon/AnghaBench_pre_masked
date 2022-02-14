
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct snd_soc_codec*,char*) ;
 int FUNC_2 (struct snd_soc_codec*,char*) ;
 int FUNC_3 (struct snd_soc_codec*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_codec *VAR_5)
{

 switch (VAR_3) {
 case 130:

  FUNC_0(VAR_0, 1);
  FUNC_0(VAR_1, 1);
  FUNC_1(VAR_5, "Mic Jack");
  FUNC_1(VAR_5, "Line Jack");
  FUNC_2(VAR_5, "Headphone Jack");
  FUNC_1(VAR_5, "Headset Jack");
  break;
 case 128:

  FUNC_0(VAR_0, 0);
  FUNC_0(VAR_1, 0);
  FUNC_2(VAR_5, "Mic Jack");
  FUNC_1(VAR_5, "Line Jack");
  FUNC_1(VAR_5, "Headphone Jack");
  FUNC_1(VAR_5, "Headset Jack");
  break;
 case 129:
  FUNC_0(VAR_0, 0);
  FUNC_0(VAR_1, 0);
  FUNC_1(VAR_5, "Mic Jack");
  FUNC_2(VAR_5, "Line Jack");
  FUNC_1(VAR_5, "Headphone Jack");
  FUNC_1(VAR_5, "Headset Jack");
  break;
 case 131:
  FUNC_0(VAR_0, 0);
  FUNC_0(VAR_1, 1);
  FUNC_2(VAR_5, "Mic Jack");
  FUNC_1(VAR_5, "Line Jack");
  FUNC_1(VAR_5, "Headphone Jack");
  FUNC_2(VAR_5, "Headset Jack");
  break;
 }

 if (VAR_4 == VAR_2)
  FUNC_2(VAR_5, "Ext Spk");
 else
  FUNC_1(VAR_5, "Ext Spk");


 FUNC_3(VAR_5);
}
