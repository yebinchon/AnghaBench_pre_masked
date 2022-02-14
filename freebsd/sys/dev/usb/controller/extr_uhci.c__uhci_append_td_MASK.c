
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int page_cache; int td_self; int td_next; struct TYPE_7__* next; struct TYPE_7__* prev; } ;
typedef TYPE_1__ uhci_td_t ;


 int FUNC_0 (int,char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uhci_td_t *
FUNC_2(uhci_td_t *VAR_0, uhci_td_t *VAR_1)
{
 FUNC_0(11, "%p to %p\n", VAR_0, VAR_1);



 VAR_0->next = VAR_1->next;
 VAR_0->td_next = VAR_1->td_next;

 VAR_0->prev = VAR_1;

 FUNC_1(VAR_0->page_cache);




 VAR_1->next = VAR_0;
 VAR_1->td_next = VAR_0->td_self;

 FUNC_1(VAR_1->page_cache);

 return (VAR_0);
}
