
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {TYPE_1__* prev; TYPE_2__* next; } ;
struct TYPE_6__ {struct list_head* prev; } ;
struct TYPE_5__ {struct list_head* next; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,char*,struct list_head*,struct list_head*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2(struct list_head *VAR_2)
{
 FUNC_0(VAR_2->prev->next != VAR_2,
  "list_del corruption. prev->next should be %p, "
  "but was %p\n", VAR_2, VAR_2->prev->next);
 FUNC_0(VAR_2->next->prev != VAR_2,
  "list_del corruption. next->prev should be %p, "
  "but was %p\n", VAR_2, VAR_2->next->prev);
 FUNC_1(VAR_2->prev, VAR_2->next);
 VAR_2->next = VAR_0;
 VAR_2->prev = VAR_1;
}
