
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {TYPE_1__* binfmt; int mmlist; int mm_users; } ;
struct TYPE_2__ {int module; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct mm_struct*) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct mm_struct*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct mm_struct *VAR_1)
{
 FUNC_7();

 if (FUNC_0(&VAR_1->mm_users)) {
  FUNC_1(VAR_1);
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_11(VAR_1, ((void*)0));
  if (!FUNC_6(&VAR_1->mmlist)) {
   FUNC_12(&VAR_0);
   FUNC_5(&VAR_1->mmlist);
   FUNC_13(&VAR_0);
  }
  FUNC_10(VAR_1);
  if (VAR_1->binfmt)
   FUNC_9(VAR_1->binfmt->module);
  FUNC_8(VAR_1);
 }
}
