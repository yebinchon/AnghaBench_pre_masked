
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ U16 ;
struct TYPE_8__ {int * list_head; } ;
struct TYPE_11__ {TYPE_1__ request_list; } ;
struct TYPE_9__ {int core_object; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

SCIF_SAS_REQUEST_T * FUNC_5(
   SCIF_SAS_DOMAIN_T * VAR_2,
   U16 VAR_3
)
{
   SCI_FAST_LIST_ELEMENT_T * VAR_4 = VAR_2->request_list.list_head;
   SCIF_SAS_IO_REQUEST_T * VAR_5 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0 | VAR_1,
      "scif_sas_domain_get_request_by_io_tag(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));

   while (VAR_4 != ((void*)0))
   {
      VAR_5 = (SCIF_SAS_IO_REQUEST_T*) FUNC_3(VAR_4);


      if (FUNC_4(VAR_5->parent.core_object) == VAR_3)
         return &VAR_5->parent;

      VAR_4 = FUNC_2(VAR_4);
   }

   return ((void*)0);
}
