
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int running; } ;
struct snd_trident {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; unsigned int buffer_size; struct snd_trident_voice* private_data; } ;
typedef unsigned int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 unsigned int FUNC_1 (int ) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_trident_voice *VAR_4 = VAR_3->private_data;
 unsigned int VAR_5;

 if (!VAR_4->running)
  return 0;

 VAR_5 = FUNC_1(FUNC_0(VAR_2, VAR_0));
 if (VAR_3->channels > 1)
  VAR_5 >>= 1;
 if (VAR_5 > 0)
  VAR_5 = VAR_3->buffer_size - VAR_5;

 return VAR_5;
}
