
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int actual_length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct snd_usb_caiaqdev {int n_streams; int input_panic; int output_panic; int* audio_in_buf_pos; int * period_in_count; struct snd_pcm_substream** sub_capture; scalar_t__ first_packet; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct snd_usb_caiaqdev*,int,int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_caiaqdev *VAR_1,
         const struct urb *VAR_2,
         const struct usb_iso_packet_descriptor *VAR_3)
{
 unsigned char *VAR_4 = VAR_2->transfer_buffer + VAR_3->offset;
 unsigned char VAR_5;
 struct snd_pcm_substream *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->actual_length;) {
  if (VAR_8 % (VAR_1->n_streams * VAR_0) == 0) {
   for (VAR_7 = 0;
        VAR_7 < VAR_1->n_streams;
        VAR_7++, VAR_8++) {
    if (VAR_1->first_packet)
     continue;

    VAR_5 = FUNC_0(VAR_1, VAR_7, VAR_8);

    if ((VAR_4[VAR_8] & 0x3f) != VAR_5)
     VAR_1->input_panic = 1;

    if (VAR_4[VAR_8] & 0x80)
     VAR_1->output_panic = 1;
   }
  }
  VAR_1->first_packet = 0;

  for (VAR_7 = 0; VAR_7 < VAR_1->n_streams; VAR_7++, VAR_8++) {
   VAR_6 = VAR_1->sub_capture[VAR_7];
   if (VAR_1->input_panic)
    VAR_4[VAR_8] = 0;

   if (VAR_6) {
    struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
    char *VAR_10 = VAR_9->dma_area;
    int VAR_11 = FUNC_1(VAR_9, VAR_9->buffer_size);
    VAR_10[VAR_1->audio_in_buf_pos[VAR_7]++] =
     VAR_4[VAR_8];
    VAR_1->period_in_count[VAR_7]++;
    if (VAR_1->audio_in_buf_pos[VAR_7] == VAR_11)
     VAR_1->audio_in_buf_pos[VAR_7] = 0;
   }
  }
 }
}
