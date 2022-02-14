
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskstats {int nivcsw; int nvcsw; int version; } ;
struct task_struct {int nivcsw; int nvcsw; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct taskstats*,struct task_struct*) ;
 int FUNC_1 (struct taskstats*,struct task_struct*) ;
 struct task_struct* FUNC_2 (int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct taskstats*,int ,int) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct taskstats*,struct task_struct*) ;

__attribute__((used)) static int FUNC_9(pid_t VAR_2, struct task_struct *VAR_3,
  struct taskstats *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3) {
  FUNC_6();
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_3(VAR_3);
  FUNC_7();
  if (!VAR_3)
   return -VAR_0;
 } else
  FUNC_3(VAR_3);

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));







 FUNC_1(VAR_4, VAR_3);


 VAR_4->version = VAR_1;
 VAR_4->nvcsw = VAR_3->nvcsw;
 VAR_4->nivcsw = VAR_3->nivcsw;
 FUNC_0(VAR_4, VAR_3);


 FUNC_8(VAR_4, VAR_3);


 FUNC_5(VAR_3);
 return VAR_5;

}
