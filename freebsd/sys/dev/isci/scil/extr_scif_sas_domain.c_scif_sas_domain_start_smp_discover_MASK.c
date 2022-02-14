
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int remote_device_list; } ;
struct TYPE_6__ {int device_port_width; int is_currently_discovered; int * containing_device; } ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(
   SCIF_SAS_DOMAIN_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_4 =
       FUNC_0(&VAR_2->remote_device_list);

   SCIF_SAS_REMOTE_DEVICE_T * VAR_5;




   while ( VAR_4 != ((void*)0) )
   {
      VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)
                           FUNC_2(VAR_4);

      VAR_5->is_currently_discovered = VAR_0;


      if (VAR_5->containing_device != ((void*)0))
         VAR_5->device_port_width = 1;

      VAR_4 = FUNC_1(VAR_4);
   }


   VAR_3->is_currently_discovered = VAR_1;


   FUNC_3(VAR_3);
}
