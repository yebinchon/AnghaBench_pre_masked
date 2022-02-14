
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct outbound_list {TYPE_2__* first; } ;
struct outbound_entry {TYPE_2__* next; TYPE_1__* prev; int qsent; } ;
struct TYPE_4__ {TYPE_1__* prev; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 int FUNC_0 (int ,struct outbound_entry*) ;

void
FUNC_1(struct outbound_list* VAR_0, struct outbound_entry* VAR_1)
{
 if(!VAR_1)
  return;
 FUNC_0(VAR_1->qsent, VAR_1);
 if(VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;
 if(VAR_1->prev)
  VAR_1->prev->next = VAR_1->next;
 else VAR_0->first = VAR_1->next;

}
