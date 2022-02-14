
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rcu_torture {scalar_t__ rtort_mbtest; int rtort_pipe_count; } ;
struct TYPE_2__ {int (* readlock ) () ;int (* completed ) () ;scalar_t__ irq_capable; int (* readunlock ) (int) ;int (* read_delay ) (int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct timer_list*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (struct timer_list*,int) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_8 ;
 struct rcu_torture* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct timer_list*,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (struct timer_list*) ;

__attribute__((used)) static int
FUNC_24(void *VAR_13)
{
 int VAR_14;
 int VAR_15;
 FUNC_0(VAR_8);
 struct rcu_torture *VAR_16;
 int VAR_17;
 struct timer_list VAR_18;

 FUNC_1("rcu_torture_reader task started");
 FUNC_15(VAR_4, 19);
 if (VAR_6 && VAR_3->irq_capable)
  FUNC_16(&VAR_18, VAR_12, 0);

 do {
  if (VAR_6 && VAR_3->irq_capable) {
   if (!FUNC_23(&VAR_18))
    FUNC_6(&VAR_18, 1);
  }
  VAR_15 = VAR_3->readlock();
  VAR_14 = VAR_3->completed();
  VAR_16 = FUNC_9(VAR_11);
  if (VAR_16 == ((void*)0)) {

   VAR_3->readunlock(VAR_15);
   FUNC_13(VAR_1);
   continue;
  }
  if (VAR_16->rtort_mbtest == 0)
   FUNC_3(&VAR_7);
  VAR_3->read_delay(&VAR_8);
  FUNC_7();
  VAR_17 = VAR_16->rtort_pipe_count;
  if (VAR_17 > VAR_2) {

   VAR_17 = VAR_2;
  }
  ++FUNC_2(VAR_10)[VAR_17];
  VAR_14 = VAR_3->completed() - VAR_14;
  if (VAR_14 > VAR_2) {

   VAR_14 = VAR_2;
  }
  ++FUNC_2(VAR_9)[VAR_14];
  FUNC_8();
  VAR_3->readunlock(VAR_15);
  FUNC_12();
  FUNC_10("rcu_torture_reader");
 } while (!FUNC_5() && VAR_5 == VAR_0);
 FUNC_1("rcu_torture_reader task stopping");
 FUNC_11("rcu_torture_reader");
 if (VAR_6 && VAR_3->irq_capable)
  FUNC_4(&VAR_18);
 while (!FUNC_5())
  FUNC_14(1);
 return 0;
}
