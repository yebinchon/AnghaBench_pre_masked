
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_torture {int rtort_pipe_count; int rtort_mbtest; } ;
struct TYPE_2__ {long (* completed ) () ;int (* deferred_free ) (struct rcu_torture*) ;} ;
typedef int DEFINE_RCU_RANDOM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct rcu_torture*,struct rcu_torture*) ;
 long FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 struct rcu_torture* FUNC_7 () ;
 struct rcu_torture* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (struct rcu_torture*) ;
 long FUNC_13 () ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(void *VAR_8)
{
 int VAR_9;
 long VAR_10 = FUNC_4();
 struct rcu_torture *VAR_11;
 struct rcu_torture *VAR_12;
 static DEFINE_RCU_RANDOM(VAR_13);

 FUNC_0("rcu_torture_writer task started");
 FUNC_10(VAR_3, 19);

 do {
  FUNC_9(1);
  VAR_11 = FUNC_7();
  if (VAR_11 == ((void*)0))
   continue;
  VAR_11->rtort_pipe_count = 0;
  FUNC_14(FUNC_5(&VAR_13) & 0x3ff);
  VAR_12 = VAR_5;
  VAR_11->rtort_mbtest = 1;
  FUNC_3(VAR_5, VAR_11);
  FUNC_11();
  if (VAR_12) {
   VAR_9 = VAR_12->rtort_pipe_count;
   if (VAR_9 > VAR_1)
    VAR_9 = VAR_1;
   FUNC_1(&VAR_7[VAR_9]);
   VAR_12->rtort_pipe_count++;
   VAR_2->deferred_free(VAR_12);
  }
  VAR_6++;
  VAR_10 = VAR_2->completed();
  FUNC_6("rcu_torture_writer");
 } while (!FUNC_2() && VAR_4 == VAR_0);
 FUNC_0("rcu_torture_writer task stopping");
 FUNC_8("rcu_torture_writer");
 while (!FUNC_2())
  FUNC_9(1);
 return 0;
}
