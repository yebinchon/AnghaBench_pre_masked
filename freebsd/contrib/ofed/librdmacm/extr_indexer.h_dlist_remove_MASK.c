
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* prev; TYPE_1__* next; } ;
typedef TYPE_3__ dlist_entry ;
struct TYPE_6__ {TYPE_1__* next; } ;
struct TYPE_5__ {TYPE_2__* prev; } ;



__attribute__((used)) static inline void FUNC_0(dlist_entry *VAR_0)
{
 VAR_0->prev->next = VAR_0->next;
 VAR_0->next->prev = VAR_0->prev;
}
