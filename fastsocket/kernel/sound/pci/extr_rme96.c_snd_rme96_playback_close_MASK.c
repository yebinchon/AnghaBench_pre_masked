
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct rme96 {int wcreg; TYPE_2__* spdif_ctl; int card; int lock; scalar_t__ playback_periodsize; int * playback_substream; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 scalar_t__ FUNC_0 (struct rme96*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int *) ;
 struct rme96* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct rme96*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_4)
{
 struct rme96 *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0;

 FUNC_4(&VAR_5->lock);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_5);
 }
 VAR_5->playback_substream = ((void*)0);
 VAR_5->playback_periodsize = 0;
 VAR_6 = (VAR_5->wcreg & VAR_0) == 0;
 FUNC_5(&VAR_5->lock);
 if (VAR_6) {
  VAR_5->spdif_ctl->vd[0].access |= VAR_1;
  FUNC_1(VAR_5->card, VAR_3 |
          VAR_2, &VAR_5->spdif_ctl->id);
 }
 return 0;
}
