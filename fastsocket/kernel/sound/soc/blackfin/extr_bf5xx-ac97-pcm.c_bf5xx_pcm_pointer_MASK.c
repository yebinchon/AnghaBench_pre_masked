
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {unsigned int tx_delay_pos; unsigned int rx_pos; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sport_device* private_data; } ;
struct ac97_frame {int dummy; } ;
typedef unsigned int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sport_device*) ;
 int FUNC_1 (struct sport_device*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct sport_device *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 if (VAR_1->stream == VAR_0)
  VAR_4 = FUNC_1(VAR_3) / sizeof(struct ac97_frame);
 else
  VAR_4 = FUNC_0(VAR_3) / sizeof(struct ac97_frame);


 return VAR_4;
}
