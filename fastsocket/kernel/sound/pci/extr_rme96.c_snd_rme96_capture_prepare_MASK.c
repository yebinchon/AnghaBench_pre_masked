
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme96 {int lock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rme96*) ;
 struct rme96* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct rme96*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct rme96 *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->lock);
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
 }
 FUNC_5(0, VAR_2->iobase + VAR_0);
 FUNC_4(&VAR_2->lock);
 return 0;
}
