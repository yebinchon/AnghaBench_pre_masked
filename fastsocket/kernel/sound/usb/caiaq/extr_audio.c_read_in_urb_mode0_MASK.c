
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int actual_length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct snd_usb_caiaqdev {int n_streams; int* audio_in_buf_pos; int * period_in_count; struct snd_pcm_substream** sub_capture; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream**) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_caiaqdev *VAR_0,
         const struct urb *VAR_1,
         const struct usb_iso_packet_descriptor *VAR_2)
{
 unsigned char *VAR_3 = VAR_1->transfer_buffer + VAR_2->offset;
 struct snd_pcm_substream *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_0(VAR_0->sub_capture))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2->actual_length;) {
  for (VAR_5 = 0; VAR_5 < VAR_0->n_streams; VAR_5++, VAR_6++) {
   VAR_4 = VAR_0->sub_capture[VAR_5];
   if (VAR_4) {
    struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
    char *VAR_8 = VAR_7->dma_area;
    int VAR_9 = FUNC_1(VAR_7, VAR_7->buffer_size);
    VAR_8[VAR_0->audio_in_buf_pos[VAR_5]++]
     = VAR_3[VAR_6];
    VAR_0->period_in_count[VAR_5]++;
    if (VAR_0->audio_in_buf_pos[VAR_5] == VAR_9)
     VAR_0->audio_in_buf_pos[VAR_5] = 0;
   }
  }
 }
}
