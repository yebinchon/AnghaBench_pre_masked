
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct task_struct* FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct task_struct* VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct task_struct *VAR_8;
 int VAR_9 = 0;

 if (VAR_6 != VAR_0)
  return 0;
 VAR_6 = VAR_2;
 FUNC_2(VAR_3);
 FUNC_6(&VAR_4);
 VAR_8 = FUNC_3(VAR_5, ((void*)0), "smbiod");
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  FUNC_4(VAR_3);
 }

 FUNC_5(&VAR_4);
 if (VAR_9 < 0) {
  VAR_6 = VAR_0;
  VAR_7 = ((void*)0);
 } else {
  VAR_6 = VAR_1;
  VAR_7 = VAR_8;
 }
 return VAR_9;
}
