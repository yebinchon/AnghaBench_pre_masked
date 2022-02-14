
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme96 {int lock; scalar_t__ capture_periodsize; int * capture_substream; } ;


 scalar_t__ FUNC_0 (struct rme96*) ;
 struct rme96* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct rme96*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct rme96 *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->lock);
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1);
 }
 VAR_1->capture_substream = ((void*)0);
 VAR_1->capture_periodsize = 0;
 FUNC_4(&VAR_1->lock);
 return 0;
}
