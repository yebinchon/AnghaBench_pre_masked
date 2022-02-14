
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_midi_channel {int* control; } ;
struct TYPE_3__ {scalar_t__ fixpan; int pan; } ;
struct snd_emux_voice {int apan; int aaux; TYPE_2__* emu; TYPE_1__ reg; struct snd_midi_channel* chan; } ;
struct TYPE_4__ {scalar_t__ linear_panning; } ;


 int FUNC_0 (int,int ,int) ;
 size_t VAR_0 ;
 void** VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct snd_emux_voice *VAR_2)
{
 struct snd_midi_channel *VAR_3 = VAR_2->chan;
 int VAR_4;


 if (VAR_2->reg.fixpan > 0)
  VAR_4 = 255 - (int)VAR_2->reg.fixpan * 2;
 else {
  VAR_4 = VAR_3->control[VAR_0] - 64;
  if (VAR_2->reg.pan >= 0)
   VAR_4 += VAR_2->reg.pan - 64;
  VAR_4 = 127 - (int)VAR_4 * 2;
 }
 FUNC_0(VAR_4, 0, 255);

 if (VAR_2->emu->linear_panning) {

  if (VAR_4 != VAR_2->apan) {
   VAR_2->apan = VAR_4;
   if (VAR_4 == 0)
    VAR_2->aaux = 0xff;
   else
    VAR_2->aaux = (-VAR_4) & 0xff;
   return 1;
  } else
   return 0;
 } else {

  if (VAR_2->apan != (int)VAR_1[VAR_4]) {
   VAR_2->apan = VAR_1[VAR_4];
   VAR_2->aaux = VAR_1[255 - VAR_4];
   return 1;
  }
  return 0;
 }
}
