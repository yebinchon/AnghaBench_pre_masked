
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_sleeper {int * task; int timer; } ;
struct futex_q {int list; } ;
struct futex_hash_bucket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct futex_q*,struct futex_hash_bucket*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct futex_hash_bucket *VAR_3, struct futex_q *VAR_4,
    struct hrtimer_sleeper *VAR_5)
{






 FUNC_7(VAR_1);
 FUNC_5(VAR_4, VAR_3);


 if (VAR_5) {
  FUNC_2(&VAR_5->timer, VAR_0);
  if (!FUNC_1(&VAR_5->timer))
   VAR_5->task = ((void*)0);
 }





 if (FUNC_3(!FUNC_4(&VAR_4->list))) {





  if (!VAR_5 || VAR_5->task)
   FUNC_6();
 }
 FUNC_0(VAR_2);
}
