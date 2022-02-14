
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VCHIQ_INSTANCE_T ;
struct TYPE_8__ {int callback_param; int callback; } ;
struct TYPE_7__ {int callback_param; int callback; int queue; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;
typedef TYPE_2__ SERVICE_CREATION_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static SHIM_SERVICE_T *FUNC_3(VCHIQ_INSTANCE_T VAR_1,
 SERVICE_CREATION_T *VAR_2)
{
 SHIM_SERVICE_T *VAR_3 = FUNC_1(sizeof(SHIM_SERVICE_T), VAR_0);

 (void)VAR_1;

 if (VAR_3) {
  if (FUNC_2(&VAR_3->queue, 64)) {
   VAR_3->callback = VAR_2->callback;
   VAR_3->callback_param = VAR_2->callback_param;
  } else {
   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);
  }
 }

 return VAR_3;
}
