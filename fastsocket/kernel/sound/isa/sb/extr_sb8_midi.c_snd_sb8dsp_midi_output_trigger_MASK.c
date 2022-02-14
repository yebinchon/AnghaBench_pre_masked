
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct snd_sb {int open; int open_lock; TYPE_2__ midi_timer; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {struct snd_sb* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct snd_sb *VAR_6;

 VAR_6 = VAR_3->rmidi->private_data;
 FUNC_3(&VAR_6->open_lock, VAR_5);
 if (VAR_4) {
  if (!(VAR_6->open & VAR_0)) {
   FUNC_1(&VAR_6->midi_timer);
   VAR_6->midi_timer.function = VAR_2;
   VAR_6->midi_timer.data = (unsigned long) VAR_3;
   VAR_6->midi_timer.expires = 1 + VAR_1;
   FUNC_0(&VAR_6->midi_timer);
   VAR_6->open |= VAR_0;
  }
 } else {
  if (VAR_6->open & VAR_0) {
   VAR_6->open &= ~VAR_0;
  }
 }
 FUNC_4(&VAR_6->open_lock, VAR_5);

 if (VAR_4)
  FUNC_2(VAR_3);
}
