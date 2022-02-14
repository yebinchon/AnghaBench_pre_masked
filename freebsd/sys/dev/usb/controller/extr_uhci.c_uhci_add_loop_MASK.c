
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_loops; struct uhci_qh* sc_reclaim_qh_p; struct uhci_qh* sc_last_qh_p; } ;
typedef TYPE_1__ uhci_softc_t ;
struct uhci_qh {int page_cache; int qh_self; int qh_h_next; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(uhci_softc_t *VAR_1)
{
 struct uhci_qh *VAR_2;
 struct uhci_qh *VAR_3;






 if (++(VAR_1->sc_loops) == 1) {
  FUNC_0(6, "add\n");

  VAR_2 = VAR_1->sc_last_qh_p;
  VAR_3 = VAR_1->sc_reclaim_qh_p;



  VAR_2->qh_h_next = VAR_3->qh_self;
  FUNC_1(VAR_2->page_cache);
 }
}
