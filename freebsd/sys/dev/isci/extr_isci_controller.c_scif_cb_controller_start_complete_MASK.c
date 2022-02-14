
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ISCI_CONTROLLER {int initial_discovery_mask; TYPE_1__* domain; int is_started; } ;
struct TYPE_2__ {int sci_object; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ISCI_CONTROLLER*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(SCI_CONTROLLER_HANDLE_T VAR_4,
    SCI_STATUS VAR_5)
{
 uint32_t VAR_6;
 struct ISCI_CONTROLLER *VAR_7 = (struct ISCI_CONTROLLER *)
     FUNC_1(VAR_4);

 VAR_7->is_started = VAR_3;






 VAR_7->initial_discovery_mask = (1 << VAR_1) - 1;

 for(VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  SCI_STATUS VAR_8;
  SCI_DOMAIN_HANDLE_T VAR_9 =
      VAR_7->domain[VAR_6].sci_object;

  VAR_8 = FUNC_2(
   VAR_9,
   FUNC_3(VAR_9),
   VAR_0
  );

  if (VAR_8 != VAR_2)
  {
   FUNC_0(
       VAR_7, &VAR_7->domain[VAR_6]);
  }
 }
}
