
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int remote_device_list; } ;
struct TYPE_6__ {int * ea_target_reset_request_scheduled; } ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_5(
   SCIF_SAS_DOMAIN_T * VAR_1
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_2;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3;

   FUNC_0((
      FUNC_4(VAR_1),
      VAR_0,
      "scif_sas_domain_find_next_ea_target_reset(0x%x) enter\n",
      VAR_1
   ));


   VAR_2 = FUNC_1(&VAR_1->remote_device_list);
   while (VAR_2 != ((void*)0) )
   {
      VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T *)
                       FUNC_3(VAR_2);

      VAR_2 = FUNC_2(VAR_2);

      if ( VAR_3->ea_target_reset_request_scheduled != ((void*)0) )
      {
         return VAR_3;
      }
   }

   return ((void*)0);
}
