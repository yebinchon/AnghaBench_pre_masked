
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_timewait_death_row {scalar_t__ tw_count; int slot; int thread_slots; int death_lock; scalar_t__ period; int tw_timer; int twkill_work; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inet_timewait_death_row*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(unsigned long VAR_2)
{
 struct inet_timewait_death_row *VAR_3;
 int unsigned VAR_4;

 VAR_3 = (struct inet_timewait_death_row *)VAR_2;
 FUNC_3(&VAR_3->death_lock);

 if (VAR_3->tw_count == 0)
  goto out;

 VAR_4 = 0;
 if (FUNC_0(VAR_3, VAR_3->slot)) {
  VAR_3->thread_slots |= (1 << VAR_3->slot);
  FUNC_2(&VAR_3->twkill_work);
  VAR_4 = 1;
 } else {

  if (VAR_3->tw_count)
   VAR_4 = 1;
  VAR_3->slot = ((VAR_3->slot + 1) & (VAR_0 - 1));
 }
 if (VAR_4)
  FUNC_1(&VAR_3->tw_timer, VAR_1 + VAR_3->period);
out:
 FUNC_4(&VAR_3->death_lock);
}
