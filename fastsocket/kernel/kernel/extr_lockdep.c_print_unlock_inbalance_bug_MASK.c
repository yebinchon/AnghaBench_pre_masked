
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct lockdep_map {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct lockdep_map*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_7(struct task_struct *VAR_1, struct lockdep_map *VAR_2,
      unsigned long VAR_3)
{
 if (!FUNC_0())
  return 0;
 if (VAR_0)
  return 0;

 FUNC_5("\n=====================================\n");
 FUNC_5( "[ BUG: bad unlock balance detected! ]\n");
 FUNC_5( "-------------------------------------\n");
 FUNC_5("%s/%d is trying to release lock (",
  VAR_1->comm, FUNC_6(VAR_1));
 FUNC_4(VAR_2);
 FUNC_5(") at:\n");
 FUNC_3(VAR_3);
 FUNC_5("but there are no more locks to release!\n");
 FUNC_5("\nother info that might help us debug this:\n");
 FUNC_2(VAR_1);

 FUNC_5("\nstack backtrace:\n");
 FUNC_1();

 return 0;
}
