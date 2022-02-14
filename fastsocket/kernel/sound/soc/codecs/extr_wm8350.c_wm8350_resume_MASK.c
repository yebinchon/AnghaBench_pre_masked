
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {scalar_t__ suspend_bias_level; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct snd_soc_codec*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_0(VAR_2);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;

 FUNC_1(VAR_4, VAR_1);

 if (VAR_4->suspend_bias_level == VAR_0)
  FUNC_1(VAR_4, VAR_0);

 return 0;
}
