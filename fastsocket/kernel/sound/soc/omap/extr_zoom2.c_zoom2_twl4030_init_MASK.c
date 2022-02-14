
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_2 (struct snd_soc_codec*,char*) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_codec *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_4(VAR_2, VAR_1,
    FUNC_0(VAR_1));
 if (VAR_3)
  return VAR_3;


 FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_0));


 FUNC_2(VAR_2, "Ext Mic");
 FUNC_2(VAR_2, "Ext Spk");
 FUNC_2(VAR_2, "Headset Mic");
 FUNC_2(VAR_2, "Headset Stereophone");
 FUNC_2(VAR_2, "Aux In");


 FUNC_3(VAR_2, "CARKITMIC");
 FUNC_3(VAR_2, "DIGIMIC0");
 FUNC_3(VAR_2, "DIGIMIC1");

 FUNC_3(VAR_2, "OUTL");
 FUNC_3(VAR_2, "OUTR");
 FUNC_3(VAR_2, "EARPIECE");
 FUNC_3(VAR_2, "PREDRIVEL");
 FUNC_3(VAR_2, "PREDRIVER");
 FUNC_3(VAR_2, "CARKITL");
 FUNC_3(VAR_2, "CARKITR");

 VAR_3 = FUNC_5(VAR_2);

 return VAR_3;
}
