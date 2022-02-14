
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int gm_volume; int gm_expression; int gm_pan; int control; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_midi_channel *VAR_0)
{
 FUNC_0(VAR_0->control, 0, sizeof(VAR_0->control));
 VAR_0->gm_volume = 127;
 VAR_0->gm_expression = 127;
 VAR_0->gm_pan = 64;
}
