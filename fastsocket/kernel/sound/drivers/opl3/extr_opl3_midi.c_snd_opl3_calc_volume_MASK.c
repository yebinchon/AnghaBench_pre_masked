
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int gm_volume; int gm_expression; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int* VAR_2 ;

void FUNC_0(unsigned char *VAR_3, int VAR_4,
     struct snd_midi_channel *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = (VAR_4 * VAR_5->gm_volume * VAR_5->gm_expression) / (127*127);
 if (VAR_9 > 127)
  VAR_9 = 127;

 VAR_6 = VAR_1 - (*VAR_3 & VAR_1);

 VAR_7 = VAR_2[VAR_9] + VAR_6;
 if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 else if (VAR_7 < 0)
  VAR_7 = 0;

 VAR_8 = VAR_1 - (VAR_7 & VAR_1);

 *VAR_3 = (*VAR_3 & VAR_0) | (VAR_8 & VAR_1);
}
