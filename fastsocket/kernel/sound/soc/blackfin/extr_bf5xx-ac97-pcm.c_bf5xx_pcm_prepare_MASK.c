
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int rx_dma_buf; int tx_dma_buf; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int periods; int dma_area; struct sport_device* private_data; } ;
struct ac97_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sport_device*,int ,int ,int) ;
 int FUNC_1 (struct sport_device*,int ,int ,int) ;
 int FUNC_2 (struct sport_device*,int ,struct snd_pcm_substream*) ;
 int FUNC_3 (struct sport_device*,int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct sport_device *VAR_4 = VAR_3->private_data;
 if (VAR_2->stream == VAR_0) {
  FUNC_3(VAR_4, VAR_1, VAR_2);
  FUNC_1(VAR_4, VAR_3->dma_area, VAR_3->periods,
   VAR_3->period_size * sizeof(struct ac97_frame));
 } else {
  FUNC_2(VAR_4, VAR_1, VAR_2);
  FUNC_0(VAR_4, VAR_3->dma_area, VAR_3->periods,
   VAR_3->period_size * sizeof(struct ac97_frame));
 }

 return 0;
}
