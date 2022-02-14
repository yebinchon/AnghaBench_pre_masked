
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct ssp_device* ssp; } ;
struct ssp_priv {TYPE_2__ dev; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {struct ssp_priv* private_data; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ssp_device*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ssp_device*,int ) ;
 int FUNC_4 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6, int VAR_7,
      struct snd_soc_dai *VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_6->private_data;
 struct snd_soc_dai *VAR_10 = VAR_9->dai->cpu_dai;
 int VAR_11 = 0;
 struct ssp_priv *VAR_12 = VAR_10->private_data;
 struct ssp_device *VAR_13 = VAR_12->dev.ssp;
 int VAR_14;

 switch (VAR_7) {
 case 131:
  FUNC_2(&VAR_12->dev);
  break;
 case 132:
  VAR_14 = FUNC_3(VAR_13, VAR_2);
  if (VAR_6->stream == VAR_1)
   VAR_14 |= VAR_4;
  else
   VAR_14 |= VAR_3;
  FUNC_4(VAR_13, VAR_2, VAR_14);
  VAR_14 = FUNC_3(VAR_13, VAR_5);
  FUNC_4(VAR_13, VAR_5, VAR_14);
  break;
 case 130:
  VAR_14 = FUNC_3(VAR_13, VAR_2);
  if (VAR_6->stream == VAR_1)
   VAR_14 |= VAR_4;
  else
   VAR_14 |= VAR_3;
  FUNC_4(VAR_13, VAR_2, VAR_14);
  FUNC_2(&VAR_12->dev);
  break;
 case 129:
  VAR_14 = FUNC_3(VAR_13, VAR_2);
  if (VAR_6->stream == VAR_1)
   VAR_14 &= ~VAR_4;
  else
   VAR_14 &= ~VAR_3;
  FUNC_4(VAR_13, VAR_2, VAR_14);
  break;
 case 128:
  FUNC_1(&VAR_12->dev);
  break;
 case 133:
  VAR_14 = FUNC_3(VAR_13, VAR_2);
  if (VAR_6->stream == VAR_1)
   VAR_14 &= ~VAR_4;
  else
   VAR_14 &= ~VAR_3;
  FUNC_4(VAR_13, VAR_2, VAR_14);
  break;

 default:
  VAR_11 = -VAR_0;
 }

 FUNC_0(VAR_13);

 return VAR_11;
}
