
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; int exit_code; TYPE_1__* sighand; struct signal_struct* signal; } ;
struct signal_struct {int group_stop_count; int flags; int group_exit_code; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct task_struct* VAR_5 ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (int) ;
 struct task_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct signal_struct*) ;
 int FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct task_struct*) ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(int VAR_7)
{
 struct signal_struct *VAR_8 = VAR_5->signal;
 int VAR_9;

 if (!VAR_8->group_stop_count) {
  struct task_struct *VAR_10;

  if (!FUNC_2(VAR_8->flags & VAR_2) ||
      FUNC_14(FUNC_7(VAR_8)))
   return 0;




  VAR_8->group_exit_code = VAR_7;

  VAR_8->group_stop_count = 1;
  for (VAR_10 = FUNC_3(VAR_5); VAR_10 != VAR_5; VAR_10 = FUNC_3(VAR_10))





   if (!(VAR_10->flags & VAR_1) &&
       !FUNC_10(VAR_10)) {
    VAR_8->group_stop_count++;
    FUNC_8(VAR_10, 0);
   }
 }





 VAR_9 = VAR_8->group_stop_count == 1 ? VAR_0 : 0;
 VAR_9 = FUNC_12(VAR_9, VAR_0);





 if (VAR_8->group_stop_count) {
  if (!--VAR_8->group_stop_count)
   VAR_8->flags = VAR_3;
  VAR_5->exit_code = VAR_8->group_exit_code;
  FUNC_0(VAR_4);
 }
 FUNC_9(&VAR_5->sighand->siglock);

 if (VAR_9) {
  FUNC_4(&VAR_6);
  FUNC_1(VAR_5, VAR_9);
  FUNC_5(&VAR_6);
 }


 do {
  FUNC_6();
 } while (FUNC_13());

 FUNC_11();
 VAR_5->exit_code = 0;

 return 1;
}
