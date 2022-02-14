
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_device {struct snd_soc_card* card; } ;
struct snd_soc_card {int delayed_work; int instantiated; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_device*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_3(VAR_0);
 struct snd_soc_device *VAR_2 = FUNC_0(VAR_1);
 struct snd_soc_card *VAR_3 = VAR_2->card;

 if (!VAR_3->instantiated)
  return 0;



 FUNC_1(&VAR_3->delayed_work);

 FUNC_2(VAR_2);

 return 0;
}
