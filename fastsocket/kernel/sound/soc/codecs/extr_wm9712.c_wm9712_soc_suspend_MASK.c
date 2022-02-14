
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1,
 pm_message_t VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_0(VAR_1);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;

 FUNC_1(VAR_4, VAR_0);
 return 0;
}
