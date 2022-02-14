
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outbound_list {struct outbound_entry* first; } ;
struct outbound_entry {struct outbound_entry* prev; struct outbound_entry* next; } ;



void
FUNC_0(struct outbound_list* VAR_0, struct outbound_entry* VAR_1)
{
 if(VAR_0->first)
  VAR_0->first->prev = VAR_1;
 VAR_1->next = VAR_0->first;
 VAR_1->prev = ((void*)0);
 VAR_0->first = VAR_1;
}
