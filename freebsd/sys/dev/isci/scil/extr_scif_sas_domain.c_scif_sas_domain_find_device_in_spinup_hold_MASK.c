
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int remote_device_list; } ;
struct TYPE_7__ {int state_machine; } ;
struct TYPE_8__ {int core_object; TYPE_1__ parent; } ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_7(
   SCIF_SAS_DOMAIN_T * VAR_3
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_4;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5;

   FUNC_0((
      FUNC_4(VAR_3),
      VAR_0,
      "scif_sas_domain_find_device_in_spinup_hold(0x%x) enter\n",
      VAR_3
   ));


   VAR_4 = FUNC_1(&VAR_3->remote_device_list);
   while (VAR_4 != ((void*)0) )
   {
      VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)
                       FUNC_3(VAR_4);




      VAR_4 = FUNC_2(VAR_4);

      if ( FUNC_5(&VAR_5->parent.state_machine) ==
              VAR_1
          && FUNC_6(VAR_5->core_object) ==
                VAR_2 )
      {
         return VAR_5;
      }
   }

   return ((void*)0);
}
