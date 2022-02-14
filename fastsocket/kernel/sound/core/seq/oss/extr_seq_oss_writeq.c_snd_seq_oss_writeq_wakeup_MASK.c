
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_writeq {int sync_lock; int sync_sleep; scalar_t__ sync_event_put; int sync_time; } ;
typedef int abstime_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct seq_oss_writeq *VAR_0, abstime_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->sync_lock, VAR_2);
 VAR_0->sync_time = VAR_1;
 VAR_0->sync_event_put = 0;
 if (FUNC_2(&VAR_0->sync_sleep)) {
  FUNC_3(&VAR_0->sync_sleep);
 }
 FUNC_1(&VAR_0->sync_lock, VAR_2);
}
