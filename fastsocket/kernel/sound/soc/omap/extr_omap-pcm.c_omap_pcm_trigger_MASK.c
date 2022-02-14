
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct omap_runtime_data* private_data; } ;
struct omap_runtime_data {int period_index; int lock; int dma_ch; struct omap_pcm_dma_data* dma_data; } ;
struct omap_pcm_dma_data {int (* set_threshold ) (struct snd_pcm_substream*) ;} ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct omap_runtime_data *VAR_4 = VAR_3->private_data;
 struct omap_pcm_dma_data *VAR_5 = VAR_4->dma_data;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_4->lock, VAR_6);
 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  VAR_4->period_index = 0;

  if (VAR_5->set_threshold)
   VAR_5->set_threshold(VAR_1);

  FUNC_0(VAR_4->dma_ch);
  break;

 case 129:
 case 128:
 case 133:
  VAR_4->period_index = -1;
  FUNC_1(VAR_4->dma_ch);
  break;
 default:
  VAR_7 = -VAR_0;
 }
 FUNC_3(&VAR_4->lock, VAR_6);

 return VAR_7;
}
