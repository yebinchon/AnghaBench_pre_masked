
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dev; } ;


 struct snd_soc_codec* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_codec*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "Failed to initialise device\n");
  return VAR_3;
 }

 VAR_0 = VAR_2;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Failed to register codec\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(&VAR_1);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Failed to register dai\n");
  FUNC_4(VAR_2);
  return VAR_3;
 }

 return 0;
}
