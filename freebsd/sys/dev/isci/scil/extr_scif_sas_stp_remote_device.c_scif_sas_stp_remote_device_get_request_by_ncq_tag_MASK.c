
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ protocol; } ;
struct TYPE_6__ {scalar_t__ ncq_tag; TYPE_1__ sequence; } ;
struct SCIF_SAS_REQUEST {TYPE_2__ stp; struct SCIF_SAS_REMOTE_DEVICE* device; } ;
struct SCIF_SAS_REMOTE_DEVICE {TYPE_4__* domain; } ;
typedef scalar_t__ U8 ;
struct TYPE_7__ {int * list_head; } ;
struct TYPE_8__ {TYPE_3__ request_list; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef struct SCIF_SAS_REQUEST SCIF_SAS_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

struct SCIF_SAS_REQUEST *
FUNC_2(
   struct SCIF_SAS_REMOTE_DEVICE * VAR_1,
   U8 VAR_2
)
{
   SCIF_SAS_DOMAIN_T * VAR_3 = VAR_1->domain;
   SCI_FAST_LIST_ELEMENT_T * VAR_4;
   SCIF_SAS_REQUEST_T * VAR_5 = ((void*)0);
   SCIF_SAS_REQUEST_T * VAR_6 = ((void*)0);

   VAR_4 = VAR_3->request_list.list_head;

   while (VAR_4 != ((void*)0))
   {
      VAR_5 =
         (SCIF_SAS_REQUEST_T*) FUNC_1(VAR_4);



      VAR_4 = FUNC_0(VAR_4);

      if (
            (VAR_5->device == VAR_1) &&
            (VAR_5->stp.sequence.protocol == VAR_0) &&
            (VAR_5->stp.ncq_tag == VAR_2)
         )
      {
         VAR_6 = VAR_5;
      }
   }

   return VAR_6;
}
