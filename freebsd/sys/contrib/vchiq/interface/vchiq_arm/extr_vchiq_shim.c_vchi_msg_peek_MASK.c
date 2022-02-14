
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_4__ {int size; void* data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_2__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

int32_t FUNC_3(VCHI_SERVICE_HANDLE_T VAR_2,
 void **VAR_3,
 uint32_t *VAR_4,
 VCHI_FLAGS_T VAR_5)
{
 SHIM_SERVICE_T *VAR_6 = (SHIM_SERVICE_T *)VAR_2;
 VCHIQ_HEADER_T *VAR_7;

 FUNC_0((VAR_5 != VAR_1) &&
  (VAR_5 != VAR_0));

 if (VAR_5 == VAR_1)
  if (FUNC_1(&VAR_6->queue))
   return -1;

 VAR_7 = FUNC_2(&VAR_6->queue);

 *VAR_3 = VAR_7->data;
 *VAR_4 = VAR_7->size;

 return 0;
}
