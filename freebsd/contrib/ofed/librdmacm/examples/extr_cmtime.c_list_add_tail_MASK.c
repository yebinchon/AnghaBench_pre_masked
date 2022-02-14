
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;
struct work_list {int cond; int lock; struct list_head list; } ;


 int FUNC_0 (struct work_list*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct work_list *VAR_0, struct list_head *VAR_1)
{
 int VAR_2;
 FUNC_2(&VAR_0->lock);
 VAR_2 = FUNC_0(VAR_0);
 VAR_1->prev = VAR_0->list.prev;
 VAR_1->next = &VAR_0->list;
 VAR_1->prev->next = VAR_0->list.prev = VAR_1;
 FUNC_3(&VAR_0->lock);
 if (VAR_2)
  FUNC_1(&VAR_0->cond);
}
