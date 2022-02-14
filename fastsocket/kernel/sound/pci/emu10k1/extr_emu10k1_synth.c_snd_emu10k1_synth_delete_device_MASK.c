
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {struct snd_emux* driver_data; } ;
struct snd_emux {struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int voice_lock; int * get_synth_voice; int * synth; } ;


 int FUNC_0 (struct snd_emux*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_device *VAR_0)
{
 struct snd_emux *VAR_1;
 struct snd_emu10k1 *VAR_2;
 unsigned long VAR_3;

 if (VAR_0->driver_data == ((void*)0))
  return 0;

 VAR_1 = VAR_0->driver_data;

 VAR_2 = VAR_1->hw;
 FUNC_1(&VAR_2->voice_lock, VAR_3);
 VAR_2->synth = ((void*)0);
 VAR_2->get_synth_voice = ((void*)0);
 FUNC_2(&VAR_2->voice_lock, VAR_3);

 FUNC_0(VAR_1);
 return 0;
}
