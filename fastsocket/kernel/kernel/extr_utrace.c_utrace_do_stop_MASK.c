
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utrace {scalar_t__ resume; } ;
struct task_struct {TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_7(struct task_struct *VAR_2, struct utrace *VAR_3)
{
 if (FUNC_5(VAR_2)) {




  FUNC_3(&VAR_2->sighand->siglock);
  if (FUNC_1(FUNC_5(VAR_2)))
   FUNC_0(VAR_2, VAR_0);
  FUNC_4(&VAR_2->sighand->siglock);
 } else if (VAR_3->resume > VAR_1) {
  VAR_3->resume = VAR_1;
  FUNC_2(VAR_2);
 }

 return FUNC_6(VAR_2);
}
