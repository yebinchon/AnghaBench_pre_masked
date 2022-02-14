
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int page_cache; int qh_self; int qh_h_next; struct TYPE_5__* h_next; struct TYPE_5__* h_prev; } ;
typedef TYPE_1__ uhci_qh_t ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uhci_qh_t *
FUNC_2(uhci_qh_t *VAR_0, uhci_qh_t *VAR_1)
{
 FUNC_0(11, "%p to %p\n", VAR_0, VAR_1);

 if (VAR_0->h_prev != ((void*)0)) {

  FUNC_0(0, "QH already linked!\n");
  return (VAR_1);
 }


 VAR_0->h_next = VAR_1->h_next;
 VAR_0->qh_h_next = VAR_1->qh_h_next;

 VAR_0->h_prev = VAR_1;

 FUNC_1(VAR_0->page_cache);







 VAR_1->h_next = VAR_0;
 VAR_1->qh_h_next = VAR_0->qh_self;

 FUNC_1(VAR_1->page_cache);

 return (VAR_0);
}
