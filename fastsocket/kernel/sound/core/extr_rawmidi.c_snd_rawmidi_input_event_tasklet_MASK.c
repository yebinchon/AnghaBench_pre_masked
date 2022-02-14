
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int (* event ) (struct snd_rawmidi_substream*) ;} ;


 int FUNC_0 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct snd_rawmidi_substream *VAR_1 = (struct snd_rawmidi_substream *)VAR_0;
 VAR_1->runtime->event(VAR_1);
}
