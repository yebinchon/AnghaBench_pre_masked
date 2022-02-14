
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_8__ {int remote_device_list; } ;
struct TYPE_7__ {scalar_t__ expander_phy_identifier; struct TYPE_7__* containing_device; } ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_4(
   SCIF_SAS_DOMAIN_T * VAR_1,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   U8 VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4;
   SCI_ABSTRACT_ELEMENT_T * VAR_5 = FUNC_1(
                                         &VAR_1->remote_device_list
                                      );


   FUNC_0(VAR_2 != ((void*)0));



   while (VAR_5 != ((void*)0))
   {
      VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T*)
                  FUNC_3(VAR_5);


      if (
            (VAR_4->containing_device == VAR_2)
         && (VAR_4->expander_phy_identifier == VAR_3)
         )
      {
         return VAR_4;
      }

      VAR_5 = FUNC_2(VAR_5);
   }

   return VAR_0;
}
