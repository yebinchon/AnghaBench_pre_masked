
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct TYPE_2__ {int data_alignment; } ;
struct snd_usb_caiaqdev {int n_streams; size_t* audio_out_buf_pos; TYPE_1__ spec; int * period_out_count; struct snd_pcm_substream** sub_playback; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct snd_usb_caiaqdev*,int,int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_caiaqdev *VAR_2,
    struct urb *VAR_3,
    const struct usb_iso_packet_descriptor *VAR_4)
{
 unsigned char *VAR_5 = VAR_3->transfer_buffer + VAR_4->offset;
 struct snd_pcm_substream *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->length;) {
  for (VAR_7 = 0; VAR_7 < VAR_2->n_streams; VAR_7++, VAR_8++) {
   VAR_6 = VAR_2->sub_playback[VAR_7];
   if (VAR_6) {
    struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
    char *VAR_10 = VAR_9->dma_area;
    int VAR_11 = FUNC_1(VAR_9, VAR_9->buffer_size);
    VAR_5[VAR_8] =
     VAR_10[VAR_2->audio_out_buf_pos[VAR_7]];
    VAR_2->period_out_count[VAR_7]++;
    VAR_2->audio_out_buf_pos[VAR_7]++;
    if (VAR_2->audio_out_buf_pos[VAR_7] == VAR_11)
     VAR_2->audio_out_buf_pos[VAR_7] = 0;
   } else
    VAR_5[VAR_8] = 0;
  }


  if (VAR_2->spec.data_alignment == 2 &&
      VAR_8 % (VAR_2->n_streams * VAR_0) ==
          (VAR_2->n_streams * VAR_1))
   for (VAR_7 = 0; VAR_7 < VAR_2->n_streams; VAR_7++, VAR_8++)
    VAR_5[VAR_8] = FUNC_0(VAR_2, VAR_7, VAR_8);
 }
}
