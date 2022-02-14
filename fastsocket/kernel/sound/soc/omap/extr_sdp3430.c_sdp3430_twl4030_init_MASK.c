
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_2 (struct snd_soc_codec*,char*) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,char*,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_codec *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_5(VAR_7, VAR_5,
    FUNC_0(VAR_5));
 if (VAR_8)
  return VAR_8;


 FUNC_1(VAR_7, VAR_1, FUNC_0(VAR_1));


 FUNC_3(VAR_7, "Ext Mic");
 FUNC_3(VAR_7, "Ext Spk");
 FUNC_2(VAR_7, "Headset Mic");
 FUNC_2(VAR_7, "Headset Stereophone");


 FUNC_4(VAR_7, "AUXL");
 FUNC_4(VAR_7, "AUXR");
 FUNC_4(VAR_7, "CARKITMIC");
 FUNC_4(VAR_7, "DIGIMIC0");
 FUNC_4(VAR_7, "DIGIMIC1");

 FUNC_4(VAR_7, "OUTL");
 FUNC_4(VAR_7, "OUTR");
 FUNC_4(VAR_7, "EARPIECE");
 FUNC_4(VAR_7, "PREDRIVEL");
 FUNC_4(VAR_7, "PREDRIVER");
 FUNC_4(VAR_7, "CARKITL");
 FUNC_4(VAR_7, "CARKITR");

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_9(&VAR_6, "Headset Jack",
    VAR_0, &VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(&VAR_2, FUNC_0(VAR_4),
    VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(&VAR_2, FUNC_0(VAR_3),
    VAR_3);

 return VAR_8;
}
