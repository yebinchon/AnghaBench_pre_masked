
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {int resume; int attaching; int attached; int lock; } ;
struct task_struct {struct utrace* utrace; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct utrace*) ;
 struct utrace* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_9(struct task_struct *VAR_3)
{
 struct utrace *VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (FUNC_8(!VAR_4))
  return 0;
 FUNC_5(&VAR_4->lock);
 FUNC_0(&VAR_4->attached);
 FUNC_0(&VAR_4->attaching);
 VAR_4->resume = VAR_1;
 FUNC_6(VAR_3);
 if (FUNC_3(!VAR_3->utrace)) {





  FUNC_4();
  VAR_3->utrace = VAR_4;
 }
 FUNC_7(VAR_3);

 if (FUNC_8(VAR_3->utrace != VAR_4))
  FUNC_1(VAR_2, VAR_4);
 return 1;
}
