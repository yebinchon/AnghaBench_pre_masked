
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ dlist_entry ;



__attribute__((used)) static inline void FUNC_0(dlist_entry *VAR_0, dlist_entry *VAR_1)
{
 VAR_0->next = VAR_1->next;
 VAR_0->prev = VAR_1;
 VAR_1->next->prev = VAR_0;
 VAR_1->next = VAR_0;
}
