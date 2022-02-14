
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct utrace_engine {int dummy; } ;
struct task_struct {TYPE_1__* signal; } ;
typedef enum utrace_resume_action { ____Placeholder_utrace_resume_action } utrace_resume_action ;
struct TYPE_4__ {scalar_t__ stop_code; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*,unsigned long*) ;
 TYPE_2__* FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;
 int FUNC_3 (struct task_struct*,struct utrace_engine*,int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2,
    struct utrace_engine *VAR_3,
    enum utrace_resume_action VAR_4,
    bool VAR_5)
{
 if (VAR_5) {
  unsigned long VAR_6;





  if (FUNC_0(VAR_2, &VAR_6)) {
   VAR_2->signal->flags &= ~VAR_0;
   FUNC_2(VAR_2, &VAR_6);
  }
 }

 if (VAR_4 != VAR_1)
  FUNC_1(VAR_3)->stop_code = 0;

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
