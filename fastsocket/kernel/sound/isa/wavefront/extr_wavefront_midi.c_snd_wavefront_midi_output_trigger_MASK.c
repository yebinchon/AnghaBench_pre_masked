
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_2__* rmidi; } ;
typedef size_t snd_wavefront_mpu_id ;
struct TYPE_10__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_9__ {int* mode; int virtual; int istimer; TYPE_4__ timer; } ;
typedef TYPE_3__ snd_wavefront_midi_t ;
typedef int snd_wavefront_card_t ;
struct TYPE_8__ {TYPE_1__* card; int * private_data; } ;
struct TYPE_7__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 snd_wavefront_midi_t *VAR_6;
 snd_wavefront_mpu_id VAR_7;

 if (VAR_3 == ((void*)0) || VAR_3->rmidi == ((void*)0))
         return;

 if (VAR_3->rmidi->private_data == ((void*)0))
         return;

 VAR_7 = *((snd_wavefront_mpu_id *) VAR_3->rmidi->private_data);

 if ((VAR_6 = FUNC_1 (VAR_3)) == ((void*)0)) {
  return;
 }

 FUNC_4 (&VAR_6->virtual, VAR_5);
 if (VAR_4) {
  if ((VAR_6->mode[VAR_7] & VAR_0) == 0) {
   if (!VAR_6->istimer) {
    FUNC_2(&VAR_6->timer);
    VAR_6->timer.function = VAR_2;
    VAR_6->timer.data = (unsigned long) VAR_3->rmidi->card->private_data;
    VAR_6->timer.expires = 1 + VAR_1;
    FUNC_0(&VAR_6->timer);
   }
   VAR_6->istimer++;
   VAR_6->mode[VAR_7] |= VAR_0;
  }
 } else {
  VAR_6->mode[VAR_7] &= ~VAR_0;
 }
 FUNC_5 (&VAR_6->virtual, VAR_5);

 if (VAR_4)
  FUNC_3((snd_wavefront_card_t *)VAR_3->rmidi->card->private_data);
}
