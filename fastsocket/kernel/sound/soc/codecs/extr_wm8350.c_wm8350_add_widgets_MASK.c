
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_codec*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2,
     VAR_1,
     FUNC_0(VAR_1));
 if (VAR_3 != 0) {
  FUNC_1(VAR_2->dev, "dapm control register failed\n");
  return VAR_3;
 }


 VAR_3 = FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_0));
 if (VAR_3 != 0) {
  FUNC_1(VAR_2->dev, "DAPM route register failed\n");
  return VAR_3;
 }

 return FUNC_4(VAR_2);
}
