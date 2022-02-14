
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* next; struct netmap_mem_d* prev; } ;
struct TYPE_2__ {struct netmap_mem_d* prev; } ;


 struct netmap_mem_d* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct netmap_mem_d *VAR_1)
{
 VAR_1->prev->next = VAR_1->next;
 VAR_1->next->prev = VAR_1->prev;

 if (VAR_0 == VAR_1)
  VAR_0 = VAR_1->prev;

 VAR_1->prev = VAR_1->next = ((void*)0);
}
