
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct echoaudio {int * midi_out; } ;
struct TYPE_2__ {struct echoaudio* private_data; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct echoaudio *VAR_1 = VAR_0->rmidi->private_data;

 VAR_1->midi_out = ((void*)0);
 FUNC_0(("rawmidi_oclose\n"));
 return 0;
}
