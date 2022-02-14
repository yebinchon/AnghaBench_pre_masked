
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dummy_systimer_pcm {int lock; int base_time; } ;
struct TYPE_2__ {struct dummy_systimer_pcm* private_data; } ;


 int FUNC_0 (struct dummy_systimer_pcm*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct dummy_systimer_pcm *VAR_2 = VAR_1->runtime->private_data;
 FUNC_1(&VAR_2->lock);
 VAR_2->base_time = VAR_0;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);
 return 0;
}
