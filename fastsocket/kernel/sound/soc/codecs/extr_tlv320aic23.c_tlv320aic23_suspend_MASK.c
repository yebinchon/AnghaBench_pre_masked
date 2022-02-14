
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
 int VAR_1 ;
 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
          pm_message_t VAR_3)
{
 struct snd_soc_device *VAR_4 = FUNC_0(VAR_2);
 struct snd_soc_codec *VAR_5 = VAR_4->card->codec;

 FUNC_2(VAR_5, VAR_1, 0x0);
 FUNC_1(VAR_5, VAR_0);

 return 0;
}
