
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int FUNC_0 (struct work_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long*,int) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_2)
{
 static unsigned long VAR_3;

 if (!VAR_1)
  return;

 if (FUNC_3(&VAR_3, 1) == 0) {
  VAR_1 = 0;
  FUNC_2();
  FUNC_0(VAR_2);

  VAR_3 = 0;
  if (VAR_1)
   FUNC_1(&VAR_0);
 }
}
