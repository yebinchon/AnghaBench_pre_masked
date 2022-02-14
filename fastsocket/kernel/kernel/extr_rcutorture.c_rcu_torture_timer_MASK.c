
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_torture {scalar_t__ rtort_mbtest; int rtort_pipe_count; } ;
struct TYPE_2__ {int (* readlock ) () ;int (* completed ) () ;int (* readunlock ) (int) ;int (* read_delay ) (int *) ;} ;
typedef int DEFINE_SPINLOCK ;
typedef int DEFINE_RCU_RANDOM ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct rcu_torture* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9;
 static DEFINE_RCU_RANDOM(VAR_10);
 static DEFINE_SPINLOCK(VAR_11);
 struct rcu_torture *VAR_12;
 int VAR_13;

 VAR_8 = VAR_1->readlock();
 VAR_9 = VAR_1->completed();
 VAR_12 = FUNC_4(VAR_6);
 if (VAR_12 == ((void*)0)) {

  VAR_1->readunlock(VAR_8);
  return;
 }
 if (VAR_12->rtort_mbtest == 0)
  FUNC_1(&VAR_2);
 FUNC_5(&VAR_11);
 VAR_1->read_delay(&VAR_10);
 VAR_3++;
 FUNC_6(&VAR_11);
 FUNC_2();
 VAR_13 = VAR_12->rtort_pipe_count;
 if (VAR_13 > VAR_0) {

  VAR_13 = VAR_0;
 }
 ++FUNC_0(VAR_5)[VAR_13];
 VAR_9 = VAR_1->completed() - VAR_9;
 if (VAR_9 > VAR_0) {

  VAR_9 = VAR_0;
 }
 ++FUNC_0(VAR_4)[VAR_9];
 FUNC_3();
 VAR_1->readunlock(VAR_8);
}
