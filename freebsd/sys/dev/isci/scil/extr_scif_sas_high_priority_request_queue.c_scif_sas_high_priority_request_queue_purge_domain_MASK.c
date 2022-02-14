
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_12__ {int controller; } ;
struct TYPE_11__ {int lock; int pool; } ;
struct TYPE_9__ {scalar_t__ is_internal; TYPE_1__* device; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
struct TYPE_8__ {TYPE_5__* domain; } ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_HIGH_PRIORITY_REQUEST_QUEUE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;
typedef scalar_t__ POINTER_UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(
   SCIF_SAS_HIGH_PRIORITY_REQUEST_QUEUE_T * VAR_2,
   SCIF_SAS_DOMAIN_T * VAR_3
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_4;
   POINTER_UINT VAR_5;
   U32 VAR_6;
   U32 VAR_7;

   FUNC_0((
      FUNC_1(&VAR_2->lock),
      VAR_0 | VAR_1,
      "scif_sas_high_priority_request_queue_purge_domain(0x%x,0x%x) enter\n",
      VAR_2, VAR_3
   ));

   VAR_7 = FUNC_2(VAR_2->pool);

   FUNC_5(VAR_3->controller, &VAR_2->lock);

   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   {
      FUNC_3(VAR_2->pool, VAR_5);

      VAR_4 = (SCIF_SAS_IO_REQUEST_T*) VAR_5;



      if (VAR_4->parent.device->domain != VAR_3)
      {
         FUNC_4(VAR_2->pool, VAR_5);
      }
      else
      {
         if (VAR_4->parent.is_internal)
         {
            SCIF_SAS_INTERNAL_IO_REQUEST_T * VAR_8 =
               (SCIF_SAS_INTERNAL_IO_REQUEST_T *)VAR_4;




            FUNC_7(VAR_3->controller, VAR_8);
         }
      }
   }

   FUNC_6(VAR_3->controller, &VAR_2->lock);
}
