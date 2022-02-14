
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {int lock; scalar_t__ capture_periodsize; int * capture_substream; } ;


 struct rme32* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct rme32 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 VAR_1->capture_substream = ((void*)0);
 VAR_1->capture_periodsize = 0;
 FUNC_2(&VAR_1->lock);
 return 0;
}
