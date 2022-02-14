
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_5__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
struct TYPE_6__ {int handle; int queue; } ;
typedef TYPE_2__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;

int32_t FUNC_5(VCHI_SERVICE_HANDLE_T VAR_2,
 void *VAR_3,
 uint32_t VAR_4,
 uint32_t *VAR_5,
 VCHI_FLAGS_T VAR_6)
{
 SHIM_SERVICE_T *VAR_7 = (SHIM_SERVICE_T *)VAR_2;
 VCHIQ_HEADER_T *VAR_8;

 FUNC_0((VAR_6 != VAR_1) &&
  (VAR_6 != VAR_0));

 if (VAR_6 == VAR_1)
  if (FUNC_3(&VAR_7->queue))
   return -1;

 VAR_8 = FUNC_4(&VAR_7->queue);

 FUNC_1(VAR_3, VAR_8->data, VAR_8->size < VAR_4 ?
  VAR_8->size : VAR_4);

 *VAR_5 = VAR_8->size;

 FUNC_2(VAR_7->handle, VAR_8);

 return 0;
}
