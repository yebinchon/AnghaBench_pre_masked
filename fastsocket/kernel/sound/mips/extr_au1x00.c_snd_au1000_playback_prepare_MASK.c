
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct snd_pcm_runtime {int channels; int rate; } ;
struct snd_au1000 {int ac97; } ;
struct TYPE_2__ {struct snd_au1000* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_au1000*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_3)
{
 struct snd_au1000 *VAR_4 = VAR_3->pcm->private_data;
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;

 if (VAR_5->channels == 1)
  FUNC_0(VAR_4, VAR_2);
 else
  FUNC_0(VAR_4, VAR_1 | VAR_2);
 FUNC_1(VAR_4->ac97, VAR_0, VAR_5->rate);
 return 0;
}
