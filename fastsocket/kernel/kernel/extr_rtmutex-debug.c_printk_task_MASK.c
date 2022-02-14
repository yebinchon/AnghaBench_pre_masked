
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int prio; int comm; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 if (VAR_0)
  FUNC_0("%16s:%5d [%p, %3d]", VAR_0->comm, FUNC_1(VAR_0), VAR_0, VAR_0->prio);
 else
  FUNC_0("<none>");
}
