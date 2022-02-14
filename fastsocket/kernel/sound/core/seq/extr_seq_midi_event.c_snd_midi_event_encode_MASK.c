
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int type; } ;
struct snd_midi_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_midi_event*,int ,struct snd_seq_event*) ;

long FUNC_1(struct snd_midi_event *VAR_1, unsigned char *VAR_2, long VAR_3,
      struct snd_seq_event *VAR_4)
{
 long VAR_5 = 0;
 int VAR_6;

 VAR_4->type = VAR_0;

 while (VAR_3-- > 0) {
  VAR_6 = FUNC_0(VAR_1, *VAR_2++, VAR_4);
  VAR_5++;
  if (VAR_6 < 0)
   return VAR_6;
  else if (VAR_6 > 0)
   return VAR_5;
 }

 return VAR_5;
}
