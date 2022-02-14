
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_report {int spurious; int action; } ;
struct utrace_engine_ops {int (* report_quiesce ) (int ,struct utrace_engine*,unsigned long) ;} ;
struct utrace_engine {unsigned long flags; struct utrace_engine_ops* ops; } ;
struct utrace {struct utrace_engine* reporting; } ;
struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct task_struct*,struct utrace*,struct utrace_report*,struct utrace_engine*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct utrace_engine*,unsigned long) ;

__attribute__((used)) static const struct utrace_engine_ops *FUNC_5(
 struct utrace *VAR_3, struct utrace_report *VAR_4,
 struct utrace_engine *VAR_5, struct task_struct *VAR_6,
 unsigned long VAR_7)
{
 const struct utrace_engine_ops *VAR_8;
 unsigned long VAR_9;
 VAR_3->reporting = VAR_5;
 FUNC_2();






 VAR_9 = VAR_5->flags;
 FUNC_3();
 VAR_8 = VAR_5->ops;

 if (VAR_9 & FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5,
        (*VAR_8->report_quiesce)(VAR_4->action,
          VAR_5, VAR_7)))
   return ((void*)0);
  VAR_3->reporting = VAR_5;
  FUNC_2();
  VAR_9 = VAR_5->flags;
 }

 if (VAR_9 & VAR_0)
  VAR_4->action = VAR_2;

 if (VAR_9 & VAR_7) {
  VAR_4->spurious = 0;
  return VAR_8;
 }

 VAR_3->reporting = ((void*)0);
 return ((void*)0);
}
