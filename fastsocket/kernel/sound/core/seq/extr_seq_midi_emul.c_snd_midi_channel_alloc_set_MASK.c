
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel_set {int max_channels; int * private_data; int channels; } ;


 int VAR_0 ;
 struct snd_midi_channel_set* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

struct snd_midi_channel_set *FUNC_2(int VAR_1)
{
 struct snd_midi_channel_set *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_2->channels = FUNC_1(VAR_1);
  VAR_2->private_data = ((void*)0);
  VAR_2->max_channels = VAR_1;
 }
 return VAR_2;
}
