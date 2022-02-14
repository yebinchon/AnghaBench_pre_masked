
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; } ;
struct snd_cs4231 {int* image; int lock; scalar_t__ p_periods_sent; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_cs4231* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct snd_cs4231 *VAR_4 = FUNC_1(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 unsigned long VAR_6;

 FUNC_2(&VAR_4->lock, VAR_6);

 VAR_4->image[VAR_0] &= ~(VAR_1 |
         VAR_2);

 FUNC_0(VAR_5->period_size > 0xffff + 1);

 VAR_4->p_periods_sent = 0;
 FUNC_3(&VAR_4->lock, VAR_6);

 return 0;
}
