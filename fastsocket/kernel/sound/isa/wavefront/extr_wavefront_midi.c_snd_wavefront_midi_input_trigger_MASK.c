
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
typedef size_t snd_wavefront_mpu_id ;
struct TYPE_5__ {int virtual; int * mode; } ;
typedef TYPE_2__ snd_wavefront_midi_t ;
struct TYPE_4__ {int * private_data; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 snd_wavefront_midi_t *VAR_4;
 snd_wavefront_mpu_id VAR_5;

 if (VAR_1 == ((void*)0) || VAR_1->rmidi == ((void*)0))
         return;

 if (VAR_1->rmidi->private_data == ((void*)0))
         return;

 VAR_5 = *((snd_wavefront_mpu_id *) VAR_1->rmidi->private_data);

 if ((VAR_4 = FUNC_0 (VAR_1)) == ((void*)0)) {
  return;
 }

 FUNC_1 (&VAR_4->virtual, VAR_3);
 if (VAR_2) {
  VAR_4->mode[VAR_5] |= VAR_0;
 } else {
  VAR_4->mode[VAR_5] &= ~VAR_0;
 }
 FUNC_2 (&VAR_4->virtual, VAR_3);
}
