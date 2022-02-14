
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int queue; int owner; int locked; scalar_t__ klocked; int * timer; int * timeq; int * tickq; int use_lock; int timer_mutex; int check_lock; int owner_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **) ;
 void* FUNC_5 () ;
 int FUNC_6 (int **) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct snd_seq_queue *FUNC_10(int VAR_1, int VAR_2)
{
 struct snd_seq_queue *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_3("malloc failed for snd_seq_queue_new()\n");
  return ((void*)0);
 }

 FUNC_9(&VAR_3->owner_lock);
 FUNC_9(&VAR_3->check_lock);
 FUNC_2(&VAR_3->timer_mutex);
 FUNC_8(&VAR_3->use_lock);
 VAR_3->queue = -1;

 VAR_3->tickq = FUNC_5();
 VAR_3->timeq = FUNC_5();
 VAR_3->timer = FUNC_7();
 if (VAR_3->tickq == ((void*)0) || VAR_3->timeq == ((void*)0) || VAR_3->timer == ((void*)0)) {
  FUNC_4(&VAR_3->tickq);
  FUNC_4(&VAR_3->timeq);
  FUNC_6(&VAR_3->timer);
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->owner = VAR_1;
 VAR_3->locked = VAR_2;
 VAR_3->klocked = 0;

 return VAR_3;
}
