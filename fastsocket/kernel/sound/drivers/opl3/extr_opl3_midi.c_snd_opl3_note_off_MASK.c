
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {int voice_lock; } ;
struct snd_midi_channel {int dummy; } ;


 int FUNC_0 (void*,int,int,struct snd_midi_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(void *VAR_0, int VAR_1, int VAR_2,
         struct snd_midi_channel *VAR_3)
{
 struct snd_opl3 *VAR_4 = VAR_0;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->voice_lock, VAR_5);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->voice_lock, VAR_5);
}
