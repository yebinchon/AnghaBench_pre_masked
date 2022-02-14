
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ice1712 {int midi_input; int reg_lock; } ;
struct TYPE_2__ {struct snd_ice1712* private_data; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_ice1712 *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->reg_lock, VAR_3);
 if (VAR_1) {
  VAR_2->midi_input = 1;
  FUNC_2(VAR_2);
 } else {
  VAR_2->midi_input = 0;
 }
 FUNC_1(&VAR_2->reg_lock, VAR_3);
}
