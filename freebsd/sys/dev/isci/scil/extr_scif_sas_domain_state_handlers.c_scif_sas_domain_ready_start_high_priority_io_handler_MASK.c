
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int request_list; } ;
struct TYPE_7__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_6__ {int list_element; int parent; } ;
struct TYPE_5__ {scalar_t__ (* start_high_priority_io_handler ) (int *,int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_DOMAIN_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_DOMAIN_T * VAR_3,
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T*) VAR_3;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                           VAR_4;
   SCIF_SAS_REQUEST_T * VAR_8 = (SCIF_SAS_REQUEST_T*) VAR_5;
   SCI_STATUS VAR_9;

   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_ready_start_high_priority_request_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   VAR_9 = VAR_7->state_handlers->start_high_priority_io_handler(
               &VAR_7->parent, &VAR_8->parent
            );

   if (VAR_9 == VAR_2)
   {
      if ( ! FUNC_3(
                &VAR_6->request_list, &VAR_8->list_element))

         FUNC_2(
            &VAR_6->request_list, &VAR_8->list_element
         );
   }

   return VAR_9;
}
