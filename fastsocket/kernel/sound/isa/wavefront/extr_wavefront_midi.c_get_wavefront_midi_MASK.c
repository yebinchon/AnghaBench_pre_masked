
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_card {TYPE_3__* private_data; } ;
typedef int snd_wavefront_midi_t ;
struct TYPE_5__ {int midi; } ;
struct TYPE_6__ {TYPE_2__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;
struct TYPE_4__ {struct snd_card* card; } ;



__attribute__((used)) static snd_wavefront_midi_t *
FUNC_0 (struct snd_rawmidi_substream *VAR_0)

{
 struct snd_card *VAR_1;
 snd_wavefront_card_t *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->rmidi == ((void*)0))
         return ((void*)0);

 VAR_1 = VAR_0->rmidi->card;

 if (VAR_1 == ((void*)0))
         return ((void*)0);

 if (VAR_1->private_data == ((void*)0))
          return ((void*)0);

 VAR_2 = VAR_1->private_data;

 return &VAR_2->wavefront.midi;
}
