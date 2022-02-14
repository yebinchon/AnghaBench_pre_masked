
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef size_t uint8_t ;
struct isci_softc {size_t controller_count; int config_hook; int * controllers; } ;
struct ISCI_DOMAIN {int index; } ;
struct ISCI_CONTROLLER {int initial_discovery_mask; size_t index; int sim; scalar_t__ has_been_scanned; struct isci_softc* isci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 union ccb* FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (union ccb*) ;

void FUNC_7(
    struct ISCI_CONTROLLER *VAR_3, struct ISCI_DOMAIN *VAR_4)
{
 if (!VAR_3->has_been_scanned)
 {







  VAR_3->initial_discovery_mask &=
      ~(1 << VAR_4->index);

  if (VAR_3->initial_discovery_mask == 0) {
   struct isci_softc *VAR_5 = VAR_3->isci;
   uint8_t VAR_6 = VAR_3->index + 1;

   VAR_3->has_been_scanned = VAR_2;


   FUNC_5(VAR_3->sim, VAR_2);







   union ccb *VAR_7 = FUNC_3();

   FUNC_4(&VAR_7->ccb_h.path, ((void*)0),
       FUNC_0(VAR_3->sim),
       VAR_1, VAR_0);

   FUNC_6(VAR_7);


   if (VAR_6 < VAR_5->controller_count) {



    FUNC_2(
        &VAR_5->controllers[VAR_6]);
   }
   else
   {





    FUNC_1(
        &VAR_5->config_hook);
   }
  }
 }
}
