
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int ppq; int lock; int tempo; int tick; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_seq_timer * VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0(!VAR_2))
  return -VAR_1;
 if (VAR_3 <= 0)
  return -VAR_1;
 FUNC_3(&VAR_2->lock, VAR_4);
 if (VAR_2->running && (VAR_3 != VAR_2->ppq)) {


  FUNC_4(&VAR_2->lock, VAR_4);
  FUNC_1("seq: cannot change ppq of a running timer\n");
  return -VAR_0;
 }

 VAR_2->ppq = VAR_3;
 FUNC_2(&VAR_2->tick, VAR_2->tempo, VAR_2->ppq);
 FUNC_4(&VAR_2->lock, VAR_4);
 return 0;
}
