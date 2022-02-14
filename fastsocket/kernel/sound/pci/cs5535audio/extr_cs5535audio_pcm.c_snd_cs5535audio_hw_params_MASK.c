
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs5535audio_dma {int pcm_open_flag; int buf_bytes; int buf_addr; } ;
struct cs5535audio {int dummy; } ;
struct TYPE_2__ {int dma_addr; struct cs5535audio_dma* private_data; } ;


 int FUNC_0 (struct cs5535audio*,struct cs5535audio_dma*,struct snd_pcm_substream*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct cs5535audio* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_hw_params *VAR_1)
{
 struct cs5535audio *VAR_2 = FUNC_5(VAR_0);
 struct cs5535audio_dma *VAR_3 = VAR_0->runtime->private_data;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0,
     FUNC_1(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->buf_addr = VAR_0->runtime->dma_addr;
 VAR_3->buf_bytes = FUNC_1(VAR_1);

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0,
         FUNC_3(VAR_1),
         FUNC_2(VAR_1));
 if (!VAR_4)
  VAR_3->pcm_open_flag = 1;

 return VAR_4;
}
