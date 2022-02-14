
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* userdata; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 TYPE_2__* FUNC_0 (int ) ;

void *
FUNC_1(VCHIQ_SERVICE_HANDLE_T VAR_0)
{
 VCHIQ_SERVICE_T *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->base.userdata : ((void*)0);
}
