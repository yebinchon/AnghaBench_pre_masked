
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int page_cache; int ed_self; int ed_next; struct TYPE_5__* next; struct TYPE_5__* prev; scalar_t__ ed_tailp; } ;
typedef TYPE_1__ ohci_ed_t ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ohci_ed_t *
FUNC_2(ohci_ed_t *VAR_0, ohci_ed_t *VAR_1)
{
 FUNC_0(11, "%p to %p\n", VAR_0, VAR_1);

 if (VAR_0->prev != ((void*)0)) {

  FUNC_0(0, "ED already linked!\n");
  return (VAR_1);
 }


 VAR_0->next = VAR_1->next;
 VAR_0->ed_next = VAR_1->ed_next;
 VAR_0->ed_tailp = 0;

 VAR_0->prev = VAR_1;

 FUNC_1(VAR_0->page_cache);





 VAR_1->next = VAR_0;
 VAR_1->ed_next = VAR_0->ed_self;

 FUNC_1(VAR_1->page_cache);

 return (VAR_0);
}
