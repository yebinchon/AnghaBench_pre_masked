
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct opaque_vchi_service_t {int dummy; } ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
struct TYPE_6__ {TYPE_2__* message; struct opaque_vchi_service_t* service; } ;
typedef TYPE_1__ VCHI_HELD_MSG_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_7__ {int size; void* data; } ;
typedef TYPE_2__ VCHIQ_HEADER_T ;
struct TYPE_8__ {scalar_t__ handle; int queue; } ;
typedef TYPE_3__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;

int32_t FUNC_3(VCHI_SERVICE_HANDLE_T VAR_2,
 void **VAR_3,
 uint32_t *VAR_4,
 VCHI_FLAGS_T VAR_5,
 VCHI_HELD_MSG_T *VAR_6)
{
 SHIM_SERVICE_T *VAR_7 = (SHIM_SERVICE_T *)VAR_2;
 VCHIQ_HEADER_T *VAR_8;

 FUNC_0((VAR_5 != VAR_1) &&
  (VAR_5 != VAR_0));

 if (VAR_5 == VAR_1)
  if (FUNC_1(&VAR_7->queue))
   return -1;

 VAR_8 = FUNC_2(&VAR_7->queue);

 *VAR_3 = VAR_8->data;
 *VAR_4 = VAR_8->size;

 VAR_6->service =
  (struct opaque_vchi_service_t *)VAR_7->handle;
 VAR_6->message = VAR_8;

 return 0;
}
