
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct rme32 {int lock; struct snd_pcm_substream* capture_substream; scalar_t__ fullduplex_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_2 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct rme32*,int*) ;
 int FUNC_4 (struct rme32*,struct snd_pcm_runtime*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct snd_pcm_substream *VAR_4)
{
 int VAR_5, VAR_6;
 struct rme32 *VAR_7 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_8 = VAR_4->runtime;

 if (VAR_7->fullduplex_mode)
  VAR_8->hw = VAR_2;
 else
  VAR_8->hw = VAR_3;
 if ((VAR_6 = FUNC_3(VAR_7, &VAR_5)) > 0) {
  if (!VAR_5) {
   return -VAR_1;
  }
                VAR_8->hw.rates = FUNC_0(VAR_6);
                VAR_8->hw.rate_min = VAR_6;
                VAR_8->hw.rate_max = VAR_6;
        }

 FUNC_1(VAR_4);

 FUNC_5(&VAR_7->lock);
 if (VAR_7->capture_substream != ((void*)0)) {
  FUNC_6(&VAR_7->lock);
  return -VAR_0;
        }
 VAR_7->capture_substream = VAR_4;
 FUNC_6(&VAR_7->lock);

 FUNC_4(VAR_7, VAR_8);
 return 0;
}
