
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {unsigned int transfer_buffer_length; scalar_t__ transfer_buffer; scalar_t__ number_of_packets; TYPE_1__* iso_frame_desc; struct snd_urb_ctx* context; } ;
struct snd_usb_substream {scalar_t__ transfer_done; scalar_t__ fmt_type; unsigned int hwptr_done; unsigned int last_delay; int last_frame_number; TYPE_2__* pcm_substream; int lock; int dev; struct snd_usb_endpoint* data_endpoint; } ;
struct snd_usb_endpoint {int dummy; } ;
struct snd_urb_ctx {int packets; int* packet_size; } ;
struct snd_pcm_runtime {int frame_bits; scalar_t__ period_size; int buffer_size; unsigned int delay; scalar_t__ dma_area; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {unsigned int offset; unsigned int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct snd_usb_endpoint*) ;
 unsigned int FUNC_3 (struct snd_usb_endpoint*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct snd_usb_substream *VAR_1,
     struct urb *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->pcm_substream->runtime;
 struct snd_usb_endpoint *VAR_4 = VAR_1->data_endpoint;
 struct snd_urb_ctx *VAR_5 = VAR_2->context;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 unsigned long VAR_12;

 VAR_10 = VAR_3->frame_bits >> 3;

 VAR_7 = 0;
 VAR_2->number_of_packets = 0;
 FUNC_4(&VAR_1->lock, VAR_12);
 for (VAR_9 = 0; VAR_9 < VAR_5->packets; VAR_9++) {
  if (VAR_5->packet_size[VAR_9])
   VAR_6 = VAR_5->packet_size[VAR_9];
  else
   VAR_6 = FUNC_3(VAR_4);


  VAR_2->iso_frame_desc[VAR_9].offset = VAR_7 * VAR_10;
  VAR_2->iso_frame_desc[VAR_9].length = VAR_6 * VAR_10;
  VAR_7 += VAR_6;
  VAR_2->number_of_packets++;
  VAR_1->transfer_done += VAR_6;
  if (VAR_1->transfer_done >= VAR_3->period_size) {
   VAR_1->transfer_done -= VAR_3->period_size;
   VAR_11 = 1;
   if (VAR_1->fmt_type == VAR_0) {
    if (VAR_1->transfer_done > 0) {


     VAR_7 -= VAR_1->transfer_done;
     VAR_6 -= VAR_1->transfer_done;
     VAR_2->iso_frame_desc[VAR_9].length =
      VAR_6 * VAR_10;
     VAR_1->transfer_done = 0;
    }
    VAR_9++;
    if (VAR_9 < VAR_5->packets) {

     VAR_2->iso_frame_desc[VAR_9].offset =
      VAR_7 * VAR_10;
     VAR_2->iso_frame_desc[VAR_9].length = 0;
     VAR_2->number_of_packets++;
    }
    break;
   }
  }
  if (VAR_11 &&
      !FUNC_2(VAR_1->data_endpoint))
   break;
 }
 VAR_8 = VAR_7 * VAR_10;
 if (VAR_1->hwptr_done + VAR_8 > VAR_3->buffer_size * VAR_10) {

  unsigned int VAR_13 =
   VAR_3->buffer_size * VAR_10 - VAR_1->hwptr_done;
  FUNC_0(VAR_2->transfer_buffer,
         VAR_3->dma_area + VAR_1->hwptr_done, VAR_13);
  FUNC_0(VAR_2->transfer_buffer + VAR_13,
         VAR_3->dma_area, VAR_8 - VAR_13);
 } else {
  FUNC_0(VAR_2->transfer_buffer,
         VAR_3->dma_area + VAR_1->hwptr_done, VAR_8);
 }
 VAR_1->hwptr_done += VAR_8;
 if (VAR_1->hwptr_done >= VAR_3->buffer_size * VAR_10)
  VAR_1->hwptr_done -= VAR_3->buffer_size * VAR_10;


 VAR_3->delay = VAR_1->last_delay;
 VAR_3->delay += VAR_7;
 VAR_1->last_delay = VAR_3->delay;


 VAR_1->last_frame_number = FUNC_6(VAR_1->dev);
 VAR_1->last_frame_number &= 0xFF;

 FUNC_5(&VAR_1->lock, VAR_12);
 VAR_2->transfer_buffer_length = VAR_8;
 if (VAR_11)
  FUNC_1(VAR_1->pcm_substream);
}
