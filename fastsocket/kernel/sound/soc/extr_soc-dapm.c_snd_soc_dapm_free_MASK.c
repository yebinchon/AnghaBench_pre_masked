
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {int dev; TYPE_1__* card; } ;
struct snd_soc_codec {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (struct snd_soc_codec*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct snd_soc_device *VAR_0)
{
 struct snd_soc_codec *VAR_1 = VAR_0->card->codec;

 FUNC_1(VAR_0->dev);
 FUNC_0(VAR_1);
}
