
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int page_cache; struct TYPE_9__* h_prev; TYPE_1__* h_next; int qh_h_next; } ;
typedef TYPE_2__ uhci_qh_t ;
struct TYPE_8__ {int page_cache; TYPE_2__* h_prev; } ;


 int FUNC_0 (int,char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uhci_qh_t *
FUNC_2(uhci_qh_t *VAR_0, uhci_qh_t *VAR_1)
{
 FUNC_0(11, "%p from %p\n", VAR_0, VAR_1);




 if (VAR_0->h_prev) {

  VAR_0->h_prev->h_next = VAR_0->h_next;
  VAR_0->h_prev->qh_h_next = VAR_0->qh_h_next;

  FUNC_1(VAR_0->h_prev->page_cache);

  if (VAR_0->h_next) {
   VAR_0->h_next->h_prev = VAR_0->h_prev;
   FUNC_1(VAR_0->h_next->page_cache);
  }
  VAR_1 = ((VAR_1 == VAR_0) ? VAR_0->h_prev : VAR_1);

  VAR_0->h_prev = 0;

  FUNC_1(VAR_0->page_cache);
 }
 return (VAR_1);
}
