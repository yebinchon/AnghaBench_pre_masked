
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int reg_cache; scalar_t__ control_data; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (int ) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_device*) ;
 int FUNC_4 (struct snd_soc_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct snd_soc_device *VAR_2 = FUNC_2(VAR_1);
 struct snd_soc_codec *VAR_3 = VAR_2->card->codec;


 if (VAR_3->control_data)
  FUNC_0(VAR_3, VAR_0);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_1(VAR_3->reg_cache);

 return 0;
}
