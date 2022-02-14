
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; int param; int value; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct snd_seq_event {TYPE_2__ data; } ;
struct snd_midi_event {unsigned char lastcmd; scalar_t__ nostat; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_midi_event *VAR_2, unsigned char *VAR_3,
          int VAR_4, struct snd_seq_event *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_1|(VAR_5->data.control.channel & 0x0f);
 if (VAR_5->data.control.param < 0x20) {
  if (VAR_4 < 4)
   return -VAR_0;
  if (VAR_2->nostat && VAR_4 < 6)
   return -VAR_0;
  if (VAR_6 != VAR_2->lastcmd || VAR_2->nostat) {
   if (VAR_4 < 5)
    return -VAR_0;
   VAR_3[VAR_7++] = VAR_2->lastcmd = VAR_6;
  }
  VAR_3[VAR_7++] = VAR_5->data.control.param;
  VAR_3[VAR_7++] = (VAR_5->data.control.value >> 7) & 0x7f;
  if (VAR_2->nostat)
   VAR_3[VAR_7++] = VAR_6;
  VAR_3[VAR_7++] = VAR_5->data.control.param + 0x20;
  VAR_3[VAR_7++] = VAR_5->data.control.value & 0x7f;
 } else {
  if (VAR_4 < 2)
   return -VAR_0;
  if (VAR_6 != VAR_2->lastcmd || VAR_2->nostat) {
   if (VAR_4 < 3)
    return -VAR_0;
   VAR_3[VAR_7++] = VAR_2->lastcmd = VAR_6;
  }
  VAR_3[VAR_7++] = VAR_5->data.control.param & 0x7f;
  VAR_3[VAR_7++] = VAR_5->data.control.value & 0x7f;
 }
 return VAR_7;
}
