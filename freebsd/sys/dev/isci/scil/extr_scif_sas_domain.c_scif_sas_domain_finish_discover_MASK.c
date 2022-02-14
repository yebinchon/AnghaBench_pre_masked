
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state_machine; } ;
struct TYPE_10__ {TYPE_1__ parent; int controller; int remote_device_list; } ;
struct TYPE_9__ {scalar_t__ is_currently_discovered; } ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,TYPE_3__*,TYPE_2__*) ;

void FUNC_7(
   SCIF_SAS_DOMAIN_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = ((void*)0);
   SCI_ABSTRACT_ELEMENT_T * VAR_6 = ((void*)0);

   FUNC_0((
      FUNC_4(VAR_4),
      VAR_1 | VAR_2,
      "scif_sas_domain_finish_discover(0x%x) enter\n",
      VAR_4
   ));




   VAR_6 = FUNC_1(&VAR_4->remote_device_list);
   while (VAR_6 != ((void*)0) )
   {
      VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)
                          FUNC_3(VAR_6);




      VAR_6 = FUNC_2(VAR_6);

      if ( VAR_5->is_currently_discovered == VAR_0 )
      {

         FUNC_6(
            VAR_4->controller, VAR_4, VAR_5
         );
      }
   }

   FUNC_5(
      &VAR_4->parent.state_machine, VAR_3
   );
}
