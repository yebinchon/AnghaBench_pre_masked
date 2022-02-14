
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int remote_device_list; } ;
struct TYPE_10__ {int core_object; } ;
struct TYPE_9__ {scalar_t__ low; scalar_t__ high; } ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef TYPE_2__* SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_DOMAIN_HANDLE_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_1__*) ;

SCI_REMOTE_DEVICE_HANDLE_T FUNC_6(
   SCI_DOMAIN_HANDLE_T VAR_2,
   SCI_SAS_ADDRESS_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T*) VAR_2;
   SCI_ABSTRACT_ELEMENT_T * VAR_5 = FUNC_1(
                                             &VAR_4->remote_device_list
                                          );
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6;
   SCI_SAS_ADDRESS_T VAR_7;

   FUNC_0((
      FUNC_4(VAR_2),
      VAR_0,
      "scif_domain_get_device_by_sas_address(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));



   while (VAR_5 != ((void*)0))
   {
      VAR_6 = (SCIF_SAS_REMOTE_DEVICE_T*)
                  FUNC_3(VAR_5);

      FUNC_5(
         VAR_6->core_object, &VAR_7
      );


      if ( (VAR_7.low == VAR_3->low)
         && (VAR_7.high == VAR_3->high) )
      {
         return VAR_6;
      }

      VAR_5 = FUNC_2(VAR_5);
   }

   return VAR_1;
}
