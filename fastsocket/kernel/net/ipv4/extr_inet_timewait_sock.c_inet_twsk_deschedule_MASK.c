
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_timewait_sock {int dummy; } ;
struct inet_timewait_death_row {scalar_t__ tw_count; int hashinfo; int death_lock; int tw_timer; } ;


 int FUNC_0 (struct inet_timewait_sock*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct inet_timewait_sock*) ;
 int FUNC_3 (struct inet_timewait_sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inet_timewait_sock *VAR_0,
     struct inet_timewait_death_row *VAR_1)
{
 FUNC_4(&VAR_1->death_lock);
 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_0);
  if (--VAR_1->tw_count == 0)
   FUNC_1(&VAR_1->tw_timer);
 }
 FUNC_5(&VAR_1->death_lock);
 FUNC_0(VAR_0, VAR_1->hashinfo);
}
