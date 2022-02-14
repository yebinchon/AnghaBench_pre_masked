
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int page_cache; struct TYPE_9__* prev; TYPE_1__* next; int ed_next; } ;
typedef TYPE_2__ ohci_ed_t ;
struct TYPE_8__ {int page_cache; TYPE_2__* prev; } ;


 int FUNC_0 (int,char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ohci_ed_t *
FUNC_2(ohci_ed_t *VAR_0, ohci_ed_t *VAR_1)
{
 FUNC_0(11, "%p from %p\n", VAR_0, VAR_1);




 if (VAR_0->prev) {

  VAR_0->prev->next = VAR_0->next;
  VAR_0->prev->ed_next = VAR_0->ed_next;

  FUNC_1(VAR_0->prev->page_cache);

  if (VAR_0->next) {
   VAR_0->next->prev = VAR_0->prev;
   FUNC_1(VAR_0->next->page_cache);
  }
  VAR_1 = ((VAR_1 == VAR_0) ? VAR_0->prev : VAR_1);

  VAR_0->prev = 0;

  FUNC_1(VAR_0->page_cache);
 }
 return (VAR_1);
}
