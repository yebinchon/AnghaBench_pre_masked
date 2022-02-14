
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3,
 pm_message_t VAR_4)
{
 struct snd_soc_device *VAR_5 = FUNC_2(VAR_3);
 struct snd_soc_codec *VAR_6 = VAR_5->card->codec;
 u16 VAR_7;




 VAR_7 = FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_0, VAR_7 | 0x7fff);
 FUNC_1(VAR_6, VAR_1, 0xffff);
 FUNC_1(VAR_6, VAR_2, 0x6f00);
 FUNC_1(VAR_6, VAR_2, 0xffff);

 return 0;
}
