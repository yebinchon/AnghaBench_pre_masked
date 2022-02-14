
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int rates; unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {unsigned int rates; unsigned int rate_min; unsigned int rate_max; } ;
struct snd_soc_dai {TYPE_2__ capture; TYPE_1__ playback; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct cs4270_private* private_data; } ;
struct cs4270_private {unsigned int mclk; } ;
struct TYPE_6__ {unsigned int ratio; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4,
     int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_codec *VAR_8 = VAR_4->codec;
 struct cs4270_private *VAR_9 = VAR_8->private_data;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = -1;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;

 VAR_9->mclk = VAR_6;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  unsigned int VAR_14 = VAR_6 / VAR_3[VAR_13].ratio;
  VAR_10 |= FUNC_1(VAR_14);
  if (VAR_14 < VAR_11)
   VAR_11 = VAR_14;
  if (VAR_14 > VAR_12)
   VAR_12 = VAR_14;
 }

 VAR_10 &= ~VAR_2;

 if (!VAR_10) {
  FUNC_0(VAR_8->dev, "could not find a valid sample rate\n");
  return -VAR_0;
 }

 VAR_4->playback.rates = VAR_10;
 VAR_4->playback.rate_min = VAR_11;
 VAR_4->playback.rate_max = VAR_12;

 VAR_4->capture.rates = VAR_10;
 VAR_4->capture.rate_min = VAR_11;
 VAR_4->capture.rate_max = VAR_12;

 return 0;
}
