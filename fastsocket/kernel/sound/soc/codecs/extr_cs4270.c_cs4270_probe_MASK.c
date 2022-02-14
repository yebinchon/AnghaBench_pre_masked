
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dev; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_codec* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct snd_soc_device *VAR_5 = FUNC_2(VAR_4);
 struct snd_soc_codec *VAR_6 = VAR_2;
 int VAR_7;


 VAR_5->card->codec = VAR_6;


 VAR_7 = FUNC_6(VAR_5, VAR_0, VAR_1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev, "failed to create pcms\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_6, VAR_3,
    FUNC_0(VAR_3));
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev, "failed to add controls\n");
  goto error_free_pcms;
 }


 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev, "failed to register card\n");
  goto error_free_pcms;
 }

 return 0;

error_free_pcms:
 FUNC_4(VAR_5);

 return VAR_7;
}
