
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {int dev; TYPE_1__* card; } ;
struct snd_soc_dai {scalar_t__ ac97_control; } ;
struct snd_soc_codec {int num_dai; int mutex; scalar_t__ card; int name; scalar_t__ ac97; struct snd_soc_dai* dai; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_soc_codec*) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

void FUNC_7(struct snd_soc_device *VAR_1)
{
 struct snd_soc_codec *VAR_2 = VAR_1->card->codec;





 FUNC_1(&VAR_2->mutex);
 FUNC_5(VAR_2);
 if (VAR_2->card)
  FUNC_3(VAR_2->card);
 FUNC_0(VAR_1->dev, &VAR_0);
 FUNC_2(&VAR_2->mutex);
}
