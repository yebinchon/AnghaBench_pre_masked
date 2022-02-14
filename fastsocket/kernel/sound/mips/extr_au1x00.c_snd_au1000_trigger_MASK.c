
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct audio_stream* private_data; } ;
struct audio_stream {int dma_lock; } ;


 int VAR_0 ;


 int FUNC_0 (struct audio_stream*) ;
 int FUNC_1 (struct audio_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct audio_stream *VAR_3 = VAR_1->private_data;
 int VAR_4 = 0;

 FUNC_2(&VAR_3->dma_lock);
 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_3);
  break;
 case 128:
  FUNC_1(VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 FUNC_3(&VAR_3->dma_lock);
 return VAR_4;
}
