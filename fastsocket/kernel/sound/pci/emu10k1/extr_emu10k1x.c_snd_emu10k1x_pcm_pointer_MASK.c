
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ period_size; struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {int running; TYPE_1__* voice; } ;
struct emu10k1x {int dummy; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct emu10k1x*,int ,int) ;
 struct emu10k1x* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct emu10k1x *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct emu10k1x_pcm *VAR_5 = VAR_4->private_data;
 int VAR_6 = VAR_5->voice->number;
 snd_pcm_uframes_t VAR_7 = 0, VAR_8 = 0, VAR_9= 0,VAR_10 = 0,VAR_11 = 0;

 if (!VAR_5->running)
  return 0;

 VAR_10 = FUNC_2(VAR_3, VAR_0, VAR_6);
 VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_6);
 VAR_11 = FUNC_2(VAR_3, VAR_0, VAR_6);

 if(VAR_11 == 0 && VAR_8 == FUNC_1(VAR_4, VAR_4->buffer_size))
  return 0;

 if (VAR_10 != VAR_11)
  VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_6);
 VAR_9 = FUNC_0(VAR_4, VAR_8);
 VAR_9 += (VAR_11 >> 3) * VAR_4->period_size;
 VAR_7 = VAR_9;

 if (VAR_7 >= VAR_4->buffer_size)
  VAR_7 -= VAR_4->buffer_size;

 return VAR_7;
}
