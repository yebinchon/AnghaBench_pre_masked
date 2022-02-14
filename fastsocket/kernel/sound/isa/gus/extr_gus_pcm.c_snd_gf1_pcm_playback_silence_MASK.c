
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; int format; struct gus_pcm_private* private_data; } ;
struct snd_gus_card {int dummy; } ;
struct gus_pcm_private {int dma_size; scalar_t__ memory; struct snd_gus_card* gus; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_3 (struct snd_gus_card*,scalar_t__,scalar_t__,unsigned int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2,
     int VAR_3,
     snd_pcm_uframes_t VAR_4,
     snd_pcm_uframes_t VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_2->runtime;
 struct gus_pcm_private *VAR_7 = VAR_6->private_data;
 unsigned int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_4) + (VAR_3 * (VAR_7->dma_size / 2));
 VAR_9 = FUNC_0(VAR_6, VAR_5);
 if (FUNC_1(VAR_8 > VAR_7->dma_size))
  return -VAR_0;
 if (FUNC_1(VAR_8 + VAR_9 > VAR_7->dma_size))
  return -VAR_0;
 FUNC_4(VAR_6->format, VAR_6->dma_area + VAR_8, VAR_5);
 if (VAR_1 && VAR_9 > 32) {
  return FUNC_2(VAR_2, VAR_8, VAR_7->memory + VAR_8, VAR_9);
 } else {
  struct snd_gus_card *VAR_10 = VAR_7->gus;
  int VAR_11, VAR_12, VAR_13;

  VAR_12 = (FUNC_6(VAR_6->format) == 16);
  VAR_13 = FUNC_5(VAR_6->format);
  if ((VAR_11 = FUNC_3(VAR_10, VAR_6->dma_area + VAR_8, VAR_7->memory + VAR_8, VAR_9, VAR_12, VAR_13)) < 0)
   return VAR_11;
 }
 return 0;
}
