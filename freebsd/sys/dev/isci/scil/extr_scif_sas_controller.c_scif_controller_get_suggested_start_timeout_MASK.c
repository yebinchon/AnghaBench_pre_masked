
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int core_object; } ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

U32 FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_1
)
{
   SCIF_SAS_CONTROLLER_T * VAR_2 = (SCIF_SAS_CONTROLLER_T*) VAR_1;


   if (VAR_1 == VAR_0)
      return 0;




   return FUNC_0(VAR_2->core_object);
}
