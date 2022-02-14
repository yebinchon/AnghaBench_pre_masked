
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,char*) ;
 int FUNC_1 (struct snd_soc_codec*,char*) ;
 int FUNC_2 (struct snd_soc_codec*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(struct snd_soc_codec *VAR_3)
{

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_3, "Mic (Internal)");
  FUNC_1(VAR_3, "Headphone Jack");
  FUNC_0(VAR_3, "Headset Jack");
  break;
 case 128:
  FUNC_1(VAR_3, "Mic (Internal)");
  FUNC_0(VAR_3, "Headphone Jack");
  FUNC_0(VAR_3, "Headset Jack");
  break;
 case 130:
  FUNC_0(VAR_3, "Mic (Internal)");
  FUNC_0(VAR_3, "Headphone Jack");
  FUNC_1(VAR_3, "Headset Jack");
  break;
 }

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_3, "Speaker");
 else
  FUNC_0(VAR_3, "Speaker");

 FUNC_2(VAR_3);
}
