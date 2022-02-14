
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_report {int action; int resume_action; } ;
struct utrace {int dummy; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*,struct utrace*,struct utrace_report*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct task_struct*,int ) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*,struct utrace*,int ) ;

__attribute__((used)) static void FUNC_11(struct task_struct *VAR_1,
     struct utrace *VAR_2,
     struct utrace_report *VAR_3)
{
 FUNC_3(VAR_1, VAR_2, VAR_3);

 switch (VAR_3->action) {
 case 128:
  FUNC_10(VAR_1, VAR_2, VAR_3->resume_action);
  break;

 case 132:
  if (!FUNC_6(VAR_1))
   FUNC_5(VAR_1, VAR_0);
  break;

 case 133:
  if (FUNC_4(FUNC_1())) {
   FUNC_8(VAR_1);
   break;
  }






  FUNC_0(1, "UTRACE_BLOCKSTEP when !arch_has_block_step()");

 case 129:
  if (FUNC_4(FUNC_2())) {
   FUNC_9(VAR_1);
  } else {





   FUNC_0(1,
        "UTRACE_SINGLESTEP when !arch_has_single_step()");
  }
  break;

 case 131:
 case 130:
 default:
  FUNC_7(VAR_1);
  break;
 }
}
