
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;


 scalar_t__ FUNC_0 (struct list_head const*) ;

__attribute__((used)) static inline void
FUNC_1(const struct list_head *VAR_0, struct list_head *VAR_1,
    struct list_head *VAR_2)
{
 struct list_head *VAR_3;
 struct list_head *VAR_4;

 if (FUNC_0(VAR_0))
  return;
 VAR_3 = VAR_0->next;
 VAR_4 = VAR_0->prev;
 VAR_3->prev = VAR_1;
 VAR_1->next = VAR_3;
 VAR_4->next = VAR_2;
 VAR_2->prev = VAR_4;
}
