
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; int actual_length; } ;
struct urb {scalar_t__ start_frame; struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct snd_usX2Y_substream {TYPE_1__* usX2Y; } ;
struct snd_usX2Y_hwdep_pcm_shm {int captured_iso_head; int captured_iso_frames; TYPE_2__* captured_iso; } ;
struct TYPE_4__ {int offset; int length; scalar_t__ frame; } ;
struct TYPE_3__ {struct snd_usX2Y_hwdep_pcm_shm* hwdep_pcm_shm; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct snd_usX2Y_substream *VAR_2,
           struct urb *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_1(); ++VAR_4) {
  struct usb_iso_packet_descriptor *VAR_5 = VAR_3->iso_frame_desc + VAR_4;
  if (((void*)0) != VAR_2) {
   struct snd_usX2Y_hwdep_pcm_shm *VAR_6 = VAR_2->usX2Y->hwdep_pcm_shm;
   int VAR_7 = VAR_6->captured_iso_head + 1;
   if (VAR_7 >= FUNC_0(VAR_6->captured_iso))
    VAR_7 = 0;
   VAR_6->captured_iso[VAR_7].frame = VAR_3->start_frame + VAR_4;
   VAR_6->captured_iso[VAR_7].offset = VAR_5->offset;
   VAR_6->captured_iso[VAR_7].length = VAR_5->actual_length;
   VAR_6->captured_iso_head = VAR_7;
   VAR_6->captured_iso_frames++;
  }
  if ((VAR_5->offset += VAR_5->length * VAR_0*FUNC_1()) +
      VAR_5->length >= VAR_1)
   VAR_5->offset -= (VAR_1 - VAR_5->length);
 }
}
