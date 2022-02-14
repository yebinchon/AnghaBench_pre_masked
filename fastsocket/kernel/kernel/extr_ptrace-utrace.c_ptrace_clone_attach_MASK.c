
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signal; } ;
struct task_struct {int flags; TYPE_1__ pending; scalar_t__ ptrace; struct task_struct* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,struct task_struct*) ;
 struct task_struct* VAR_3 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_5,
    int VAR_6)
{
 struct task_struct *VAR_7 = VAR_3;
 struct task_struct *VAR_8;
 bool VAR_9 = 1;

 if (FUNC_6(FUNC_3(VAR_5, VAR_6))) {
  FUNC_0(1);
  return;
 }

 FUNC_7(&VAR_4);
 VAR_8 = VAR_7->parent;
 if (!(VAR_8->flags & VAR_0) && VAR_7->ptrace) {
  VAR_5->ptrace = VAR_7->ptrace;
  FUNC_1(VAR_5, VAR_8);
  VAR_9 = 0;
 }
 FUNC_8(&VAR_4);
 if (FUNC_6(VAR_9)) {
  FUNC_2(VAR_5);
  return;
 }

 FUNC_5(&VAR_5->pending.signal, VAR_1);
 FUNC_4(VAR_5, VAR_2);
}
