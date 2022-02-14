
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* prev; struct TYPE_3__* next; } ;
typedef TYPE_1__ dlist_entry ;



__attribute__((used)) static inline void FUNC_0(dlist_entry *VAR_0)
{
 VAR_0->next = VAR_0;
 VAR_0->prev = VAR_0;
}
