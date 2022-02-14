
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* prev; TYPE_1__* next; int page_cache; int sitd_next; } ;
typedef TYPE_2__ ehci_sitd_t ;
struct TYPE_8__ {int page_cache; TYPE_2__* prev; } ;


 int FUNC_0 (int,char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ehci_sitd_t *
FUNC_2(ehci_sitd_t *VAR_0, ehci_sitd_t *VAR_1)
{
 FUNC_0(11, "%p from %p\n", VAR_0, VAR_1);



 VAR_0->prev->next = VAR_0->next;
 VAR_0->prev->sitd_next = VAR_0->sitd_next;

 FUNC_1(VAR_0->prev->page_cache);

 if (VAR_0->next) {
  VAR_0->next->prev = VAR_0->prev;
  FUNC_1(VAR_0->next->page_cache);
 }
 return ((VAR_1 == VAR_0) ? VAR_0->prev : VAR_1);
}
