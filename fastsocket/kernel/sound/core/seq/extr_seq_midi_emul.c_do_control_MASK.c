
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int (* control ) (void*,int,struct snd_midi_channel*) ;int (* note_off ) (void*,int,int ,struct snd_midi_channel*) ;} ;
struct snd_midi_channel_set {int midi_mode; } ;
struct snd_midi_channel {int* control; int* note; int drum_channel; int param_type; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_midi_op*,void*,struct snd_midi_channel*) ;
 int FUNC_1 (struct snd_midi_op*,void*,struct snd_midi_channel*) ;
 int FUNC_2 (struct snd_midi_op*,void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;
 int FUNC_3 (struct snd_midi_op*,void*,struct snd_midi_channel*,struct snd_midi_channel_set*) ;
 int FUNC_4 (struct snd_midi_channel*) ;
 int FUNC_5 (void*,int,int ,struct snd_midi_channel*) ;
 int FUNC_6 (void*,int,int ,struct snd_midi_channel*) ;
 int FUNC_7 (void*,int,struct snd_midi_channel*) ;

__attribute__((used)) static void
FUNC_8(struct snd_midi_op *VAR_7, void *VAR_8, struct snd_midi_channel_set *VAR_9,
    struct snd_midi_channel *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;


 if ((VAR_11 >=64 && VAR_11 <=69) || (VAR_11 >= 80 && VAR_11 <= 83)) {

  VAR_12 = (VAR_12 >= 64)? 127: 0;
 }
 VAR_10->control[VAR_11] = VAR_12;

 switch (VAR_11) {
 case 128:
  if (VAR_12 == 0) {

   for (VAR_13 = 0; VAR_13 < 128; VAR_13++) {
    if (VAR_10->note[VAR_13] & VAR_3) {
     VAR_10->note[VAR_13] = VAR_1;
     if (VAR_7->note_off)
      VAR_7->note_off(VAR_8, VAR_13, 0, VAR_10);
    }
   }
  }
  break;
 case 139:
  break;
 case 129:
  if (VAR_12) {

   for (VAR_13 = 0; VAR_13 < 128; VAR_13++) {
    if (VAR_10->note[VAR_13] & VAR_2)
     VAR_10->note[VAR_13] |= VAR_4;
   }
  } else {

   for (VAR_13 = 0; VAR_13 < 128; VAR_13++) {
    if (VAR_10->note[VAR_13] & VAR_4) {
     VAR_10->note[VAR_13] &= ~VAR_4;
     if (VAR_10->note[VAR_13] & VAR_3) {
      VAR_10->note[VAR_13] = VAR_1;
      if (VAR_7->note_off)
       VAR_7->note_off(VAR_8, VAR_13, 0, VAR_10);
     }
    }
   }
  }
  break;
 case 142:
  VAR_10->control[144] = 0;

 case 144:
  if (VAR_10->param_type == VAR_6)
   FUNC_3(VAR_7, VAR_8, VAR_10, VAR_9);
  else
   FUNC_2(VAR_7, VAR_8, VAR_10, VAR_9);
  break;
 case 138:
 case 137:
  VAR_10->param_type = VAR_6;
  break;
 case 141:
 case 140:
  VAR_10->param_type = VAR_5;
  break;

 case 153:
  FUNC_1(VAR_7, VAR_8, VAR_10);
  break;

 case 154:
  FUNC_0(VAR_7, VAR_8, VAR_10);
  break;

 case 143:
  if (VAR_9->midi_mode == VAR_0) {
   if (VAR_12 == 127)
    VAR_10->drum_channel = 1;
   else
    VAR_10->drum_channel = 0;
  }
  break;
 case 145:
  break;

 case 136:
  FUNC_4(VAR_10);
  break;

 case 130:
 case 146:
 case 147:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 152:
 case 151:
 case 150:
 case 149:
 case 148:
  goto notyet;
 notyet:
 default:
  if (VAR_7->control)
   VAR_7->control(VAR_8, VAR_11, VAR_10);
  break;
 }
}
