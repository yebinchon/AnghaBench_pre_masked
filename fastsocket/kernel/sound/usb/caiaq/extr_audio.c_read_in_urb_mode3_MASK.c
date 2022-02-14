
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int offset; int actual_length; } ;
struct urb {unsigned char* transfer_buffer; } ;
struct snd_usb_caiaqdev {int n_streams; int input_panic; int* audio_in_buf_pos; int* period_in_count; scalar_t__ first_packet; struct snd_pcm_substream** sub_capture; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {char* dma_area; int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (char*,int,unsigned char,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_caiaqdev *VAR_3,
         const struct urb *VAR_4,
         const struct usb_iso_packet_descriptor *VAR_5)
{
 unsigned char *VAR_6 = VAR_4->transfer_buffer + VAR_5->offset;
 int VAR_7, VAR_8;


 if (VAR_5->actual_length % (VAR_1 * VAR_2))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_5->actual_length;) {
  for (VAR_7 = 0; VAR_7 < VAR_3->n_streams; VAR_7++) {
   struct snd_pcm_substream *VAR_9 = VAR_3->sub_capture[VAR_7];
   char *VAR_10 = ((void*)0);
   int VAR_11, VAR_12, VAR_13 = 0;

   if (VAR_9 && !VAR_3->input_panic) {
    struct snd_pcm_runtime *VAR_14 = VAR_9->runtime;
    VAR_10 = VAR_14->dma_area;
    VAR_13 = FUNC_0(VAR_14, VAR_14->buffer_size);
   }

   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {

    if (VAR_10) {
     for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
      VAR_10[VAR_3->audio_in_buf_pos[VAR_7]++] = VAR_6[VAR_8+VAR_12];

      if (VAR_3->audio_in_buf_pos[VAR_7] == VAR_13)
       VAR_3->audio_in_buf_pos[VAR_7] = 0;
     }

     VAR_3->period_in_count[VAR_7] += VAR_0;
    }

    VAR_8 += VAR_0;

    if (VAR_6[VAR_8] != ((VAR_7 << 1) | VAR_11) &&
        !VAR_3->first_packet) {
     if (!VAR_3->input_panic)
      FUNC_1(" EXPECTED: %02x got %02x, c %d, stream %d, i %d\n",
       ((VAR_7 << 1) | VAR_11), VAR_6[VAR_8], VAR_11, VAR_7, VAR_8);
     VAR_3->input_panic = 1;
    }

    VAR_8++;
   }
  }
 }

 if (VAR_3->first_packet > 0)
  VAR_3->first_packet--;
}
