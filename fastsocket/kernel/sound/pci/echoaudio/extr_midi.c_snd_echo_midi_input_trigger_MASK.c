
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct echoaudio {int midi_input_enabled; int lock; } ;
struct TYPE_2__ {struct echoaudio* private_data; } ;


 int FUNC_0 (struct echoaudio*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0,
     int VAR_1)
{
 struct echoaudio *VAR_2 = VAR_0->rmidi->private_data;

 if (VAR_1 != VAR_2->midi_input_enabled) {
  FUNC_1(&VAR_2->lock);
  FUNC_0(VAR_2, VAR_1);
  FUNC_2(&VAR_2->lock);
  VAR_2->midi_input_enabled = VAR_1;
 }
}
