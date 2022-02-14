
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sport_device* private_data; } ;
typedef unsigned int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct sport_device*) ;
 unsigned int FUNC_1 (struct sport_device*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct sport_device *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 snd_pcm_uframes_t VAR_5;

 if (VAR_1->stream == VAR_0) {
  VAR_4 = FUNC_1(VAR_3);
  VAR_5 = VAR_4 / (8*4);
 } else {
  VAR_4 = FUNC_0(VAR_3);
  VAR_5 = VAR_4 / (8*4);
 }
 return VAR_5;
}
