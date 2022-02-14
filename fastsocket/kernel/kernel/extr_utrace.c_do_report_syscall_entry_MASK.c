
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_report {int result; int action; int resume_action; int detaches; int spurious; } ;
struct utrace {scalar_t__ resume; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int ,struct task_struct*,struct utrace*,struct utrace_report*,int ,int ,int,int ,struct pt_regs*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,struct utrace*,struct utrace_report*,int) ;
 int VAR_8 ;
 int FUNC_4 (struct utrace*) ;
 int FUNC_5 (struct task_struct*,struct utrace*,int) ;

__attribute__((used)) static u32 FUNC_6(struct pt_regs *VAR_9,
       struct task_struct *VAR_10,
       struct utrace *VAR_11,
       struct utrace_report *VAR_12,
       u32 VAR_13)
{
 FUNC_4(VAR_11);
 FUNC_0(VAR_6, VAR_10, VAR_11, VAR_12,
    FUNC_1(VAR_0), VAR_8,
    VAR_13 | VAR_12->result | VAR_12->action,
    VAR_7, VAR_9);
 FUNC_3(VAR_10, VAR_11, VAR_12, 0);

 if (VAR_12->action != VAR_3)
  return 0;

 FUNC_5(VAR_10, VAR_11, VAR_12->resume_action);

 if (FUNC_2(VAR_10)) {




  VAR_12->result = VAR_4;
 } else if (VAR_11->resume <= VAR_1) {
  VAR_12->detaches = 0;
  VAR_12->spurious = 1;
  VAR_12->action = VAR_12->resume_action = VAR_2;
  return VAR_5;
 }

 return 0;
}
