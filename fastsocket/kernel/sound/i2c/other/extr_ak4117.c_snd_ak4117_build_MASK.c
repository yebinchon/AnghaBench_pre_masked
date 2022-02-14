
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; TYPE_1__* pcm; } ;
struct TYPE_4__ {int subdevice; int device; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct ak4117 {struct snd_kcontrol** kctls; int card; struct snd_pcm_substream* substream; } ;
struct TYPE_3__ {int device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int * VAR_3 ;
 int FUNC_1 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct ak4117*) ;

int FUNC_3(struct ak4117 *VAR_4, struct snd_pcm_substream *VAR_5)
{
 struct snd_kcontrol *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (FUNC_0(!VAR_5))
  return -VAR_1;
 VAR_4->substream = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_2(&VAR_3[VAR_7], VAR_4);
  if (VAR_6 == ((void*)0))
   return -VAR_2;
  VAR_6->id.device = VAR_5->pcm->device;
  VAR_6->id.subdevice = VAR_5->number;
  VAR_8 = FUNC_1(VAR_4->card, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_4->kctls[VAR_7] = VAR_6;
 }
 return 0;
}
