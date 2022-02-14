
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct snd_soc_codec*) ;
 struct snd_soc_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int VAR_1 ;
 int FUNC_7 (struct snd_soc_codec*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct snd_soc_device *VAR_4 = FUNC_4(VAR_3);
 struct snd_soc_codec *VAR_5 = VAR_4->card->codec;

 if (VAR_5->control_data)
  FUNC_7(VAR_5, VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2);
 FUNC_6(VAR_4);
 FUNC_5(VAR_4);




 FUNC_3(VAR_5->private_data);
 FUNC_3(VAR_5);

 return 0;
}
