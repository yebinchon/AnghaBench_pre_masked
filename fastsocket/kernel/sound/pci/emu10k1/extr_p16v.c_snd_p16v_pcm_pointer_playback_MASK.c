
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int buffer_size; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int running; } ;
struct snd_emu10k1 {int p16v_device_offset; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_emu10k1_pcm *VAR_5 = VAR_4->private_data;
 snd_pcm_uframes_t VAR_6, VAR_7, VAR_8,VAR_9,VAR_10 = 0;
 int VAR_11 = VAR_2->pcm->device - VAR_3->p16v_device_offset;
 if (!VAR_5->running)
  return 0;

 VAR_9 = FUNC_1(VAR_3, VAR_0, VAR_11);
 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_11);
 VAR_10 = FUNC_1(VAR_3, VAR_0, VAR_11);
 if (VAR_9 != VAR_10) VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_11);
 VAR_8 = FUNC_0(VAR_4, VAR_7);
 VAR_8+= (VAR_10 >> 3) * VAR_4->period_size;
 VAR_6=VAR_8;
        if (VAR_6 >= VAR_4->buffer_size)
  VAR_6 -= VAR_4->buffer_size;

 return VAR_6;
}
