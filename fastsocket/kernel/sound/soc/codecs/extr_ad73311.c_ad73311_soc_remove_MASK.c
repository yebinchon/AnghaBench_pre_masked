
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (struct snd_soc_codec*) ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct snd_soc_device *VAR_1 = FUNC_1(VAR_0);
 struct snd_soc_codec *VAR_2 = VAR_1->card->codec;

 if (VAR_2 == ((void*)0))
  return 0;
 FUNC_2(VAR_1);
 FUNC_0(VAR_2);
 return 0;
}
