
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int __count; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct user_struct*,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_0 ;

void FUNC_4(struct user_struct *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1)
  return;

 FUNC_3(VAR_2);
 if (FUNC_0(&VAR_1->__count, &VAR_0))
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_2(VAR_2);
}
