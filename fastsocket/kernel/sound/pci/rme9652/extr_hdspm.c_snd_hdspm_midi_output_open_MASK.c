
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct hdspm_midi {int lock; struct snd_rawmidi_substream* output; } ;
struct TYPE_2__ {struct hdspm_midi* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_0)
{
 struct hdspm_midi *VAR_1;

 VAR_1 = VAR_0->rmidi->private_data;
 FUNC_0 (&VAR_1->lock);
 VAR_1->output = VAR_0;
 FUNC_1 (&VAR_1->lock);

 return 0;
}
