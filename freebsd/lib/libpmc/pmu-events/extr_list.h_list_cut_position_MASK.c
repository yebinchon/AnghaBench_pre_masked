
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*,struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (struct list_head*) ;

__attribute__((used)) static inline void FUNC_4(struct list_head *VAR_0,
  struct list_head *VAR_1, struct list_head *VAR_2)
{
 if (FUNC_2(VAR_1))
  return;
 if (FUNC_3(VAR_1) &&
  (VAR_1->next != VAR_2 && VAR_1 != VAR_2))
  return;
 if (VAR_2 == VAR_1)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
