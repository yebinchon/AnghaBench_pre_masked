
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {scalar_t__* saved_auxv; } ;


 int FUNC_0 (struct mm_struct*) ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (char*,scalar_t__*,int) ;
 struct mm_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_1, char *VAR_2)
{
 struct mm_struct *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_1(VAR_3);
 if (VAR_3 && !FUNC_0(VAR_3)) {
  unsigned int VAR_5 = 0;
  do {
   VAR_5 += 2;
  } while (VAR_3->saved_auxv[VAR_5 - 2] != 0);
  VAR_4 = VAR_5 * sizeof(VAR_3->saved_auxv[0]);
  if (VAR_4 > VAR_0)
   VAR_4 = VAR_0;
  FUNC_2(VAR_2, VAR_3->saved_auxv, VAR_4);
  FUNC_4(VAR_3);
 }
 return VAR_4;
}
