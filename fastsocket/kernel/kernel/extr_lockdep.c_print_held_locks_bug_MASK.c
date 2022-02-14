
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_1)
{
 if (!FUNC_0())
  return;
 if (VAR_0)
  return;

 FUNC_3("\n=====================================\n");
 FUNC_3( "[ BUG: lock held at task exit time! ]\n");
 FUNC_3( "-------------------------------------\n");
 FUNC_3("%s/%d is exiting with locks still held!\n",
  VAR_1->comm, FUNC_4(VAR_1));
 FUNC_2(VAR_1);

 FUNC_3("\nstack backtrace:\n");
 FUNC_1();
}
