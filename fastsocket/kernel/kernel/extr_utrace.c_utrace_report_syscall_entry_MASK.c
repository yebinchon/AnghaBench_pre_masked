
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct utrace {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_4__ {int result; } ;


 int FUNC_0 (TYPE_1__) ;
 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_1 (struct pt_regs*,struct task_struct*,struct utrace*,TYPE_1__*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 struct utrace* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(struct pt_regs *VAR_3)
{
 struct task_struct *VAR_4 = VAR_1;
 struct utrace *VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_2);
 u32 VAR_6 = 0;

 do {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5,
       &VAR_2, VAR_6);
 } while (VAR_6);

 return FUNC_3(VAR_2.result) == VAR_0;
}
