
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int current_domain_to_clear_affiliation; } ;
struct TYPE_6__ {TYPE_2__* controller; } ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIF_SAS_DOMAIN_T * VAR_1
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2 =
      FUNC_1(
         VAR_1,
         VAR_0
      );

   if (VAR_2 != ((void*)0))
      FUNC_2(VAR_2);
   else
   {

      SCIF_SAS_CONTROLLER_T * VAR_3 = VAR_1->controller;
      VAR_3->current_domain_to_clear_affiliation++;


      FUNC_0(VAR_1->controller);
   }
}
