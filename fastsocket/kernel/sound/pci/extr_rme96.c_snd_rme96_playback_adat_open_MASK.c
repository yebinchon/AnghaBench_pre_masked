
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct rme96 {int wcreg; int lock; struct snd_pcm_substream* playback_substream; scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rme96*,struct snd_pcm_runtime*) ;
 int FUNC_1 (int) ;
 struct rme96* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct rme96*,int*) ;
 scalar_t__ FUNC_4 (struct rme96*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct snd_pcm_substream *VAR_6)
{
        int VAR_7, VAR_8;
 struct rme96 *VAR_9 = FUNC_2(VAR_6);
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;

 FUNC_5(&VAR_9->lock);
        if (VAR_9->playback_substream != ((void*)0)) {
  FUNC_6(&VAR_9->lock);
                return -VAR_0;
        }
 VAR_9->wcreg |= VAR_3;
 FUNC_7(VAR_9->wcreg, VAR_9->iobase + VAR_2);
 VAR_9->playback_substream = VAR_6;
 FUNC_6(&VAR_9->lock);

 VAR_10->hw = VAR_5;
 if (!(VAR_9->wcreg & VAR_4) &&
            FUNC_4(VAR_9) != VAR_1 &&
     (VAR_7 = FUNC_3(VAR_9, &VAR_8)) > 0)
 {

                VAR_10->hw.rates = FUNC_1(VAR_7);
                VAR_10->hw.rate_min = VAR_7;
                VAR_10->hw.rate_max = VAR_7;
 }
 FUNC_0(VAR_9, VAR_10);
 return 0;
}
