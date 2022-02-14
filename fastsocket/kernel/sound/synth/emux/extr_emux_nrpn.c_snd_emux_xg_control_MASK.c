
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int * control; } ;
struct snd_emux_port {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct snd_emux_port*,struct snd_midi_channel*,int,int ,int ) ;
 int VAR_1 ;

int
FUNC_2(struct snd_emux_port *VAR_2, struct snd_midi_channel *VAR_3,
      int VAR_4)
{
 return FUNC_1(VAR_1, FUNC_0(VAR_1),
         VAR_2, VAR_3, VAR_4,
         VAR_3->control[VAR_4],
         VAR_0);
}
