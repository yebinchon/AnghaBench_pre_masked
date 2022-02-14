
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_device {struct snd_soc_card* card; } ;
struct snd_soc_card {int * dev; struct snd_soc_device* socdev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1 = 0;
 struct snd_soc_device *VAR_2 = FUNC_1(VAR_0);
 struct snd_soc_card *VAR_3 = VAR_2->card;


 VAR_3->socdev = VAR_2;


 VAR_3->dev = &VAR_0->dev;
 VAR_1 = FUNC_2(VAR_3);
 if (VAR_1 != 0) {
  FUNC_0(&VAR_0->dev, "Failed to register card\n");
  return VAR_1;
 }

 return 0;
}
