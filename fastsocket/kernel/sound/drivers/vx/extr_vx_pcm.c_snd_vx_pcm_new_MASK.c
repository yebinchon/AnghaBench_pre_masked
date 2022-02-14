
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {unsigned int audio_outs; unsigned int audio_ins; struct snd_pcm** pcm; TYPE_2__* card; TYPE_1__* hw; } ;
struct snd_pcm {int name; scalar_t__ info_flags; int private_free; struct vx_core* private_data; } ;
struct TYPE_4__ {int shortname; } ;
struct TYPE_3__ {unsigned int num_codecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,unsigned int,unsigned int,unsigned int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vx_core*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct vx_core *VAR_5)
{
 struct snd_pcm *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_3(VAR_5)) < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->hw->num_codecs; VAR_7++) {
  unsigned int VAR_9, VAR_10;
  VAR_9 = VAR_5->audio_outs > VAR_7 * 2 ? 1 : 0;
  VAR_10 = VAR_5->audio_ins > VAR_7 * 2 ? 1 : 0;
  if (! VAR_9 && ! VAR_10)
   break;
  VAR_8 = FUNC_0(VAR_5->card, "VX PCM", VAR_7,
      VAR_9, VAR_10, &VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_9)
   FUNC_1(VAR_6, VAR_1, &VAR_4);
  if (VAR_10)
   FUNC_1(VAR_6, VAR_0, &VAR_3);

  VAR_6->private_data = VAR_5;
  VAR_6->private_free = VAR_2;
  VAR_6->info_flags = 0;
  FUNC_2(VAR_6->name, VAR_5->card->shortname);
  VAR_5->pcm[VAR_7] = VAR_6;
 }

 return 0;
}
