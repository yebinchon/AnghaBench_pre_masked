
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {struct snd_soc_codec* private_data; scalar_t__ control_data; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_soc_codec*) ;
 struct snd_soc_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int VAR_1 ;
 int FUNC_6 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_3(VAR_2);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;

 if (VAR_4->control_data)
  FUNC_6(VAR_4, VAR_0);

 FUNC_5(VAR_3);
 FUNC_4(VAR_3);




 FUNC_2(VAR_4->private_data);
 FUNC_2(VAR_4);

 return 0;
}
