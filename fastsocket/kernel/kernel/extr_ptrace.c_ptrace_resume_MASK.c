
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {long exit_code; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int ) ;
 scalar_t__ FUNC_3 (long) ;
 scalar_t__ FUNC_4 (long) ;
 scalar_t__ FUNC_5 (long) ;
 int FUNC_6 (struct task_struct*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (long) ;
 int FUNC_12 (struct task_struct*) ;

__attribute__((used)) static int FUNC_13(struct task_struct *VAR_6, long VAR_7, long VAR_8)
{
 if (!FUNC_11(VAR_8))
  return -VAR_0;

 if (VAR_7 == VAR_1)
  FUNC_6(VAR_6, VAR_5);
 else
  FUNC_2(VAR_6, VAR_5);
 if (FUNC_3(VAR_7)) {
  if (FUNC_7(!FUNC_0()))
   return -VAR_0;
  FUNC_9(VAR_6);
 } else if (FUNC_4(VAR_7) || FUNC_5(VAR_7)) {
  if (FUNC_7(!FUNC_1()))
   return -VAR_0;
  FUNC_10(VAR_6);
 } else {
  FUNC_8(VAR_6);
 }

 VAR_6->exit_code = VAR_8;
 FUNC_12(VAR_6);

 return 0;
}
