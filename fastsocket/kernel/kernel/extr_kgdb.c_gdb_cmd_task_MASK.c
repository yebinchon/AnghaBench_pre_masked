
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kgdb_state {int threadid; int linux_regs; int kgdb_usethreadid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct task_struct* FUNC_1 (int ,int ) ;
 struct task_struct* VAR_1 ;
 int FUNC_2 (char**,int *) ;
 struct task_struct* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct kgdb_state *VAR_5)
{
 struct task_struct *VAR_6;
 char *VAR_7;

 switch (VAR_3[1]) {
 case 'g':
  VAR_7 = &VAR_3[2];
  FUNC_2(&VAR_7, &VAR_5->threadid);
  VAR_6 = FUNC_1(VAR_5->linux_regs, VAR_5->threadid);
  if (!VAR_6 && VAR_5->threadid > 0) {
   FUNC_0(VAR_4, -VAR_0);
   break;
  }
  VAR_2 = VAR_6;
  VAR_5->kgdb_usethreadid = VAR_5->threadid;
  FUNC_3(VAR_4, "OK");
  break;
 case 'c':
  VAR_7 = &VAR_3[2];
  FUNC_2(&VAR_7, &VAR_5->threadid);
  if (!VAR_5->threadid) {
   VAR_1 = ((void*)0);
  } else {
   VAR_6 = FUNC_1(VAR_5->linux_regs, VAR_5->threadid);
   if (!VAR_6 && VAR_5->threadid > 0) {
    FUNC_0(VAR_4, -VAR_0);
    break;
   }
   VAR_1 = VAR_6;
  }
  FUNC_3(VAR_4, "OK");
  break;
 }
}
