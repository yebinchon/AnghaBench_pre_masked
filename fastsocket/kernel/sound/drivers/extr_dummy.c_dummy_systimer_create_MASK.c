
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct dummy_systimer_pcm {struct snd_pcm_substream* substream; int lock; TYPE_2__ timer; } ;
struct TYPE_3__ {struct dummy_systimer_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct dummy_systimer_pcm* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct dummy_systimer_pcm *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->runtime->private_data = VAR_4;
 FUNC_0(&VAR_4->timer);
 VAR_4->timer.data = (unsigned long) VAR_4;
 VAR_4->timer.function = VAR_2;
 FUNC_2(&VAR_4->lock);
 VAR_4->substream = VAR_3;
 return 0;
}
