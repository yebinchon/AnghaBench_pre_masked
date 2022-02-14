
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int periods; int dma_area; int period_size; struct sport_device* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct sport_device*,int ,int ,int) ;
 int FUNC_2 (struct sport_device*,int ,int ,int) ;
 int FUNC_3 (struct sport_device*,int ,struct snd_pcm_substream*) ;
 int FUNC_4 (struct sport_device*,int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct sport_device *VAR_4 = VAR_3->private_data;
 int VAR_5 = FUNC_0(VAR_3, VAR_3->period_size);

 VAR_5 /= VAR_3->channels;

 VAR_5 *= 8;

 if (VAR_2->stream == VAR_0) {
  FUNC_4(VAR_4, VAR_1, VAR_2);
  FUNC_2(VAR_4, VAR_3->dma_area,
   VAR_3->periods, VAR_5);
 } else {
  FUNC_3(VAR_4, VAR_1, VAR_2);
  FUNC_1(VAR_4, VAR_3->dma_area,
   VAR_3->periods, VAR_5);
 }

 return 0;
}
