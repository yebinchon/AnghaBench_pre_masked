
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int card; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_soc_codec*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,char*) ;
 int FUNC_6 (struct snd_soc_codec*,char*) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_codec *VAR_3)
{

 FUNC_7(VAR_3, VAR_0,
      FUNC_0(VAR_0));


 FUNC_3(VAR_3, VAR_1, FUNC_0(VAR_1));


 FUNC_6(VAR_3, "MONO_LOUT");
 FUNC_6(VAR_3, "LINE2L");
 FUNC_6(VAR_3, "LINE2R");


 FUNC_6(VAR_3, "MIC3L");
 FUNC_6(VAR_3, "MIC3R");
 FUNC_6(VAR_3, "LLOUT");
 FUNC_6(VAR_3, "RLOUT");
 FUNC_6(VAR_3, "HPRCOM");


 FUNC_5(VAR_3, "Audio In");


 FUNC_4(VAR_3, "Audio Out Differential");
 FUNC_8(VAR_3);
 FUNC_5(VAR_3, "Audio Out Stereo");

 FUNC_8(VAR_3);

 FUNC_1(VAR_3->card, FUNC_2(&VAR_2, VAR_3));

 return 0;
}
