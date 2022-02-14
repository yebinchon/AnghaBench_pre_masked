
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct snd_sb {int open_lock; TYPE_2__ midi_timer; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_3__ {struct snd_sb* private_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct snd_rawmidi_substream *VAR_2 = (struct snd_rawmidi_substream *) VAR_1;
 struct snd_sb * VAR_3 = VAR_2->rmidi->private_data;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->open_lock, VAR_4);
 VAR_3->midi_timer.expires = 1 + VAR_0;
 FUNC_0(&VAR_3->midi_timer);
 FUNC_3(&VAR_3->open_lock, VAR_4);
 FUNC_1(VAR_2);
}
