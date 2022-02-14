
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int comm; } ;
struct held_lock {int dummy; } ;
typedef enum lock_usage_bit { ____Placeholder_lock_usage_bit } lock_usage_bit ;
struct TYPE_2__ {int usage_traces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (struct held_lock*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct held_lock*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 (struct task_struct*) ;
 int FUNC_15 (struct task_struct*) ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_16(struct task_struct *VAR_4, struct held_lock *VAR_5,
  enum lock_usage_bit VAR_6, enum lock_usage_bit VAR_7)
{
 if (!FUNC_0() || VAR_2)
  return 0;

 FUNC_9("\n=================================\n");
 FUNC_9( "[ INFO: inconsistent lock state ]\n");
 FUNC_6();
 FUNC_9( "---------------------------------\n");

 FUNC_9("inconsistent {%s} -> {%s} usage.\n",
  VAR_3[VAR_6], VAR_3[VAR_7]);

 FUNC_9("%s/%d [HC%u[%lu]:SC%u[%lu]:HE%u:SE%u] takes:\n",
  VAR_4->comm, FUNC_11(VAR_4),
  FUNC_12(VAR_4), FUNC_2() >> VAR_0,
  FUNC_14(VAR_4), FUNC_10() >> VAR_1,
  FUNC_13(VAR_4),
  FUNC_15(VAR_4));
 FUNC_7(VAR_5);

 FUNC_9("{%s} state was registered at:\n", VAR_3[VAR_6]);
 FUNC_8(FUNC_3(VAR_5)->usage_traces + VAR_6, 1);

 FUNC_5(VAR_4);
 FUNC_9("\nother info that might help us debug this:\n");
 FUNC_4(VAR_4);

 FUNC_9("\nstack backtrace:\n");
 FUNC_1();

 return 0;
}
