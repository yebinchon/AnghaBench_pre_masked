
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_loops; struct uhci_qh* sc_last_qh_p; } ;
typedef TYPE_1__ uhci_softc_t ;
struct uhci_qh {int page_cache; int qh_h_next; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(uhci_softc_t *VAR_2)
{
 struct uhci_qh *VAR_3;






 if (--(VAR_2->sc_loops) == 0) {
  FUNC_0(6, "remove\n");

  VAR_3 = VAR_2->sc_last_qh_p;
  VAR_3->qh_h_next = FUNC_1(VAR_0);
  FUNC_2(VAR_3->page_cache);
 }
}
