
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_5__ {unsigned long data; int (* function ) (unsigned long) ;} ;
struct echoaudio {int tinuse; int midi_full; int lock; TYPE_2__ timer; } ;
struct TYPE_4__ {struct echoaudio* private_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_0,
      int VAR_1)
{
 struct echoaudio *VAR_2 = VAR_0->rmidi->private_data;

 FUNC_0(("snd_echo_midi_output_trigger(%d)\n", VAR_1));
 FUNC_4(&VAR_2->lock);
 if (VAR_1) {
  if (!VAR_2->tinuse) {
   FUNC_2(&VAR_2->timer);
   VAR_2->timer.function = FUNC_3;
   VAR_2->timer.data = (unsigned long)VAR_2;
   VAR_2->tinuse = 1;
  }
 } else {
  if (VAR_2->tinuse) {
   VAR_2->tinuse = 0;
   FUNC_5(&VAR_2->lock);
   FUNC_1(&VAR_2->timer);
   FUNC_0(("Timer removed\n"));
   return;
  }
 }
 FUNC_5(&VAR_2->lock);

 if (VAR_1 && !VAR_2->midi_full)
  FUNC_3((unsigned long)VAR_2);
}
