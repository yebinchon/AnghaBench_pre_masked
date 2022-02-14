
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * list_head; } ;
struct TYPE_14__ {TYPE_2__ request_list; } ;
struct TYPE_13__ {int core_object; TYPE_5__* domain; } ;
struct TYPE_10__ {TYPE_4__* device; } ;
struct TYPE_12__ {TYPE_1__ parent; } ;
typedef int SCI_TASK_STATUS ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

void FUNC_8(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_PORT_HANDLE_T VAR_3,
   SCI_STATUS VAR_4
)
{
   SCIF_SAS_DOMAIN_T * VAR_5 = (SCIF_SAS_DOMAIN_T*)
                                   FUNC_4(VAR_3);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6;
   SCI_FAST_LIST_ELEMENT_T * VAR_7 = VAR_5->request_list.list_head;
   SCIF_SAS_TASK_REQUEST_T * VAR_8 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0,
      "scic_cb_port_hard_reset_complete(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));

   while (VAR_7 != ((void*)0))
   {
      VAR_8 = (SCIF_SAS_TASK_REQUEST_T*) FUNC_3(VAR_7);
      VAR_7 = FUNC_2(VAR_7);

      if (FUNC_7(VAR_8)
             == VAR_1)
      {
         VAR_6 = VAR_8->parent.device;

         if (VAR_6->domain == VAR_5)
         {
            FUNC_5(VAR_6->core_object);

            FUNC_6(
               FUNC_4(VAR_2),
               VAR_6,
               VAR_8,
               (SCI_TASK_STATUS) VAR_4
            );

            break;
         }
      }
   }
}
