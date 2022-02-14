
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct rme96 {int wcreg; TYPE_2__* spdif_ctl; int card; int wcreg_spdif; int wcreg_spdif_stream; int lock; struct snd_pcm_substream* playback_substream; scalar_t__ iobase; } ;
struct TYPE_5__ {int id; TYPE_1__* vd; } ;
struct TYPE_4__ {int access; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rme96*,struct snd_pcm_runtime*) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int) ;
 struct rme96* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct rme96*,int*) ;
 scalar_t__ FUNC_5 (struct rme96*) ;
 TYPE_3__ VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct snd_pcm_substream *VAR_9)
{
        int VAR_10, VAR_11;
 struct rme96 *VAR_12 = FUNC_3(VAR_9);
 struct snd_pcm_runtime *VAR_13 = VAR_9->runtime;

 FUNC_6(&VAR_12->lock);
        if (VAR_12->playback_substream != ((void*)0)) {
  FUNC_7(&VAR_12->lock);
                return -VAR_0;
        }
 VAR_12->wcreg &= ~VAR_3;
 FUNC_8(VAR_12->wcreg, VAR_12->iobase + VAR_2);
 VAR_12->playback_substream = VAR_9;
 FUNC_7(&VAR_12->lock);

 VAR_13->hw = VAR_8;
 if (!(VAR_12->wcreg & VAR_4) &&
            FUNC_5(VAR_12) != VAR_1 &&
     (VAR_10 = FUNC_4(VAR_12, &VAR_11)) > 0)
 {

                VAR_13->hw.rates = FUNC_2(VAR_10);
                VAR_13->hw.rate_min = VAR_10;
                VAR_13->hw.rate_max = VAR_10;
 }
 FUNC_0(VAR_12, VAR_13);

 VAR_12->wcreg_spdif_stream = VAR_12->wcreg_spdif;
 VAR_12->spdif_ctl->vd[0].access &= ~VAR_5;
 FUNC_1(VAR_12->card, VAR_7 |
         VAR_6, &VAR_12->spdif_ctl->id);
 return 0;
}
