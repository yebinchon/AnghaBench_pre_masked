
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_9,
     struct snd_soc_dai *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_9->private_data;
 struct snd_soc_device *VAR_12 = VAR_11->socdev;
 struct snd_soc_codec *VAR_13 = VAR_12->card->codec;
 u16 VAR_14 = FUNC_0(VAR_13, VAR_7);


 if (VAR_14 & VAR_0) {
  u16 VAR_15 = FUNC_0(VAR_13, VAR_8);
  FUNC_1(VAR_13, VAR_8, ~VAR_5 & VAR_15);
 }

 if (VAR_9->stream == VAR_6)
  VAR_14 &= ~(VAR_2 | VAR_4);
 else
  VAR_14 &= ~(VAR_1 | VAR_3);

 FUNC_1(VAR_13, VAR_7, VAR_14);
}
