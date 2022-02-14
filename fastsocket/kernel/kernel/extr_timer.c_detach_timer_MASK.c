
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int prev; int * next; } ;
struct timer_list {struct list_head entry; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct timer_list*) ;

__attribute__((used)) static inline void FUNC_2(struct timer_list *VAR_1,
    int VAR_2)
{
 struct list_head *VAR_3 = &VAR_1->entry;

 FUNC_1(VAR_1);

 FUNC_0(VAR_3->prev, VAR_3->next);
 if (VAR_2)
  VAR_3->next = ((void*)0);
 VAR_3->prev = VAR_0;
}
