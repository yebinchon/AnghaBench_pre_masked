
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; int actual_length; scalar_t__ status; struct snd_usb_caiaqdev* context; } ;
struct TYPE_5__ {scalar_t__ actual_length; } ;
struct TYPE_4__ {int usb_id; } ;
struct TYPE_6__ {int data_alignment; int num_midi_out; int num_midi_in; int num_analog_audio_out; int num_analog_audio_in; int fw_version; } ;
struct snd_usb_caiaqdev {unsigned char audio_parm_answer; TYPE_2__ ep1_in_urb; int ep1_wait_queue; TYPE_3__* control_state; TYPE_1__ chip; int spec_received; TYPE_3__ spec; } ;
struct caiaq_device_spec {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_5 (struct snd_usb_caiaqdev*,unsigned char*,int) ;
 int FUNC_6 (struct snd_usb_caiaqdev*,unsigned char,unsigned char*,unsigned char) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9 (struct urb* VAR_3)
{
 int VAR_4;
 struct snd_usb_caiaqdev *VAR_5 = VAR_3->context;
 unsigned char *VAR_6 = VAR_3->transfer_buffer;

 if (VAR_3->status || !VAR_5) {
  FUNC_3("received EP1 urb->status = %i\n", VAR_3->status);
  return;
 }

 switch(VAR_6[0]) {
 case 132:
   FUNC_4(&VAR_5->spec, VAR_6+1, sizeof(struct caiaq_device_spec));
  VAR_5->spec.fw_version = FUNC_2(VAR_5->spec.fw_version);
  FUNC_1("device spec (firmware %d): audio: %d in, %d out, "
   "MIDI: %d in, %d out, data alignment %d\n",
   VAR_5->spec.fw_version,
   VAR_5->spec.num_analog_audio_in,
   VAR_5->spec.num_analog_audio_out,
   VAR_5->spec.num_midi_in,
   VAR_5->spec.num_midi_out,
   VAR_5->spec.data_alignment);

  VAR_5->spec_received++;
  FUNC_8(&VAR_5->ep1_wait_queue);
  break;
 case 133:
  VAR_5->audio_parm_answer = VAR_6[1];
  FUNC_8(&VAR_5->ep1_wait_queue);
  break;
 case 131:
  FUNC_6(VAR_5, VAR_6[1], VAR_6 + 3, VAR_6[2]);
  break;
 case 128:
  if (VAR_5->chip.usb_id ==
   FUNC_0(VAR_2, VAR_1)) {
   if (VAR_3->actual_length > sizeof(VAR_5->control_state))
    VAR_3->actual_length = sizeof(VAR_5->control_state);
   FUNC_4(VAR_5->control_state, VAR_6 + 1, VAR_3->actual_length);
   FUNC_8(&VAR_5->ep1_wait_queue);
   break;
  }





  break;
 }

 VAR_5->ep1_in_urb.actual_length = 0;
 VAR_4 = FUNC_7(&VAR_5->ep1_in_urb, VAR_0);
 if (VAR_4 < 0)
  FUNC_3("unable to submit urb. OOM!?\n");
}
