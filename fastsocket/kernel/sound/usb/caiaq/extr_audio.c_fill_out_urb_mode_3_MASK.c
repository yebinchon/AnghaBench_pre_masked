
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct snd_usb_caiaqdev {int n_streams; int* audio_out_buf_pos; int* period_out_count; struct snd_pcm_substream** sub_playback; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_caiaqdev *VAR_2,
    struct urb *VAR_3,
    const struct usb_iso_packet_descriptor *VAR_4)
{
 unsigned char *VAR_5 = VAR_3->transfer_buffer + VAR_4->offset;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->length;) {
  for (VAR_6 = 0; VAR_6 < VAR_2->n_streams; VAR_6++) {
   struct snd_pcm_substream *VAR_8 = VAR_2->sub_playback[VAR_6];
   char *VAR_9 = ((void*)0);
   int VAR_10, VAR_11, VAR_12 = 0;

   if (VAR_8) {
    struct snd_pcm_runtime *VAR_13 = VAR_8->runtime;
    VAR_9 = VAR_13->dma_area;
    VAR_12 = FUNC_0(VAR_13, VAR_13->buffer_size);
   }

   for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
     if (VAR_9) {
      VAR_5[VAR_7+VAR_11] = VAR_9[VAR_2->audio_out_buf_pos[VAR_6]++];

      if (VAR_2->audio_out_buf_pos[VAR_6] == VAR_12)
       VAR_2->audio_out_buf_pos[VAR_6] = 0;
     } else {
      VAR_5[VAR_7+VAR_11] = 0;
     }
    }

    if (VAR_9)
     VAR_2->period_out_count[VAR_6] += VAR_0;

    VAR_7 += VAR_0;


    VAR_5[VAR_7++] = (VAR_6 << 1) | VAR_10;
   }
  }
 }
}
