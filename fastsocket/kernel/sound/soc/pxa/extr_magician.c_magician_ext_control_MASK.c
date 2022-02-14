
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_soc_codec*,char*) ;
 int FUNC_1 (struct snd_soc_codec*,char*) ;
 int FUNC_2 (struct snd_soc_codec*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_codec *VAR_3)
{
 if (VAR_2)
  FUNC_1(VAR_3, "Speaker");
 else
  FUNC_0(VAR_3, "Speaker");
 if (VAR_0)
  FUNC_1(VAR_3, "Headphone Jack");
 else
  FUNC_0(VAR_3, "Headphone Jack");

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_3, "Headset Mic");
  FUNC_1(VAR_3, "Call Mic");
  break;
 case 128:
  FUNC_0(VAR_3, "Call Mic");
  FUNC_1(VAR_3, "Headset Mic");
  break;
 }

 FUNC_2(VAR_3);
}
