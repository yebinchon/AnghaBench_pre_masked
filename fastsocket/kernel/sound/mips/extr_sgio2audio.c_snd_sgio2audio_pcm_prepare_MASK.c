
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sgio2audio_chan {int idx; } ;
struct snd_sgio2audio {TYPE_1__* channel; int ad1843; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; struct snd_sgio2audio_chan* private_data; } ;
struct TYPE_2__ {int lock; struct snd_pcm_substream* substream; scalar_t__ size; scalar_t__ pos; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 struct snd_sgio2audio* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_sgio2audio *VAR_2 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_sgio2audio_chan *VAR_4 = VAR_1->runtime->private_data;
 int VAR_5 = VAR_4->idx;
 unsigned long VAR_6;

 FUNC_3(&VAR_2->channel[VAR_5].lock, VAR_6);


 VAR_2->channel[VAR_5].pos = 0;
 VAR_2->channel[VAR_5].size = 0;
 VAR_2->channel[VAR_5].substream = VAR_1;



 switch (VAR_1->stream) {
 case 128:
  FUNC_1(&VAR_2->ad1843,
     VAR_5 - 1,
     VAR_3->rate,
     VAR_0,
     VAR_3->channels);
  break;
 case 129:
  FUNC_0(&VAR_2->ad1843,
     VAR_3->rate,
     VAR_0,
     VAR_3->channels);
  break;
 }
 FUNC_4(&VAR_2->channel[VAR_5].lock, VAR_6);
 return 0;
}
