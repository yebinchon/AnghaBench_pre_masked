
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu8000 {int chorus_mode; } ;
struct TYPE_2__ {int lfo_freq; int delay; int lfo_depth; int delay_offset; int feedback; } ;


 int FUNC_0 (struct snd_emu8000*,int ) ;
 int FUNC_1 (struct snd_emu8000*,int ) ;
 int FUNC_2 (struct snd_emu8000*,int) ;
 int FUNC_3 (struct snd_emu8000*,int) ;
 int FUNC_4 (struct snd_emu8000*,int,int ) ;
 int FUNC_5 (struct snd_emu8000*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_6(struct snd_emu8000 *VAR_4)
{
 int VAR_5 = VAR_4->chorus_mode;
 if (VAR_5 < 0 || VAR_5 >= VAR_0 ||
     (VAR_5 >= VAR_1 && !VAR_2[VAR_5]))
  return;
 FUNC_4(VAR_4, 0x09, VAR_3[VAR_5].feedback);
 FUNC_4(VAR_4, 0x0c, VAR_3[VAR_5].delay_offset);
 FUNC_5(VAR_4, 0x03, VAR_3[VAR_5].lfo_depth);
 FUNC_0(VAR_4, VAR_3[VAR_5].delay);
 FUNC_1(VAR_4, VAR_3[VAR_5].lfo_freq);
 FUNC_2(VAR_4, 0x8000);
 FUNC_3(VAR_4, 0x0000);
}
