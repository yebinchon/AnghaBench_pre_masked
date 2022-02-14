
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_11__ {int core_object; int free_remote_device_pool; } ;
struct TYPE_9__ {int status; int * timer; } ;
struct TYPE_10__ {void* is_config_route_table_needed; TYPE_1__ operation; TYPE_3__* controller; scalar_t__ device_start_count; void* is_port_ready; int request_list; scalar_t__ core_object; int remote_device_list; int parent; } ;
typedef int SCI_OBJECT_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;

void FUNC_8(
   SCIF_SAS_DOMAIN_T * VAR_5,
   U8 VAR_6,
   SCIF_SAS_CONTROLLER_T * VAR_7
)
{
   FUNC_0((
      FUNC_3(VAR_7),
      VAR_1 | VAR_2,
      "scif_sas_domain_construct(0x%x, 0x%x, 0x%x) enter\n",
      VAR_5, VAR_6, VAR_7
   ));

   FUNC_2(
      &VAR_5->parent,
      FUNC_3(VAR_7),
      VAR_4
   );

   FUNC_7(VAR_5);

   FUNC_1(
      &VAR_5->remote_device_list, &VAR_7->free_remote_device_pool
   );



   FUNC_6(
      VAR_7->core_object, VAR_6, &VAR_5->core_object
   );


   FUNC_5(
      (SCI_OBJECT_HANDLE_T) VAR_5->core_object, VAR_5
   );

   FUNC_4(&VAR_5->request_list);

   VAR_5->operation.timer = ((void*)0);

   VAR_5->is_port_ready = VAR_0;
   VAR_5->device_start_count = 0;
   VAR_5->controller = VAR_7;
   VAR_5->operation.status = VAR_3;
   VAR_5->is_config_route_table_needed = VAR_0;
}
