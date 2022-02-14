
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sysexbuf ;
struct TYPE_6__ {int param; int value; } ;
struct TYPE_4__ {int channel; scalar_t__ velocity; int note; } ;
struct TYPE_5__ {TYPE_3__ control; TYPE_1__ note; } ;
struct snd_seq_event {int type; int flags; TYPE_2__ data; } ;
struct snd_midi_op {int (* control ) (void*,int ,struct snd_midi_channel*) ;int (* key_press ) (void*,size_t,scalar_t__,struct snd_midi_channel*) ;int (* note_off ) (void*,size_t,int ,struct snd_midi_channel*) ;int (* note_on ) (void*,size_t,scalar_t__,struct snd_midi_channel*) ;} ;
struct snd_midi_channel_set {int max_channels; void* private_data; struct snd_midi_channel* channels; } ;
struct snd_midi_channel {int* note; int midi_program; int midi_pitchbend; int midi_pressure; int* control; int param_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int FUNC_0 (struct snd_midi_op*,void*,struct snd_midi_channel_set*,struct snd_midi_channel*,int,int) ;
 int FUNC_1 (struct snd_midi_op*,void*,struct snd_midi_channel*,size_t,scalar_t__) ;
 int FUNC_2 (struct snd_midi_op*,void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;
 int FUNC_3 (struct snd_midi_op*,void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct snd_seq_event*) ;
 int FUNC_6 (struct snd_seq_event*,int,unsigned char*,int,int ) ;
 int FUNC_7 (void*,size_t,int ,struct snd_midi_channel*) ;
 int FUNC_8 (void*,size_t,scalar_t__,struct snd_midi_channel*) ;
 int FUNC_9 (void*,size_t,scalar_t__,struct snd_midi_channel*) ;
 int FUNC_10 (void*,int ,struct snd_midi_channel*) ;
 int FUNC_11 (void*,int ,struct snd_midi_channel*) ;
 int FUNC_12 (struct snd_midi_op*,void*,unsigned char*,int,struct snd_midi_channel_set*) ;

void
FUNC_13(struct snd_midi_op *VAR_14,
         struct snd_seq_event *VAR_15,
         struct snd_midi_channel_set *VAR_16)
{
 struct snd_midi_channel *VAR_17;
 void *VAR_18;
 int VAR_19 = 0;

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0)) {
  FUNC_4("ev or chanbase NULL (snd_midi_process_event)\n");
  return;
 }
 if (VAR_16->channels == ((void*)0))
  return;

 if (FUNC_5(VAR_15)) {
  VAR_19 = VAR_15->data.note.channel;
  if (VAR_19 >= VAR_16->max_channels) {
   FUNC_4("dest channel is %d, max is %d\n",
       VAR_19, VAR_16->max_channels);
   return;
  }
 }

 VAR_17 = VAR_16->channels + VAR_19;
 VAR_18 = VAR_16->private_data;


 if (VAR_15->type == VAR_13)
  return;



 if (VAR_15->type == 143 && VAR_15->data.note.velocity == 0)
  VAR_15->type = 144;


 if (VAR_15->type == 143 ||
     VAR_15->type == 144 ||
     VAR_15->type == 147) {
  if (VAR_15->data.note.note >= 128)
   return;
 }

 switch (VAR_15->type) {
 case 143:
  if (VAR_17->note[VAR_15->data.note.note] & VAR_8) {
   if (VAR_14->note_off)
    VAR_14->note_off(VAR_18, VAR_15->data.note.note, 0, VAR_17);
  }
  VAR_17->note[VAR_15->data.note.note] = VAR_8;
  if (VAR_14->note_on)
   VAR_14->note_on(VAR_18, VAR_15->data.note.note, VAR_15->data.note.velocity, VAR_17);
  break;
 case 144:
  if (! (VAR_17->note[VAR_15->data.note.note] & VAR_8))
   break;
  if (VAR_14->note_off)
   FUNC_1(VAR_14, VAR_18, VAR_17, VAR_15->data.note.note, VAR_15->data.note.velocity);
  break;
 case 147:
  if (VAR_14->key_press)
   VAR_14->key_press(VAR_18, VAR_15->data.note.note, VAR_15->data.note.velocity, VAR_17);
  break;
 case 149:
  FUNC_0(VAR_14, VAR_18, VAR_16, VAR_17,
      VAR_15->data.control.param, VAR_15->data.control.value);
  break;
 case 142:
  VAR_17->midi_program = VAR_15->data.control.value;
  break;
 case 141:
  VAR_17->midi_pitchbend = VAR_15->data.control.value;
  if (VAR_14->control)
   VAR_14->control(VAR_18, VAR_5, VAR_17);
  break;
 case 156:
  VAR_17->midi_pressure = VAR_15->data.control.value;
  if (VAR_14->control)
   VAR_14->control(VAR_18, VAR_0, VAR_17);
  break;
 case 150:

  if (VAR_15->data.control.param < 32) {

   VAR_17->control[VAR_15->data.control.param + 32] =
    VAR_15->data.control.value & 0x7f;
   FUNC_0(VAR_14, VAR_18, VAR_16, VAR_17,
       VAR_15->data.control.param,
       ((VAR_15->data.control.value>>7) & 0x7f));
  } else
   FUNC_0(VAR_14, VAR_18, VAR_16, VAR_17,
       VAR_15->data.control.param,
       VAR_15->data.control.value);
  break;
 case 145:

  VAR_17->param_type = VAR_9;
  VAR_17->control[VAR_2]
   = (VAR_15->data.control.value >> 7) & 0x7f;
  VAR_17->control[VAR_1]
   = VAR_15->data.control.value & 0x7f;
  VAR_17->control[VAR_4]
   = (VAR_15->data.control.param >> 7) & 0x7f;
  VAR_17->control[VAR_3]
   = VAR_15->data.control.param & 0x7f;
  FUNC_2(VAR_14, VAR_18, VAR_17, VAR_16);
  break;
 case 136:

  VAR_17->param_type = VAR_10;
  VAR_17->control[VAR_2]
   = (VAR_15->data.control.value >> 7) & 0x7f;
  VAR_17->control[VAR_1]
   = VAR_15->data.control.value & 0x7f;
  VAR_17->control[VAR_7]
   = (VAR_15->data.control.param >> 7) & 0x7f;
  VAR_17->control[VAR_6]
   = VAR_15->data.control.param & 0x7f;
  FUNC_3(VAR_14, VAR_18, VAR_17, VAR_16);
  break;
 case 130:
  if ((VAR_15->flags & VAR_11) == VAR_12) {
   unsigned char VAR_20[64];
   int VAR_21;
   VAR_21 = FUNC_6(VAR_15, sizeof(VAR_20), VAR_20, 1, 0);
   if (VAR_21 > 0)
    FUNC_12(VAR_14, VAR_18, VAR_20, VAR_21, VAR_16);
  }
  break;
 case 134:
 case 133:
 case 152:
 case 132:
 case 151:
 case 131:
 case 137:
 case 129:
 case 128:
 case 146:
  goto not_yet;
 case 135:
  break;
 case 153:
 case 154:
 case 155:
 case 138:
 case 139:
 case 140:
 case 148:
 not_yet:
 default:

  break;
 }
}
