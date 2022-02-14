
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int dummy; } ;
struct snd_midi_channel {int * control; } ;
 int FUNC_0 (struct snd_opl4*,struct snd_midi_channel*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(void *VAR_4, int VAR_5, struct snd_midi_channel *VAR_6)
{
 struct snd_opl4 *VAR_7 = VAR_4;

 switch (VAR_5) {
 case 133:
  VAR_6->control[129] = VAR_6->control[133];
  FUNC_0(VAR_7, VAR_6, VAR_2);
  break;
 case 134:
  FUNC_0(VAR_7, VAR_6, VAR_3);
  break;
 case 132:
  FUNC_0(VAR_7, VAR_6, VAR_0);
  break;
 case 135:
  FUNC_0(VAR_7, VAR_6, VAR_3);
  break;
 case 128:

  break;
 case 129:
  FUNC_0(VAR_7, VAR_6, VAR_2);
  break;
 case 130:

  break;
 case 136:




  break;
 case 131:
  FUNC_0(VAR_7, VAR_6, VAR_1);
  break;
 }
}
