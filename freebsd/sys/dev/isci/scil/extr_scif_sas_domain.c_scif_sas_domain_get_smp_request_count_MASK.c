
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_5__ {int * list_head; } ;
struct TYPE_7__ {TYPE_1__ request_list; } ;
struct TYPE_6__ {int core_object; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;
typedef scalar_t__ SCIC_TRANSPORT_PROTOCOL ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

U8 FUNC_3(
   SCIF_SAS_DOMAIN_T * VAR_1
)
{
   SCI_FAST_LIST_ELEMENT_T * VAR_2 = VAR_1->request_list.list_head;
   SCIF_SAS_REQUEST_T * VAR_3 = ((void*)0);
   U8 VAR_4 = 0;
   SCIC_TRANSPORT_PROTOCOL VAR_5;




   while (VAR_2 != ((void*)0))
   {
      VAR_3 = (SCIF_SAS_REQUEST_T*) FUNC_1(VAR_2);


      VAR_2 = FUNC_0(VAR_2);

      VAR_5 = FUNC_2(VAR_3->core_object);

      if ( VAR_5 == VAR_0)
         VAR_4++;
   }

   return VAR_4;
}
