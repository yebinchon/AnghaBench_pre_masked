
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel_set {struct snd_midi_channel_set* channels; } ;


 int FUNC_0 (struct snd_midi_channel_set*) ;

void FUNC_1(struct snd_midi_channel_set *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->channels);
 FUNC_0(VAR_0);
}
