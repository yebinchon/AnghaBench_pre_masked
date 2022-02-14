
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int info; int access; int channels; size_t dma_bytes; int format; } ;
struct snd_pcm_channel_info {int offset; int first; int channel; int step; } ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
       void *VAR_2)
{
 struct snd_pcm_channel_info *VAR_3 = VAR_2;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 int VAR_5;
 if (!(VAR_4->info & VAR_0)) {
  VAR_3->offset = -1;
  return 0;
 }
 VAR_5 = FUNC_1(VAR_4->format);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->offset = 0;
 switch (VAR_4->access) {
 case 131:
 case 129:
  VAR_3->first = VAR_3->channel * VAR_5;
  VAR_3->step = VAR_4->channels * VAR_5;
  break;
 case 130:
 case 128:
 {
  size_t VAR_6 = VAR_4->dma_bytes / VAR_4->channels;
  VAR_3->first = VAR_3->channel * VAR_6 * 8;
  VAR_3->step = VAR_5;
  break;
 }
 default:
  FUNC_0();
  break;
 }
 return 0;
}
