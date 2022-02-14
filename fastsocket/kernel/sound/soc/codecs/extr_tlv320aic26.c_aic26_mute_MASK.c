
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct aic26* private_data; } ;
struct aic26 {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int *,char*,struct snd_soc_dai*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_codec *VAR_3 = VAR_1->codec;
 struct aic26 *VAR_4 = VAR_3->private_data;
 u16 VAR_5 = FUNC_0(VAR_3, VAR_0);

 FUNC_2(&VAR_4->spi->dev, "aic26_mute(dai=%p, mute=%i)\n",
  VAR_1, VAR_2);

 if (VAR_2)
  VAR_5 |= 0x8080;
 else
  VAR_5 &= ~0x8080;
 FUNC_1(VAR_3, VAR_0, VAR_5);

 return 0;
}
