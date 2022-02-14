
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int frame_bits; int buffer_size; int channels; scalar_t__ format; scalar_t__ dma_area; } ;
struct pcm_urb {unsigned int buffer; TYPE_1__* packets; } ;
struct pcm_substream {int dma_off; int period_off; TYPE_2__* instance; } ;
struct pcm_runtime {int in_n_analog; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int actual_length; scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 struct pcm_runtime* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct pcm_substream *VAR_3, struct pcm_urb *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8 = 0;
 struct pcm_runtime *VAR_9 = FUNC_1(VAR_3->instance);
 struct snd_pcm_runtime *VAR_10 = VAR_3->instance->runtime;
 u32 *VAR_11 = ((void*)0);
 u32 *VAR_12 = (u32 *) (VAR_10->dma_area + VAR_3->dma_off
   * (VAR_10->frame_bits >> 3));
 u32 *VAR_13 = (u32 *) (VAR_10->dma_area + VAR_10->buffer_size
   * (VAR_10->frame_bits >> 3));
 int VAR_14 = VAR_10->channels << 2;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {


  if (VAR_4->packets[VAR_5].actual_length > 4)
   VAR_7 = (VAR_4->packets[VAR_5].actual_length - 4)
     / (VAR_9->in_n_analog << 2);
  else
   VAR_7 = 0;

  if (VAR_10->format == VAR_1)
   VAR_11 = (u32 *) (VAR_4->buffer + VAR_8);
  else if (VAR_10->format == VAR_2)
   VAR_11 = (u32 *) (VAR_4->buffer - 1 + VAR_8);
  else
   return;
  VAR_11++;
  VAR_8 += VAR_4->packets[VAR_5].length;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   FUNC_0(VAR_12, VAR_11, VAR_14);
   VAR_12 += VAR_10->channels;
   VAR_11 += VAR_9->in_n_analog;
   VAR_3->dma_off++;
   VAR_3->period_off++;
   if (VAR_12 == VAR_13) {
    VAR_3->dma_off = 0;
    VAR_12 = (u32 *) VAR_10->dma_area;
   }
  }
 }
}
