
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct davinci_audio_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct davinci_audio_dev* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (struct davinci_audio_dev*,int ) ;
 int FUNC_1 (struct davinci_audio_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
         int VAR_2, struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct davinci_audio_dev *VAR_5 = VAR_4->dai->cpu_dai->private_data;
 int VAR_6 = 0;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_5, VAR_1->stream);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_5, VAR_1->stream);
  break;

 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
