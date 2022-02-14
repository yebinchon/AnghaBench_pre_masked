
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kgdb_state {int threadid; int linux_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct task_struct* FUNC_1 (int ,int ) ;
 int FUNC_2 (char**,int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct kgdb_state *VAR_3)
{
 char *VAR_4 = &VAR_1[1];
 struct task_struct *VAR_5;

 FUNC_2(&VAR_4, &VAR_3->threadid);
 VAR_5 = FUNC_1(VAR_3->linux_regs, VAR_3->threadid);
 if (VAR_5)
  FUNC_3(VAR_2, "OK");
 else
  FUNC_0(VAR_2, -VAR_0);
}
