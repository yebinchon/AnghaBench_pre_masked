
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; struct list_head* prev; } ;


 int FUNC_0 (int,char*,struct list_head*,struct list_head*,struct list_head*) ;

void FUNC_1(struct list_head *VAR_0,
         struct list_head *VAR_1,
         struct list_head *VAR_2)
{
 FUNC_0(VAR_2->prev != VAR_1,
  "list_add corruption. next->prev should be "
  "prev (%p), but was %p. (next=%p).\n",
  VAR_1, VAR_2->prev, VAR_2);
 FUNC_0(VAR_1->next != VAR_2,
  "list_add corruption. prev->next should be "
  "next (%p), but was %p. (prev=%p).\n",
  VAR_2, VAR_1->next, VAR_1);
 VAR_2->prev = VAR_0;
 VAR_0->next = VAR_2;
 VAR_0->prev = VAR_1;
 VAR_1->next = VAR_0;
}
