
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transfer_buffer_length; } ;
struct snd_usb_caiaqdev {int* midi_out_buf; int midi_out_active; TYPE_1__ midi_out_urb; } ;
struct snd_rawmidi_substream {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct snd_rawmidi_substream*,int,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_caiaqdev *VAR_3,
        struct snd_rawmidi_substream *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_3->midi_out_buf[0] = VAR_1;
 VAR_3->midi_out_buf[1] = 0;
 VAR_5 = FUNC_1(VAR_4, VAR_3->midi_out_buf + 3,
       VAR_0 - 3);

 if (VAR_5 <= 0)
  return;

 VAR_3->midi_out_buf[2] = VAR_5;
 VAR_3->midi_out_urb.transfer_buffer_length = VAR_5+3;

 VAR_6 = FUNC_2(&VAR_3->midi_out_urb, VAR_2);
 if (VAR_6 < 0)
  FUNC_0("snd_usb_caiaq_midi_send(%p): usb_submit_urb() failed,"
      "ret=%d, len=%d\n",
      VAR_4, VAR_6, VAR_5);
 else
  VAR_3->midi_out_active = 1;
}
