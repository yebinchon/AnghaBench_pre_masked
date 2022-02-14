
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {scalar_t__ transfer_buffer; } ;
struct ua101_stream {unsigned int frame_bytes; unsigned int buffer_pos; scalar_t__ period_pos; TYPE_1__* substream; } ;
struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ period_size; int * dma_area; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct ua101_stream *VAR_0, struct urb *VAR_1,
         unsigned int VAR_2)
{
 struct snd_pcm_runtime *VAR_3;
 unsigned int VAR_4, VAR_5;
 u8 *VAR_6;

 VAR_3 = VAR_0->substream->runtime;
 VAR_4 = VAR_0->frame_bytes;
 VAR_6 = VAR_3->dma_area + VAR_0->buffer_pos * VAR_4;
 if (VAR_0->buffer_pos + VAR_2 <= VAR_3->buffer_size) {
  FUNC_0(VAR_6, VAR_1->transfer_buffer, VAR_2 * VAR_4);
 } else {

  VAR_5 = VAR_3->buffer_size - VAR_0->buffer_pos;
  FUNC_0(VAR_6, VAR_1->transfer_buffer, VAR_5 * VAR_4);
  FUNC_0(VAR_3->dma_area,
         VAR_1->transfer_buffer + VAR_5 * VAR_4,
         (VAR_2 - VAR_5) * VAR_4);
 }

 VAR_0->buffer_pos += VAR_2;
 if (VAR_0->buffer_pos >= VAR_3->buffer_size)
  VAR_0->buffer_pos -= VAR_3->buffer_size;
 VAR_0->period_pos += VAR_2;
 if (VAR_0->period_pos >= VAR_3->period_size) {
  VAR_0->period_pos -= VAR_3->period_size;
  return 1;
 }
 return 0;
}
