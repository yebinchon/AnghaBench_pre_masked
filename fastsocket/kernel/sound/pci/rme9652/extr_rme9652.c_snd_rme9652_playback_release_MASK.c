
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rme9652 {int playback_pid; TYPE_2__* spdif_ctl; int card; int lock; int * playback_substream; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *) ;
 struct snd_rme9652* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct snd_rme9652 *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_4->lock);

 VAR_4->playback_pid = -1;
 VAR_4->playback_substream = ((void*)0);

 FUNC_3(&VAR_4->lock);

 VAR_4->spdif_ctl->vd[0].access |= VAR_0;
 FUNC_0(VAR_4->card, VAR_2 |
         VAR_1, &VAR_4->spdif_ctl->id);
 return 0;
}
