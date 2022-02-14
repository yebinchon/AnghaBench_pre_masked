
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_codec *VAR_3)
{
 int VAR_4;


 FUNC_4(VAR_3, "OUT3");
 FUNC_4(VAR_3, "OUT4");
 FUNC_4(VAR_3, "LINE1");
 FUNC_4(VAR_3, "LINE2");


 FUNC_5(VAR_3, VAR_1,
      FUNC_0(VAR_1));


 VAR_4 = FUNC_1(VAR_3, VAR_2,
  FUNC_0(VAR_2));

 if (VAR_4 < 0)
  return VAR_4;


 FUNC_2(VAR_3, VAR_0, FUNC_0(VAR_0));


 FUNC_3(VAR_3, "Stereo Out");
 FUNC_3(VAR_3, "GSM Line Out");
 FUNC_3(VAR_3, "GSM Line In");
 FUNC_3(VAR_3, "Headset Mic");
 FUNC_3(VAR_3, "Handset Mic");
 FUNC_3(VAR_3, "Handset Spk");

 FUNC_6(VAR_3);

 return 0;
}
