
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int timer; int timeq; int tickq; int use_lock; } ;


 int FUNC_0 (struct snd_seq_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct snd_seq_queue *VAR_0)
{

 FUNC_4(VAR_0->timer);
 FUNC_2(VAR_0);

 FUNC_5(&VAR_0->use_lock);

 FUNC_1(&VAR_0->tickq);
 FUNC_1(&VAR_0->timeq);
 FUNC_3(&VAR_0->timer);

 FUNC_0(VAR_0);
}
