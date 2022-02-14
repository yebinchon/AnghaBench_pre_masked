
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct task_security_struct {scalar_t__ osid; scalar_t__ sid; } ;
struct linux_binprm {int dummy; } ;
struct itimerval {int dummy; } ;
struct TYPE_9__ {int real_parent; TYPE_2__* sighand; int blocked; TYPE_1__* signal; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int ,int *) ;
 TYPE_3__* VAR_3 ;
 struct task_security_struct* FUNC_3 () ;
 int FUNC_4 (int,struct itimerval*,int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct itimerval*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_12(struct linux_binprm *VAR_5)
{
 const struct task_security_struct *VAR_6 = FUNC_3();
 struct itimerval VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_6->osid;
 VAR_9 = VAR_6->sid;

 if (VAR_9 == VAR_8)
  return;
 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_1, VAR_0, ((void*)0));
 if (VAR_10) {
  FUNC_6(&VAR_7, 0, sizeof VAR_7);
  for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
   FUNC_4(VAR_11, &VAR_7, ((void*)0));
  FUNC_10(&VAR_3->sighand->siglock);
  if (!(VAR_3->signal->flags & VAR_2)) {
   FUNC_0(VAR_3);
   FUNC_5(VAR_3, 1);
   FUNC_9(&VAR_3->blocked);
  }
  FUNC_11(&VAR_3->sighand->siglock);
 }



 FUNC_7(&VAR_4);
 FUNC_1(VAR_3, VAR_3->real_parent);
 FUNC_8(&VAR_4);
}
