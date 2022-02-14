
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct rme96 {int lock; struct snd_pcm_substream* capture_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rme96*,struct snd_pcm_runtime*) ;
 int FUNC_1 (int) ;
 struct rme96* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct rme96*,int*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_4 (struct rme96*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct snd_pcm_substream *VAR_4)
{
        int VAR_5, VAR_6;
 struct rme96 *VAR_7 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_8 = VAR_4->runtime;

 VAR_8->hw = VAR_3;
        if (FUNC_4(VAR_7) != VAR_2 &&
            (VAR_6 = FUNC_3(VAR_7, &VAR_5)) > 0)
        {
                if (VAR_5) {
                        return -VAR_1;
                }
                VAR_8->hw.rates = FUNC_1(VAR_6);
                VAR_8->hw.rate_min = VAR_6;
                VAR_8->hw.rate_max = VAR_6;
        }

 FUNC_5(&VAR_7->lock);
        if (VAR_7->capture_substream != ((void*)0)) {
  FUNC_6(&VAR_7->lock);
                return -VAR_0;
        }
 VAR_7->capture_substream = VAR_4;
 FUNC_6(&VAR_7->lock);

 FUNC_0(VAR_7, VAR_8);
 return 0;
}
